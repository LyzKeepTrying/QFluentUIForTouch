#include "fluent_clock_picker.h"

#include <QPainter>
#include <QMouseEvent>
#include <QPainterPath>
#include <QFontMetrics>
#include <QApplication>

FluentClockPicker::FluentClockPicker(QWidget* parent)
    : QWidget(parent),
    m_time(QTime::currentTime()),
    m_pressedCol(Column::None),
    m_pressedArrow(Arrow::None)
{
    setMouseTracking(true);
    setContentsMargins(k_margin, k_margin, k_margin, k_margin);
}

QSize FluentClockPicker::sizeHint() const {
    return QSize(240, 120);
}

QSize FluentClockPicker::minimumSizeHint() const {
    return QSize(240, 120);
}

void FluentClockPicker::setTime(const QTime& t) {
    if (!t.isValid()) return;
    if (m_time == t) return;
    m_time = QTime(t.hour(), t.minute(), t.second());
    update();
    emit timeChanged(m_time);
}

QRect FluentClockPicker::columnRect(Column col) const {
    int cols = 3;
    int left = k_margin;
    int right = width() - k_margin;
    int fullW = right - left;
    int colW = (fullW - (getSpacing() * (cols - 1))) / cols;
    int idx = static_cast<int>(col);
    int x = left + idx * (colW + getSpacing());
    int top = k_margin;
    int h = height() - top - k_margin;
    return QRect(x, top, colW, h);
}

QRect FluentClockPicker::upButtonRect(Column col) const {
    QRect r = columnRect(col);
    int bs = getButtonSize();
    int cx = r.center().x();
    int y = r.top();
    return QRect(cx - bs/2, y + 6, bs, bs);
}

QRect FluentClockPicker::downButtonRect(Column col) const {
    QRect r = columnRect(col);
    int bs = getButtonSize();
    int cx = r.center().x();
    int y = r.bottom();
    return QRect(cx - bs/2, y - 6 - bs, bs, bs);
}

QRect FluentClockPicker::valueRect(Column col) const {
    QRect r = columnRect(col);
    int top = upButtonRect(col).bottom() + getSpacing() / 2;
    int bottom = downButtonRect(col).top() - getSpacing() / 2;
    return QRect(r.left(), top, r.width(), bottom - top);
}

FluentClockPicker::Column FluentClockPicker::hitColumnAt(const QPoint& p) const {
    for (int i = 0; i < 3; ++i) {
        Column c = static_cast<Column>(i);
        if (columnRect(c).contains(p)) return c;
    }
    return Column::None;
}

// 使用圆形命中检测：只有落在按钮实际圆形内部才算命中
FluentClockPicker::Arrow FluentClockPicker::hitArrowAt(const QPoint& p, Column& outCol) const {
    for (int i = 0; i < 3; ++i) {
        Column c = static_cast<Column>(i);
        QRect upR = upButtonRect(c);
        QRect dnR = downButtonRect(c);

        // 计算半径和中心（使用宽度的一半作为半径）
        QPoint upCenter = upR.center();
        int upRadius = qMin(upR.width(), upR.height()) / 2;
        int dxu = p.x() - upCenter.x();
        int dyu = p.y() - upCenter.y();
        if (dxu*dxu + dyu*dyu <= upRadius * upRadius) {
            outCol = c;
            return Arrow::Up;
        }

        QPoint dnCenter = dnR.center();
        int dnRadius = qMin(dnR.width(), dnR.height()) / 2;
        int dxd = p.x() - dnCenter.x();
        int dyd = p.y() - dnCenter.y();
        if (dxd*dxd + dyd*dyd <= dnRadius * dnRadius) {
            outCol = c;
            return Arrow::Down;
        }
    }
    outCol = Column::None;
    return Arrow::None;
}

void FluentClockPicker::paintEvent(QPaintEvent* /*ev*/) {
    QPainter p(this);
    p.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // background + border
    p.setPen(getBorderColor());
    p.setBrush(getBackgroundColor());
    p.drawRoundedRect(rect().adjusted(1,1,-1,-1), 8, 8);

    // fonts
    QFont valueFont(QFluentUI::Font::default_text_font);
    valueFont.setPixelSize(getFontSize() + 4);
    valueFont.setBold(true);

    QFont labelFont(QFluentUI::Font::default_text_font);
    labelFont.setPixelSize(getFontSize() - 2);

    for (int i = 0; i < 3; ++i) {
        Column col = static_cast<Column>(i);

        QRect upR = upButtonRect(col);
        QRect dnR = downButtonRect(col);
        QRect valR = valueRect(col);

        // draw buttons as circles (apply pressed effect to button background)
        auto drawBtn = [&](const QRect& r, bool pressed){
            QColor base = getSelectedColor();
            QColor fill = pressed ? base.darker(110) : base;
            p.setPen(Qt::NoPen);
            p.setBrush(fill);
            // draw circular button
            p.drawEllipse(r);

            // subtle highlight/edge for better look
            QColor edge = fill.lighter(110);
            QPen pen(edge);
            pen.setWidthF(0.6);
            p.setPen(pen);
            p.setBrush(Qt::NoBrush);
            p.drawEllipse(r);

            // reset pen/brush for next draws
            p.setPen(Qt::NoPen);
            p.setBrush(Qt::NoBrush);
        };

        bool pressedUp = (m_pressedCol == col && m_pressedArrow == Arrow::Up);
        bool pressedDown = (m_pressedCol == col && m_pressedArrow == Arrow::Down);

        drawBtn(upR, pressedUp);
        drawBtn(dnR, pressedDown);

        // draw chevrons (white stroke) centered in button
        auto drawChevron = [&](const QRect& r, bool up){
            QPainterPath path;
            QPointF c = r.center();
            qreal s = r.width() * 0.18;
            if (up) {
                path.moveTo(c.x() - s, c.y() + s*0.4);
                path.lineTo(c.x(), c.y() - s);
                path.lineTo(c.x() + s, c.y() + s*0.4);
            } else {
                path.moveTo(c.x() - s, c.y() - s*0.4);
                path.lineTo(c.x(), c.y() + s);
                path.lineTo(c.x() + s, c.y() - s*0.4);
            }
            QPen pn(Qt::white, qMax(1.6, r.width()*0.08), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
            p.setPen(pn);
            p.setBrush(Qt::NoBrush);
            p.drawPath(path);
            p.setPen(Qt::NoPen);
        };

        drawChevron(upR, true);
        drawChevron(dnR, false);

        // value box — light background
        QRect valInner = valR.adjusted(8,8,-8,-8);
        p.setPen(Qt::NoPen);
        QColor valBg = getBackgroundColor().lighter(102);
        p.setBrush(valBg);
        p.drawRoundedRect(valInner, 6, 6);

        // 将数字区域以列中心对齐（使数字和按钮水平对齐）
        int cx = columnRect(col).center().x();
        int numW = int(valInner.width() * 0.5); // 数字区域占 50%（可适度调整）
        QRect numRect(cx - numW/2, valInner.top(), numW, valInner.height());
        // 标签放在右侧剩余区域
        QRect lblRect(numRect.right(), valInner.top(), valInner.right() - numRect.right(), valInner.height());

        // prepare number text and label text
        QString numText;
        QString lbl;
        switch (col) {
        case Column::Hour:
            numText = QString::number(m_time.hour()).rightJustified(2, '0');
            lbl = QStringLiteral("时");
            break;
        case Column::Minute:
            numText = QString::number(m_time.minute()).rightJustified(2, '0');
            lbl = QStringLiteral("分");
            break;
        case Column::Second:
            numText = QString::number(m_time.second()).rightJustified(2, '0');
            lbl = QStringLiteral("秒");
            break;
        default:
            numText = QStringLiteral("--");
            lbl = QString();
            break;
        }

        // draw number (ALWAYS normal text color; pressed effect shown on button only)
        p.setFont(valueFont);
        p.setPen(getTextColor());
        p.drawText(numRect, Qt::AlignVCenter | Qt::AlignHCenter, numText);

        // draw label (smaller)
        p.setFont(labelFont);
        QColor labelColor = getTextColor().darker(120);
        p.setPen(labelColor);
        p.drawText(lblRect.adjusted(0,0,-4,0), Qt::AlignVCenter | Qt::AlignRight, lbl);

        // reset pen/brush for next column
        p.setBrush(Qt::NoBrush);
        p.setPen(Qt::NoPen);
    }
}

void FluentClockPicker::mousePressEvent(QMouseEvent* ev) {
    QPoint p = ev->pos();
    Column c = Column::None;
    Arrow a = hitArrowAt(p, c);
    if (a != Arrow::None && c != Column::None) {
        m_pressedCol = c;
        m_pressedArrow = a;
        update();
        ev->accept();
        return;
    }

    Column col = hitColumnAt(p);
    if (col != Column::None) {
        // 仅当点击在数字区域时才视为对数值的点击（与绘制时一致）
        QRect valR = valueRect(col);
        QRect valInner = valR.adjusted(8,8,-8,-8);
        int cx = columnRect(col).center().x();
        int numW = int(valInner.width() * 0.5);
        QRect numRect(cx - numW/2, valInner.top(), numW, valInner.height());
        if (numRect.contains(p)) {
            // clicking number area increments by 1
            changeValue(col, +1);
            ev->accept();
            return;
        }
    }

    QWidget::mousePressEvent(ev);
}

void FluentClockPicker::mouseReleaseEvent(QMouseEvent* ev) {
    QPoint p = ev->pos();
    if (m_pressedCol != Column::None && m_pressedArrow != Arrow::None) {
        Column c = Column::None;
        Arrow a = hitArrowAt(p, c);
        // only perform action if released on same arrow
        if (a == m_pressedArrow && c == m_pressedCol) {
            changeValue(m_pressedCol, (m_pressedArrow == Arrow::Up) ? +1 : -1);
        }
        m_pressedCol = Column::None;
        m_pressedArrow = Arrow::None;
        update();
        ev->accept();
        return;
    }

    QWidget::mouseReleaseEvent(ev);
}

void FluentClockPicker::changeValue(Column col, int delta) {
    if (col == Column::Hour) {
        int h = m_time.hour();
        h = (h + delta) % 24;
        if (h < 0) h += 24;
        m_time.setHMS(h, m_time.minute(), m_time.second());
    } else if (col == Column::Minute) {
        int mm = m_time.minute();
        mm = (mm + delta) % 60;
        if (mm < 0) mm += 60;
        m_time.setHMS(m_time.hour(), mm, m_time.second());
    } else if (col == Column::Second) {
        int s = m_time.second();
        s = (s + delta) % 60;
        if (s < 0) s += 60;
        m_time.setHMS(m_time.hour(), m_time.minute(), s);
    }
    emit timeChanged(m_time);
    update();
}
