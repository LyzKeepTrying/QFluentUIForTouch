#include "fluent_time_picker.h"

#include <QPainter>
#include <QStyleOption>
#include <QPainterPath>
#include <QFontMetrics>
#include <QMouseEvent>
#include <QApplication>
#include <QScreen>
#include <QDateTime>
#include <QDebug>

//
// FluentTimePickerPopup
//
FluentTimePickerPopup::FluentTimePickerPopup(QWidget* parent)
    : QDialog(parent, Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint)
{
    setAttribute(Qt::WA_TranslucentBackground);
    setAttribute(Qt::WA_DeleteOnClose, false);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    m_clock = new FluentClockPicker(this);
    layout->addWidget(m_clock);

    setLayout(layout);
    resize(m_clock->sizeHint());
}

void FluentTimePickerPopup::mousePressEvent(QMouseEvent* event) {
    // 点击弹窗外部区域则关闭
    if (!rect().contains(event->pos())) {
        close();
    }
    QDialog::mousePressEvent(event);
}

void FluentTimePickerPopup::closeEvent(QCloseEvent* event) {
    emit aboutToClose();
    QDialog::closeEvent(event);
}

//
// FluentTimePicker
//
FluentTimePicker::FluentTimePicker(QWidget* parent)
    : QWidget(parent)
    , m_minTime(QTime(0,0,0))
    , m_maxTime(QTime(23,59,59))
{
    setAttribute(Qt::WA_Hover);
    setCursor(Qt::PointingHandCursor);
    setFocusPolicy(Qt::StrongFocus);

    updateDisplayText();
}

QSize FluentTimePicker::sizeHint() const {
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    QFontMetrics fm(font);
    QString sample = QTime(23,59,59).toString(getTimeFormat());
    int textWidth = fm.horizontalAdvance(sample) + 30;
    int width = qMax(120, textWidth);
    int height = 48;
    return QSize(width, height);
}

void FluentTimePicker::setTime(const QTime& t) {
    if (!t.isValid()) return;
    if (m_minTime.isValid() && t < m_minTime) return;
    if (m_maxTime.isValid() && t > m_maxTime) return;
    if (m_selectedTime == t) return;

    m_selectedTime = QTime(t.hour(), t.minute(), t.second());
    updateDisplayText();
    update();
    emit timeChanged(m_selectedTime);

    if (m_popup && m_popup->clock()) {
        m_popup->clock()->setTime(m_selectedTime);
    }
}

void FluentTimePicker::setMinimumTime(const QTime& t) {
    m_minTime = t;
    if (m_selectedTime.isValid() && m_selectedTime < m_minTime) {
        setTime(m_minTime);
    }
}

void FluentTimePicker::setMaximumTime(const QTime& t) {
    m_maxTime = t;
    if (m_selectedTime.isValid() && m_selectedTime > m_maxTime) {
        setTime(m_maxTime);
    }
}

QTime FluentTimePicker::minimumTime() const { return m_minTime; }
QTime FluentTimePicker::maximumTime() const { return m_maxTime; }

void FluentTimePicker::updateDisplayText() {
    if (m_selectedTime.isValid()) {
        m_displayText = m_selectedTime.toString(getTimeFormat());
    } else {
        m_displayText = getPlaceholderText();
    }
}

void FluentTimePicker::showClockPopup() {
    closeClockPopup();

    m_popup.reset(new FluentTimePickerPopup(this));

    if (m_selectedTime.isValid()) {
        m_popup->clock()->setTime(m_selectedTime);
    } else {
        m_popup->clock()->setTime(QTime::currentTime());
    }

    // 仅更新时间，不关闭弹窗（关键修改点）
    connect(m_popup->clock(), &FluentClockPicker::timeChanged,
            this, [=](const QTime& t){
                setTime(t);
            });

    connect(m_popup.data(), &FluentTimePickerPopup::aboutToClose,
            this, [=]{ m_isPressed = false; update(); });

    QPoint globalPos = mapToGlobal(QPoint(0, height()));
    QScreen* screen = QApplication::screenAt(globalPos);
    if (!screen) screen = QApplication::primaryScreen();
    QRect screenGeometry = screen->availableGeometry();

    int x = globalPos.x();
    int y = globalPos.y();
    int popupWidth = m_popup->sizeHint().width();
    int popupHeight = m_popup->sizeHint().height();

    if (x + popupWidth > screenGeometry.right()) {
        x = screenGeometry.right() - popupWidth;
    }
    if (y + popupHeight > screenGeometry.bottom()) {
        y = mapToGlobal(QPoint(0, 0)).y() - popupHeight;
    }
    if (x < screenGeometry.left()) {
        x = screenGeometry.left();
    }
    if (y < screenGeometry.top()) {
        y = globalPos.y();
    }

    m_popup->move(x, y);
    m_popup->show();
    m_popup->raise();
    m_popup->activateWindow();
}

void FluentTimePicker::closeClockPopup() {
    if (m_popup) {
        m_popup->close();
        m_popup.reset();
    }
}

void FluentTimePicker::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing | QPainter::SmoothPixmapTransform);

    QRect rect = this->rect().adjusted(1, 1, -1, -1);

    QColor bgColor = getBackgroundColor();
    if (m_isPressed) bgColor = getPressedColor();

    painter.setPen(getBorderColor());
    painter.setBrush(bgColor);
    painter.drawRoundedRect(rect, 8, 8);

    painter.setPen(getTextColor());
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);

    if (!m_selectedTime.isValid()) {
        QColor placeholderColor = getTextColor();
        placeholderColor.setAlpha(150);
        painter.setPen(placeholderColor);
    }

    QRect textRect = rect.adjusted(10, 0, -30, 0);
    painter.drawText(textRect, Qt::AlignLeft | Qt::AlignVCenter, m_displayText);

    int iconSize = 32;
    int iconX = width() - 10 - iconSize;
    int iconY = (rect.height() - iconSize) / 2;
    QRect iconRect(iconX, iconY, iconSize, iconSize);

    painter.setPen(QPen(getTextColor(), 1));
    painter.setBrush(Qt::NoBrush);
    painter.drawText(iconRect.adjusted(2, 2, -2, -2),
                     Qt::AlignRight | Qt::AlignVCenter, QStringLiteral("🕒"));

    QWidget::paintEvent(event);
}

void FluentTimePicker::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        m_isPressed = true;
        update();
        event->accept();
    } else {
        QWidget::mousePressEvent(event);
    }
}

void FluentTimePicker::mouseReleaseEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton && m_isPressed) {
        m_isPressed = false;
        showClockPopup();
        event->accept();
    } else {
        m_isPressed = false;
        QWidget::mouseReleaseEvent(event);
    }
    update();
}
