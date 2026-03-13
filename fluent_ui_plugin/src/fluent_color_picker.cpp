#include "fluent_color_picker.h"

#include <QPainter>
#include <QPaintEvent>
#include <QPainterPath>
#include <QFontMetrics>
#include <QMouseEvent>
#include <QApplication>
#include <QScreen>
#include <QtMath>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QStyleOption>
#include <QDebug>

//////////////////////////////////////////////////////////////////////////
// FluentColorPickerPopup
//////////////////////////////////////////////////////////////////////////

static inline float clamp01(float x) { return x < 0 ? 0 : (x > 1 ? 1 : x); }

FluentColorPickerPopup::FluentColorPickerPopup(const QColor &initial, QWidget *parent)
    : QDialog(parent, Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint),
    m_color(initial)
{
    setAttribute(Qt::WA_TranslucentBackground);
    setAttribute(Qt::WA_DeleteOnClose, false);

    setSizeGripEnabled(false);

    m_wheelThickness = 26;

    // initialize HSV from initial color
    QColor c = initial;
    if (!c.isValid()) c = QColor(Qt::white);
    double hh, ss, vv, aa;
    c.getHsvF(&hh, &ss, &vv, &aa);
    m_h = float(hh);
    m_s = float(ss);
    m_v = float(vv);
    m_previewColor = c;

    // child widgets (hex) - layout created in resizeEvent / paint
    m_hexEdit = new FluentLineEdit(this);
    m_hexEdit->setMaxLength(9); // #RRGGBB or #RRGGBBAA
    m_hexEdit->setText(m_color.name(QColor::HexRgb).toUpper());
    connect(m_hexEdit, &QLineEdit::editingFinished, this, &FluentColorPickerPopup::onHexEdited);

    // initial wheel build (size will be corrected on resize)
    rebuildHueWheel();

    // small default size
    resize(280, 280);
}

void FluentColorPickerPopup::setColor(const QColor &c)
{
    if (!c.isValid()) return;
    m_color = c;
    double hh, ss, vv, aa;
    c.getHsvF(&hh, &ss, &vv, &aa);
    m_h = float(hh);
    m_s = float(ss);
    m_v = float(vv);
    m_previewColor = c;
    if (m_hexEdit) m_hexEdit->setText(m_color.name(QColor::HexRgb).toUpper());
    update();
    emit colorChanged(m_color);
}

// Build a high-resolution wheel and downscale to smooth edges (supersampling)
void FluentColorPickerPopup::rebuildHueWheel()
{
    int target = qMin(width(), height()) - 80;
    if (target < 120) target = 120;
    // ensure odd size for symmetry
    if (target % 2 == 0) target += 1;

    // supersample factor (2x) to reduce jaggies when scaling down
    const int SS = 2;
    int sup = target * SS;
    if (sup % 2 == 0) ++sup; // keep odd

    QImage supImg(sup, sup, QImage::Format_ARGB32_Premultiplied);
    supImg.fill(Qt::transparent);

    QPointF center(sup / 2.0, sup / 2.0);
    float outerR = sup / 2.0f;
    float thickness = m_wheelThickness * float(SS); // scale thickness for supersample
    float innerR = outerR - thickness;

    for (int y = 0; y < sup; ++y) {
        QRgb *line = reinterpret_cast<QRgb*>(supImg.scanLine(y));
        for (int x = 0; x < sup; ++x) {
            float dx = x + 0.5f - center.x();
            float dy = y + 0.5f - center.y();
            float r = std::hypot(dx, dy);
            if (r >= innerR && r <= outerR) {
                float angle = std::atan2(dy, dx); // -pi..pi
                float deg = (angle * 180.0f / M_PI);
                if (deg < 0) deg += 360.0f;
                float h = deg / 360.0f;
                QColor col = QColor::fromHsvF(h, 1.0, 1.0);
                line[x] = col.rgba();
            } else {
                line[x] = qRgba(0,0,0,0);
            }
        }
    }

    // downscale to target size using SmoothTransformation for anti-aliasing
    m_hueWheel = supImg.scaled(target, target, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
}

QPointF FluentColorPickerPopup::centerF() const
{
    return QPointF(m_wheelRect.center());
}

void FluentColorPickerPopup::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);
    // rebuild wheel based on available size
    int avail = qMin(width(), height()) - 80;
    if (avail < 120) avail = 120;
    if (m_hueWheel.isNull() || m_hueWheel.width() != avail) {
        // force rebuild to new size
        m_hueWheel = QImage(); // clear
        // determine wheel size
        int wheelSize = avail | 1;

        // Compute placement: center the wheel horizontally; vertically center in the area above controls
        int controlsHeight = 28 + 12 + 8; // control widget height + spacing + small margin
        int topMargin = 16;
        int availableH = height() - controlsHeight - topMargin;
        if (availableH < wheelSize) {
            // fall back to placing wheel at top margin if not enough space
            int left = (width() - wheelSize) / 2;
            int top = topMargin;
            m_wheelRect = QRect(left, top, wheelSize, wheelSize);
        } else {
            int left = (width() - wheelSize) / 2;
            int top = topMargin + (availableH - wheelSize) / 2;
            m_wheelRect = QRect(left, top, wheelSize, wheelSize);
        }

        rebuildHueWheel();
    } else {
        int wheelSize = m_hueWheel.width();
        int controlsHeight = 28 + 12 + 8;
        int topMargin = 16;
        int availableH = height() - controlsHeight - topMargin;
        int left = (width() - wheelSize) / 2;
        int top = availableH >= wheelSize ? (topMargin + (availableH - wheelSize) / 2) : topMargin;
        m_wheelRect = QRect(left, top, wheelSize, wheelSize);
    }

    // compute SV square: square that fits inside inner circle
    float outerR = m_wheelRect.width() / 2.0f;
    float innerR = outerR - m_wheelThickness;
    // largest square inside circle radius=innerR: side = innerR * sqrt(2)
    int side = int(innerR * M_SQRT2) - 8;
    if (side < 48) side = 48;
    QPoint center = m_wheelRect.center();
    m_svRect = QRect(center.x() - side/2, center.y() - side/2, side, side);

    // position hex under wheel (use full width since no buttons)
    int controlsTop = m_wheelRect.bottom() + 12;
    m_hexEdit->setGeometry(16, controlsTop, width() - 32, 28);

    update();
}

void FluentColorPickerPopup::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter p(this);
    // enable highest quality antialiasing + smooth pixmap transform
    p.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing | QPainter::SmoothPixmapTransform | QPainter::HighQualityAntialiasing);

    // background rounded
    QRect r = rect().adjusted(1, 1, -1, -1);
    QColor bg = getBackgroundColor();
    p.setPen(getBorderColor());
    p.setBrush(bg);
    p.drawRoundedRect(r, 8, 8);

    // draw hue wheel image centered in m_wheelRect
    if (!m_hueWheel.isNull() && m_wheelRect.isValid()) {
        QImage scaled = m_hueWheel;
        if (scaled.size() != m_wheelRect.size()) scaled = m_hueWheel.scaled(m_wheelRect.size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        // draw using QRectF for subpixel positioning
        p.drawImage(QRectF(m_wheelRect), scaled, QRectF(scaled.rect()));

        // draw crisp inner and outer borders for the ring
        QPointF c = m_wheelRect.center();
        float outerR = m_wheelRect.width() / 2.0f;
        float innerR = outerR - m_wheelThickness;

        QPen edgePen(getBorderColor());
        edgePen.setWidthF(1.0);
        edgePen.setJoinStyle(Qt::RoundJoin);
        p.setPen(edgePen);
        p.setBrush(Qt::NoBrush);

        // outer
        QRectF outerRect(c.x() - outerR + 0.5, c.y() - outerR + 0.5, outerR*2 - 1.0, outerR*2 - 1.0);
        p.drawEllipse(outerRect);
        // inner
        QRectF innerRect(c.x() - innerR - 0.5, c.y() - innerR - 0.5, innerR*2 + 1.0, innerR*2 + 1.0);
        p.drawEllipse(innerRect);
    }

    // draw SV square: gradient from white->hue horizontally, black vertical overlay for value
    // create gradient image for SV
    if (m_svRect.isValid()) {
        QImage sv(m_svRect.size(), QImage::Format_ARGB32_Premultiplied);
        for (int y = 0; y < sv.height(); ++y) {
            float vv = 1.0f - float(y) / float(sv.height()-1);
            for (int x = 0; x < sv.width(); ++x) {
                float ss = float(x) / float(sv.width()-1);
                QColor col = QColor::fromHsvF(m_h, ss, vv);
                sv.setPixelColor(x, y, col);
            }
        }
        p.drawImage(m_svRect.topLeft(), sv);
        // draw border
        p.setPen(getBorderColor());
        p.setBrush(Qt::NoBrush);
        p.drawRect(m_svRect.adjusted(1,1,-1,-1));
    }

    // draw selection indicators
    // hue indicator: at angle m_h
    QPointF c = m_wheelRect.center();
    float outerR = m_wheelRect.width() / 2.0f;
    float innerR = outerR - m_wheelThickness;
    float radius = (outerR + innerR) / 2.0f;
    float angle = (m_h * 360.0f) * M_PI / 180.0f;
    QPointF huePt = QPointF(c.x() + radius * qCos(angle), c.y() + radius * qSin(angle));

    // draw a small stroked circle for hue indicator (anti-aliased)
    QPen indicatorPen(getBorderColor());
    indicatorPen.setWidthF(1.5);
    p.setPen(indicatorPen);
    p.setBrush(getBackgroundColor());
    p.drawEllipse(QRectF(huePt.x()-6.5, huePt.y()-6.5, 13.0, 13.0));
    // inner highlight
    p.setPen(QPen(getBackgroundColor(), 1));
    p.drawEllipse(QRectF(huePt.x()-4.5, huePt.y()-4.5, 9.0, 9.0));

    // SV indicator
    if (m_svRect.isValid()) {
        int sx = m_svRect.left() + int(m_s * (m_svRect.width()-1));
        int sy = m_svRect.top() + int((1.0 - m_v) * (m_svRect.height()-1));
        QPointF svPt(sx, sy);
        p.setPen(getBorderColor());
        p.setBrush(getBackgroundColor());
        p.drawEllipse(QRectF(svPt.x()-6.5, svPt.y()-6.5, 13.0, 13.0));
    }
}

bool FluentColorPickerPopup::pointInHueRing(const QPoint &p, qreal &outAngle) const
{
    if (!m_wheelRect.isValid()) return false;
    QPointF c = m_wheelRect.center();
    float dx = p.x() - c.x();
    float dy = p.y() - c.y();
    float r = std::hypot(dx, dy);
    float outerR = m_wheelRect.width() / 2.0f;
    float innerR = outerR - m_wheelThickness;
    if (r >= innerR && r <= outerR) {
        float angle = std::atan2(dy, dx);
        outAngle = angle;
        return true;
    }
    return false;
}

bool FluentColorPickerPopup::pointInSVSquare(const QPoint &p, QPoint &outLocal) const
{
    if (!m_svRect.isValid()) return false;
    if (m_svRect.contains(p)) {
        outLocal = QPoint(p.x() - m_svRect.left(), p.y() - m_svRect.top());
        return true;
    }
    return false;
}

void FluentColorPickerPopup::updateColorFromWheel(const QPoint &pos)
{
    qreal angle = 0;
    if (!pointInHueRing(pos, angle)) return;
    float deg = float(angle * 180.0 / M_PI);
    if (deg < 0) deg += 360.0f;
    m_h = deg / 360.0f;
    // rebuild SV (since hue changed)
    m_color = QColor::fromHsvF(m_h, m_s, m_v);
    m_previewColor = m_color;
    m_hexEdit->setText(m_color.name(QColor::HexRgb).toUpper());
    update();
    emit colorChanged(m_color);
}

void FluentColorPickerPopup::updateColorFromSV(const QPoint &pos)
{
    QPoint local;
    if (!pointInSVSquare(pos, local)) return;
    float ss = float(local.x()) / float(m_svRect.width() - 1);
    float vv = 1.0f - float(local.y()) / float(m_svRect.height() - 1);
    m_s = clamp01(ss);
    m_v = clamp01(vv);
    m_color = QColor::fromHsvF(m_h, m_s, m_v);
    m_previewColor = m_color;
    m_hexEdit->setText(m_color.name(QColor::HexRgb).toUpper());
    update();
    emit colorChanged(m_color);
}

void FluentColorPickerPopup::mousePressEvent(QMouseEvent *event)
{
    if (event->button() != Qt::LeftButton) {
        QDialog::mousePressEvent(event);
        return;
    }

    QPoint pos = event->pos();
    qreal angle;
    if (pointInHueRing(pos, angle)) {
        m_mouseDownOnWheel = true;
        updateColorFromWheel(pos);
        event->accept();
        return;
    }
    QPoint local;
    if (pointInSVSquare(pos, local)) {
        m_mouseDownOnSV = true;
        updateColorFromSV(pos);
        event->accept();
        return;
    }

    // click outside content: close
    if (!rect().contains(pos)) {
        close();
    }

    QDialog::mousePressEvent(event);
}

void FluentColorPickerPopup::mouseMoveEvent(QMouseEvent *event)
{
    QPoint pos = event->pos();
    if (m_mouseDownOnWheel) {
        updateColorFromWheel(pos);
        event->accept();
        return;
    }
    if (m_mouseDownOnSV) {
        updateColorFromSV(pos);
        event->accept();
        return;
    }
    QDialog::mouseMoveEvent(event);
}

void FluentColorPickerPopup::mouseReleaseEvent(QMouseEvent *event)
{
    if (m_mouseDownOnWheel || m_mouseDownOnSV) {
        m_mouseDownOnWheel = m_mouseDownOnSV = false;
        event->accept();
        return;
    }
    QDialog::mouseReleaseEvent(event);
}

void FluentColorPickerPopup::closeEvent(QCloseEvent *event)
{
    emit aboutToClose();
    QDialog::closeEvent(event);
}

void FluentColorPickerPopup::onHexEdited()
{
    QString txt = m_hexEdit->text().trimmed();
    if (!txt.startsWith("#")) txt = "#" + txt;
    QColor c(txt);
    if (c.isValid()) {
        setColor(c);
        emit colorChanged(m_color);
    }
}

//////////////////////////////////////////////////////////////////////////
// FluentColorPicker (the clickable widget that opens popup)
//////////////////////////////////////////////////////////////////////////

FluentColorPicker::FluentColorPicker(QWidget *parent)
    : QWidget(parent)
    , m_color(Qt::white)
{
    setAttribute(Qt::WA_Hover);
    setCursor(Qt::PointingHandCursor);
    setFocusPolicy(Qt::StrongFocus);
    //setMinimumSize(44, 28);
}

QSize FluentColorPicker::sizeHint() const
{
    return QSize(80, 32);
}

void FluentColorPicker::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter p(this);
    p.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    QRect r = rect().adjusted(1, 1, -1, -1);
    QColor bg = getBackgroundColor();
    if (m_isPressed) bg = bg.darker(110);

    // background rounded rect
    p.setPen(QPen(getBorderColor(), 1));
    p.setBrush(bg);
    p.drawRoundedRect(r, 8, 8);

    // small color preview square on left
    int sw = qMin(20, height() - 8);
    QRect colorRect(r.left() + 8, r.center().y() - sw/2, sw, sw);
    p.setBrush(m_color);
    p.setPen(QPen(getBorderColor(), 1));
    p.drawRoundedRect(colorRect, 4, 4);

    // text: hex
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    p.setFont(font);
    p.setPen(getTextColor());
    QString txt = m_color.name(QColor::HexRgb).toUpper();
    QRect textRect = r.adjusted(sw + 16, 0, -8, 0);
    p.drawText(textRect, Qt::AlignVCenter | Qt::AlignLeft, txt);
}

void FluentColorPicker::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_isPressed = true;
        update();
        event->accept();
    } else {
        QWidget::mousePressEvent(event);
    }
}

void FluentColorPicker::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && m_isPressed) {
        m_isPressed = false;
        showPopup();
        event->accept();
    } else {
        m_isPressed = false;
        QWidget::mouseReleaseEvent(event);
    }
    update();
}

void FluentColorPicker::showPopup()
{
    closePopup();

    m_popup.reset(new FluentColorPickerPopup(m_color, this));
    // connect signals
    connect(m_popup.data(), &FluentColorPickerPopup::colorChanged, this, [this](const QColor &c){
        // live update
        m_color = c;
        update();
        emit colorChanged(c);
    });
    connect(m_popup.data(), &FluentColorPickerPopup::colorSelected, this, [this](const QColor &c){
        m_color = c;
        update();
        emit colorSelected(c);
        emit colorChanged(c);
    });
    connect(m_popup.data(), &FluentColorPickerPopup::aboutToClose, this, [this](){
        m_isPressed = false;
        update();
    });

    // place popup under widget
    QPoint globalPos = mapToGlobal(QPoint(0, height()));
    QScreen *screen = QApplication::screenAt(globalPos);
    if (!screen) screen = QApplication::primaryScreen();
    QRect screenGeom = screen->availableGeometry();

    QSize hint = m_popup->sizeHint();
    // show with a comfortable width
    int w = qBound(210, hint.width(), 480);
    int h = qBound(210, hint.height(), 420);
    m_popup->resize(w, h);

    int x = globalPos.x();
    int y = globalPos.y();

    if (x + w > screenGeom.right()) x = screenGeom.right() - w - 8;
    if (y + h > screenGeom.bottom()) y = mapToGlobal(QPoint(0, 0)).y() - h;

    if (x < screenGeom.left()) x = screenGeom.left() + 8;
    if (y < screenGeom.top()) y = screenGeom.top() + 8;

    m_popup->move(x, y);
    m_popup->show();
    m_popup->raise();
    m_popup->activateWindow();
}

void FluentColorPicker::closePopup()
{
    if (m_popup) {
        m_popup->close();
        m_popup.reset();
    }
}

void FluentColorPicker::setColor(const QColor &c)
{
    if (!c.isValid()) return;
    m_color = c;
    if (m_popup) m_popup->setColor(c);
    update();
    emit colorChanged(c);
}
