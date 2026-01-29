#include "fluent_datetime_picker.h"

#include <QPainter>
#include <QFontMetrics>
#include <QMouseEvent>
#include <QApplication>
#include <QScreen>

//
// FluentDateTimePickerPopup
//
FluentDateTimePickerPopup::FluentDateTimePickerPopup(QWidget* parent)
    : QDialog(parent, Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint)
{
    setAttribute(Qt::WA_TranslucentBackground);
    setAttribute(Qt::WA_DeleteOnClose, false);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    m_calendar = new FluentCalendarPicker(this);
    m_clock = new FluentClockPicker(this);

    layout->addWidget(m_calendar);
    layout->addWidget(m_clock);

    setLayout(layout);
    resize(qMax(m_calendar->sizeHint().width(), m_clock->sizeHint().width()),
           m_calendar->sizeHint().height() + m_clock->sizeHint().height());
}

void FluentDateTimePickerPopup::mousePressEvent(QMouseEvent* event)
{
    if (!rect().contains(event->pos())) {
        close();
    }
    QDialog::mousePressEvent(event);
}

void FluentDateTimePickerPopup::closeEvent(QCloseEvent* event)
{
    emit aboutToClose();
    QDialog::closeEvent(event);
}

//
// FluentDateTimePicker
//
FluentDateTimePicker::FluentDateTimePicker(QWidget* parent)
    : QWidget(parent)
{
    setAttribute(Qt::WA_Hover);
    setCursor(Qt::PointingHandCursor);
    setFocusPolicy(Qt::StrongFocus);

    updateDisplayText();
}

QSize FluentDateTimePicker::sizeHint() const
{
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    QFontMetrics fm(font);

    QString sample = QDateTime(QDate(2000,1,1), QTime(23,59,59))
                         .toString(getDateTimeFormat());
    int textWidth = fm.horizontalAdvance(sample) + 30;
    int width = qMax(180, textWidth);
    int height = 48;

    return QSize(width, height);
}

void FluentDateTimePicker::setDateTime(const QDateTime& dt)
{
    if (!dt.isValid() || m_dateTime == dt)
        return;

    m_dateTime = dt;
    updateDisplayText();
    update();
    emit dateTimeChanged(m_dateTime);

    if (m_popup) {
        m_popup->calendar()->setDate(dt.date());
        m_popup->clock()->setTime(dt.time());
    }
}

void FluentDateTimePicker::updateDisplayText()
{
    if (m_dateTime.isValid()) {
        m_displayText = m_dateTime.toString(getDateTimeFormat());
    } else {
        m_displayText = getPlaceholderText();
    }
}

void FluentDateTimePicker::showPopup()
{
    closePopup();
    m_popup.reset(new FluentDateTimePickerPopup(this));

    if (m_dateTime.isValid()) {
        m_popup->calendar()->setDate(m_dateTime.date());
        m_popup->clock()->setTime(m_dateTime.time());
    } else {
        QDateTime now = QDateTime::currentDateTime();
        m_popup->calendar()->setDate(now.date());
        m_popup->clock()->setTime(now.time());
    }

    connect(m_popup->calendar(), &FluentCalendarPicker::dateChanged,
            this, [=](const QDate& d){
                setDateTime(QDateTime(d, m_popup->clock()->time()));
            });

    connect(m_popup->clock(), &FluentClockPicker::timeChanged,
            this, [=](const QTime& t){
                setDateTime(QDateTime(m_popup->calendar()->date(), t));
            });

    connect(m_popup.data(), &FluentDateTimePickerPopup::aboutToClose,
            this, [=]{ m_isPressed = false; update(); });

    QPoint globalPos = mapToGlobal(QPoint(0, height()));
    QScreen* screen = QApplication::screenAt(globalPos);
    if (!screen) screen = QApplication::primaryScreen();
    QRect screenGeometry = screen->availableGeometry();

    int x = globalPos.x();
    int y = globalPos.y();
    int w = m_popup->sizeHint().width();
    int h = m_popup->sizeHint().height();

    if (x + w > screenGeometry.right())
        x = screenGeometry.right() - w;
    if (y + h > screenGeometry.bottom())
        y = mapToGlobal(QPoint(0, 0)).y() - h;

    m_popup->move(x, y);
    m_popup->show();
    m_popup->raise();
    m_popup->activateWindow();
}

void FluentDateTimePicker::closePopup()
{
    if (m_popup) {
        m_popup->close();
        m_popup.reset();
    }
}

void FluentDateTimePicker::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    QRect rect = this->rect().adjusted(1, 1, -1, -1);

    QColor bg = m_isPressed ? getPressedColor() : getBackgroundColor();
    painter.setPen(getBorderColor());
    painter.setBrush(bg);
    painter.drawRoundedRect(rect, 8, 8);

    painter.setPen(getTextColor());
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);

    if (!m_dateTime.isValid()) {
        QColor c = getTextColor();
        c.setAlpha(150);
        painter.setPen(c);
    }

    QRect textRect = rect.adjusted(10, 0, -30, 0);
    painter.drawText(textRect, Qt::AlignLeft | Qt::AlignVCenter, m_displayText);

    QRect iconRect(width() - 42, (height() - 32) / 2, 32, 32);
    painter.drawText(iconRect, Qt::AlignCenter, "🗓️");
}

void FluentDateTimePicker::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_isPressed = true;
        update();
        event->accept();
    } else {
        QWidget::mousePressEvent(event);
    }
}

void FluentDateTimePicker::mouseReleaseEvent(QMouseEvent* event)
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
