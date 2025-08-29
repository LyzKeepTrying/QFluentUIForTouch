#include "fluent_icon_toggle_button.h"
#include "qpainter.h"

constexpr QSize FluentIconToggleButton::k_default_size_;
constexpr QSize FluentIconToggleButton::k_default_icon_size_;

FluentIconToggleButton::FluentIconToggleButton(QWidget* parent)
    : QAbstractButton(parent)
{
    setContentsMargins(0, 0, 0, 0);
    setCheckable(true);
    setCursor(Qt::PointingHandCursor);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    setIconSize(k_default_icon_size_);
}

QSize FluentIconToggleButton::sizeHint() const {
    return k_default_size_;
}

void FluentIconToggleButton::paintEvent(QPaintEvent* /*event*/) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // Draw background
    painter.setBrush(isChecked() ? getToggledBackgroundColor() : getBackgroundColor());
    painter.setPen(isChecked() ? QColor::fromRgb(~getBorderColor().rgb()) : getBorderColor());


    if(getTextIsOustside()){

        QRect icon_rect = rect().adjusted(getFontSize(), getFontSize() - getIconTextSpace() / 2, -getFontSize(), -getFontSize() - getIconTextSpace() / 2);

        painter.drawRoundedRect(icon_rect, 8, 8);

        // Draw icon
        if (!icon().isNull()){
            QPoint icon_pos((icon_rect.width() - iconSize().width()) / 2,
                            (icon_rect.height() - iconSize().height()) / 2);
            painter.drawPixmap(icon_rect.topLeft() + icon_pos, isChecked() ? getToggledIcon().pixmap(iconSize()) : icon().pixmap(iconSize()));
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
            painter.drawText(text_rect, Qt::AlignHCenter | Qt::AlignTop, isChecked() ? getToggledText() : text());
        }
    }else{
        painter.drawRoundedRect(rect().adjusted(1, 1, -1, -1), 8, 8);

        // Draw icon
        if (!icon().isNull()) {
            QPoint icon_pos((width() - iconSize().width()) / 2,
                            (height() - iconSize().height()) / 2 + getIconTopMargin());
            painter.drawPixmap(icon_pos, isChecked() ? getToggledIcon().pixmap(iconSize()) : icon().pixmap(iconSize()));
        }

        // Draw text under icon or centered if no icon
        if (!text().isEmpty()) {
            painter.setPen(isChecked() ? QColor::fromRgb(~getTextColor().rgb()) : getTextColor());
            QFont font(QFluentUI::Font::default_text_font);
            font.setPixelSize(getFontSize());
            painter.setFont(font);
            QRect text_rect(
                0,
                (height() + iconSize().height()) / 2 + getIconTopMargin() + getIconTextSpace(),
                width(),
                painter.fontMetrics().height()
                );
            painter.drawText(text_rect, Qt::AlignHCenter | Qt::AlignTop, isChecked() ? getToggledText() : text());
        }
    }
}

void FluentIconToggleButton::mousePressEvent(QMouseEvent* event) {
    if(isChecked()){
        setToggledBackgroundColor(getToggledBackgroundColor().darker(150));
    }else{
        setBackgroundColor(getBackgroundColor().darker(150));
    }
    setBorderColor(getBorderColor().darker(200));
    QAbstractButton::mousePressEvent(event);
}

void FluentIconToggleButton::mouseReleaseEvent(QMouseEvent* event) {
    if(isChecked()){
        setToggledBackgroundColor(getToggledBackgroundColor().lighter(150));
    }else{
        setBackgroundColor(getBackgroundColor().lighter(150));
    }
    setBorderColor(getBorderColor().lighter(200));
    QAbstractButton::mouseReleaseEvent(event);
}
