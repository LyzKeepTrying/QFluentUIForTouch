#include "fluent_icon_push_button.h"
#include "qpainter.h"

constexpr QSize FluentIconPushButton::k_default_size_;
constexpr QSize FluentIconPushButton::k_default_icon_size_;

FluentIconPushButton::FluentIconPushButton(QWidget* parent)
    : QPushButton(parent)
{
    setContentsMargins(0, 0, 0, 0);
    setCursor(Qt::PointingHandCursor);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    setIconSize(k_default_icon_size_);
}

FluentIconPushButton::FluentIconPushButton(const QIcon& icon, const QString& text, QWidget* parent)
    : FluentIconPushButton(parent)
{
    setIcon(icon);
}

QSize FluentIconPushButton::sizeHint() const {
    return k_default_size_;
}

void FluentIconPushButton::paintEvent(QPaintEvent* /*event*/) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // Draw background
    painter.setBrush(getBackgroundColor());
    painter.setPen(getBorderColor());
    painter.drawRoundedRect(rect(), 8, 8);

    // Draw icon
    if (!icon().isNull()) {
        QPoint icoPos((width() - iconSize().width()) / 2,
                      (height() - iconSize().height()) / 2 + getIconTopSpace());
        painter.drawPixmap(icoPos, icon().pixmap(iconSize()));
    }

    // Draw text under icon or centered if no icon
    if (!text().isEmpty()) {
        painter.setPen(getTextColor());
        QFont font(QFluentUI::Font::default_text_font);
        font.setPixelSize(getFontSize());
        painter.setFont(font);
        QRect textRect(
            0,
            (height() + iconSize().height()) / 2 + getIconTopSpace() + getIconTextInnerSpace(),
            width(),
            painter.fontMetrics().height()
            );
        painter.drawText(textRect, Qt::AlignHCenter | Qt::AlignTop, text());
    }
}

void FluentIconPushButton::mousePressEvent(QMouseEvent* event) {
    setBackgroundColor(getBackgroundColor().darker(150));
    setBorderColor(getBorderColor().darker(200));
    QPushButton::mousePressEvent(event);
}

void FluentIconPushButton::mouseReleaseEvent(QMouseEvent* event) {
    setBackgroundColor(getBackgroundColor().lighter(150));
    setBorderColor(getBorderColor().lighter(200));
    QPushButton::mouseReleaseEvent(event);
}
