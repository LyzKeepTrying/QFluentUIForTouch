#include "fluent_date_picker.h"

#include <QPainter>
#include <QStyleOption>
#include <QPainterPath>
#include <QFontMetrics>
#include <QMouseEvent>
#include <QApplication>
#include <QScreen>
#include <QDateTime>
#include <QDebug>

FluentDatePickerPopup::FluentDatePickerPopup(QWidget* parent)
    : QDialog(parent, Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint)
{
    setAttribute(Qt::WA_TranslucentBackground);
    setAttribute(Qt::WA_DeleteOnClose, false);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    m_calendar = new FluentCalendarPicker(this);
    layout->addWidget(m_calendar);

    setLayout(layout);
    resize(m_calendar->sizeHint());
}

void FluentDatePickerPopup::mousePressEvent(QMouseEvent* event) {
    if (!rect().contains(event->pos())) {
        close();
    }
    QDialog::mousePressEvent(event);
}

void FluentDatePickerPopup::closeEvent(QCloseEvent* event) {
    emit aboutToClose();
    QDialog::closeEvent(event);
}

FluentDatePicker::FluentDatePicker(QWidget* parent)
    : QWidget(parent)
    , m_minDate(QDate(1900, 1, 1))
    , m_maxDate(QDate(2999, 12, 31))
{
    setAttribute(Qt::WA_Hover);
    setCursor(Qt::PointingHandCursor);
    setFocusPolicy(Qt::StrongFocus);

    updateDisplayText();
}

QSize FluentDatePicker::sizeHint() const {
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    QFontMetrics fm(font);
    int textWidth = fm.horizontalAdvance("0000-00-00") + 30; // 为图标和边距留出空间
    int width = qMax(120, textWidth);
    int height = 48; // 加上边框

    return QSize(width, height);
}

void FluentDatePicker::setDate(const QDate& date) {
    if (!date.isValid() || (m_selectedDate == date)) {
        return;
    }

    if (date < m_minDate || date > m_maxDate) {
        return;
    }

    m_selectedDate = date;
    updateDisplayText();
    update();
    emit dateChanged(date);

    if (m_popup && m_popup->calendar()) {
        m_popup->calendar()->setDate(date);
    }
}

void FluentDatePicker::setMinimumDate(const QDate& minDate) {
    m_minDate = minDate;
    if (m_selectedDate.isValid() && m_selectedDate < minDate) {
        setDate(minDate);
    }

    if (m_popup && m_popup->calendar()) {
        m_popup->calendar()->setMinimumDate(minDate);
    }
}

void FluentDatePicker::setMaximumDate(const QDate& maxDate) {
    m_maxDate = maxDate;
    if (m_selectedDate.isValid() && m_selectedDate > maxDate) {
        setDate(maxDate);
    }

    if (m_popup && m_popup->calendar()) {
        m_popup->calendar()->setMaximumDate(maxDate);
    }
}

QDate FluentDatePicker::minimumDate() const {
    return m_minDate;
}

QDate FluentDatePicker::maximumDate() const {
    return m_maxDate;
}

void FluentDatePicker::updateDisplayText() {
    if (m_selectedDate.isValid()) {
        m_displayText = m_selectedDate.toString(getDateFormat());
    } else {
        m_displayText = getPlaceholderText();
    }
}

void FluentDatePicker::showCalendarPopup() {
    closeCalendarPopup();

    m_popup.reset(new FluentDatePickerPopup(this));

    // 设置日历的初始状态
    m_popup->calendar()->setMinimumDate(m_minDate);
    m_popup->calendar()->setMaximumDate(m_maxDate);

    if (m_selectedDate.isValid()) {
        m_popup->calendar()->setDate(m_selectedDate);
    } else {
        m_popup->calendar()->setDate(QDate::currentDate());
    }

    // 连接信号
    connect(m_popup->calendar(), &FluentCalendarPicker::dateChanged,
            this, [=](const QDate& date){
        setDate(date);
        closeCalendarPopup();
    });
    connect(m_popup.data(), &FluentDatePickerPopup::aboutToClose,
            this, [=]{    m_isPressed = false;
    update();});

    // 计算弹出位置
    QPoint globalPos = mapToGlobal(QPoint(0, height()));

    // 获取屏幕几何信息
    QScreen* screen = QApplication::screenAt(globalPos);
    if (!screen) {
        screen = QApplication::primaryScreen();
    }

    QRect screenGeometry = screen->availableGeometry();

    // 调整位置，确保不超出屏幕
    int x = globalPos.x();
    int y = globalPos.y();

    int popupWidth = m_popup->sizeHint().width();
    int popupHeight = m_popup->sizeHint().height();

    // 如果右侧超出屏幕，向左调整
    if (x + popupWidth > screenGeometry.right()) {
        x = screenGeometry.right() - popupWidth;
    }

    // 如果底部超出屏幕，向上弹出
    if (y + popupHeight > screenGeometry.bottom()) {
        y = mapToGlobal(QPoint(0, 0)).y() - popupHeight;
    }

    // 如果左侧超出屏幕，向右调整
    if (x < screenGeometry.left()) {
        x = screenGeometry.left();
    }

    // 如果向上弹出时顶部超出屏幕，向下弹出
    if (y < screenGeometry.top()) {
        y = globalPos.y();
    }

    m_popup->move(x, y);
    m_popup->show();
    m_popup->raise();
    m_popup->activateWindow();
}

void FluentDatePicker::closeCalendarPopup() {
    if (m_popup) {
        m_popup->close();
        m_popup.reset();
    }
}

void FluentDatePicker::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing | QPainter::SmoothPixmapTransform);

    QRect rect = this->rect().adjusted(1, 1, -1, -1);

    // 绘制背景
    QColor bgColor = getBackgroundColor();
    if (m_isPressed) {
        bgColor = getPressedColor();
    }

    painter.setPen(getBorderColor());
    painter.setBrush(bgColor);
    painter.drawRoundedRect(rect, 8, 8);

    // 绘制文本
    painter.setPen(getTextColor());
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());

    if (!m_selectedDate.isValid()) {
        QColor placeholderColor = getTextColor();
        placeholderColor.setAlpha(150);
        painter.setPen(placeholderColor);
    }

    painter.setFont(font);

    QRect textRect = rect.adjusted(10, 0, -30, 0);
    painter.drawText(textRect, Qt::AlignLeft | Qt::AlignVCenter, m_displayText);

    // 绘制日历图标
    int iconSize = 32;
    int iconX = width() - 10 - iconSize;
    int iconY = (rect.height() - iconSize) / 2;

    QRect iconRect(iconX, iconY, iconSize, iconSize);

    // 简单的日历图标绘制
    painter.setPen(QPen(getTextColor(), 1));
    painter.setBrush(Qt::NoBrush);

    // 绘制日历主体
    painter.drawText(iconRect.adjusted(2, 2, -2, -2), Qt::AlignRight | Qt::AlignVCenter, "📅");


    QWidget::paintEvent(event);
}

void FluentDatePicker::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        m_isPressed = true;
        update();
        event->accept();
    } else {
        QWidget::mousePressEvent(event);
    }
}

void FluentDatePicker::mouseReleaseEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton && m_isPressed) {
        m_isPressed = false;
        showCalendarPopup();
        event->accept();
    } else {
        m_isPressed = false;
        QWidget::mouseReleaseEvent(event);
    }
    update();
}
