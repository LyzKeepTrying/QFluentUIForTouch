#include "fluent_icon_toggle_button.h"
#include "qpainter.h"

constexpr QSize FluentIconToggleButton::k_default_size;
constexpr QSize FluentIconToggleButton::k_default_icon_size;

FluentIconToggleButton::FluentIconToggleButton(QWidget* parent)
    : QAbstractButton(parent)
{
    setContentsMargins(0, 0, 0, 0);
    setCheckable(true);
    setCursor(Qt::PointingHandCursor);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    setIconSize(k_default_icon_size);
}

QSize FluentIconToggleButton::sizeHint() const {
    return k_default_size;
}

void FluentIconToggleButton::paintEvent(QPaintEvent* /*event*/) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // Draw background
    painter.setBrush(isChecked() ? getToggledBackgroundColor() : getBackgroundColor());
    painter.setPen(isChecked() ? QColor::fromRgb(~getBorderColor().rgb()) : getBorderColor());
    painter.drawRoundedRect(rect(), 8, 8);

    // Draw icon
    if (!icon().isNull()) {
        QPoint icoPos((width() - iconSize().width()) / 2,
                      (height() - iconSize().height()) / 2 + getIconTopSpace());
        painter.drawPixmap(icoPos, isChecked() ? getToggledIcon().pixmap(iconSize()) : icon().pixmap(iconSize()));
    }

    // Draw text under icon or centered if no icon
    if (!text().isEmpty()) {
        painter.setPen(isChecked() ? QColor::fromRgb(~getTextColor().rgb()) : getTextColor());
        QFont font(QFluentUI::Font::default_text_font);
        font.setPixelSize(getFontSize());
        painter.setFont(font);
        QRect textRect(
            0,
            (height() + iconSize().height()) / 2 + getIconTopSpace() + getIconTextInnerSpace(),
            width(),
            painter.fontMetrics().height()
            );
        painter.drawText(textRect, Qt::AlignHCenter | Qt::AlignTop, isChecked() ? getToggledText() : text());
    }
}

void FluentIconToggleButton::mousePressEvent(QMouseEvent* event) {
    if(isChecked()){
        setToggledBackgroundColor(getToggledBackgroundColor().darker(150));
    }else{
        setBackgroundColor(getBackgroundColor().darker(150));
    }
    QAbstractButton::mousePressEvent(event);
}

void FluentIconToggleButton::mouseReleaseEvent(QMouseEvent* event) {
    if(isChecked()){
        setToggledBackgroundColor(getToggledBackgroundColor().lighter(150));
    }else{
        setBackgroundColor(getBackgroundColor().lighter(150));
    }
    QAbstractButton::mouseReleaseEvent(event);
}
