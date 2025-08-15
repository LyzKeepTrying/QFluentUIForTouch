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
    setText(text);
    setIcon(icon);
}

QSize FluentIconPushButton::sizeHint() const {
    return k_default_size_;
}

void FluentIconPushButton::paintEvent(QPaintEvent* /*event*/) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    painter.setBrush(getBackgroundColor());
    painter.setPen(getBorderColor());

    if(getTextIsOustside()){

        QRect icon_rect = rect().adjusted(getFontSize(), getFontSize() - getIconTextSpace() / 2, -getFontSize(), -getFontSize() - getIconTextSpace() / 2);

        painter.drawRoundedRect(icon_rect, 8, 8);

        // Draw icon
        if (!icon().isNull()){
            QPoint icon_pos((icon_rect.width() - iconSize().width()) / 2,
                            (icon_rect.height() - iconSize().height()) / 2);
            painter.drawPixmap(icon_rect.topLeft() + icon_pos, icon().pixmap(iconSize()));
        }

        // Draw text under icon or centered if no icon
        if (!text().isEmpty()) {
            painter.setPen(getTextColor());
            QFont font(QFluentUI::Font::default_text_font);
            font.setPixelSize(getFontSize());
            painter.setFont(font);
            QRect text_rect(
                0,
                icon_rect.y() + icon_rect.height() + getIconTextSpace() / 2,
                width(),
                painter.fontMetrics().height()
                );
            painter.drawText(text_rect, Qt::AlignHCenter | Qt::AlignTop, text());
        }
    }else{
        painter.drawRoundedRect(rect().adjusted(1, 1, -1, -1), 8, 8);

        // Draw icon
        if (!icon().isNull()) {
            QPoint icon_pos((width() - iconSize().width()) / 2,
                          (height() - iconSize().height()) / 2 + getIconTopMargin());
            painter.drawPixmap(icon_pos, icon().pixmap(iconSize()));
        }

        // Draw text under icon or centered if no icon
        if (!text().isEmpty()) {
            painter.setPen(getTextColor());
            QFont font(QFluentUI::Font::default_text_font);
            font.setPixelSize(getFontSize());
            painter.setFont(font);
            QRect textRect(
                0,
                (height() + iconSize().height()) / 2 + getIconTopMargin() + getIconTextSpace(),
                width(),
                painter.fontMetrics().height()
                );
            painter.drawText(textRect, Qt::AlignHCenter | Qt::AlignTop, text());
        }
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
