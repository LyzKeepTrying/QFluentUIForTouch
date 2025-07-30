#include "fluent_push_button.h"
#include <QPainter>
#include <QEvent>

FluentPushButton::FluentPushButton(const QString& text, QWidget* parent)
    : QPushButton(text, parent) {
    setCursor(Qt::PointingHandCursor);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
}

FluentPushButton::FluentPushButton(QWidget* parent)
    : QPushButton(parent) {
    setCursor(Qt::PointingHandCursor);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
}

QSize FluentPushButton::sizeHint() const {
    QSize base(k_default_width_, k_default_height_);
    if (!icon().isNull()) {
        // 考虑图标尺寸
        QSize iconSz = iconSize();
        // 图标左+文字间距 4px
        int w = iconSz.width() + 4 + fontMetrics().horizontalAdvance(text());
        return QSize(qMax(base.width(), w) + 16, base.height());
    }
    return base;
}

void FluentPushButton::paintEvent(QPaintEvent* event) {
    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // 绘制背景
    painter.setBrush(getBackgroundColor());
    painter.setPen(getBorderColor());
    painter.drawRoundedRect(rect(), 8, 8);

    // 计算绘制区域
    QRect contentRect = rect().adjusted(8, 0, -8, 0);
    painter.setFont(QFluentUI::Font::default_text_font);

    if (!icon().isNull()) {
        // 绘制图标
        QSize icoSz = iconSize();
        QPoint icoPos((width() - icoSz.width() - fontMetrics().horizontalAdvance(text()) - 4) / 2,
                      (height() - icoSz.height()) / 2);
        QPixmap pix = icon().pixmap(icoSz);
        painter.drawPixmap(icoPos, pix);

        // 绘制文字
        painter.setPen(getTextColor());
        QRect textRect(icoPos.x() + icoSz.width() + 4,
                       0,
                       fontMetrics().horizontalAdvance(text()),
                       height());
        painter.drawText(textRect, Qt::AlignVCenter | Qt::AlignLeft, text());
    } else {
        // 仅文字
        painter.setPen(getTextColor());
        painter.drawText(contentRect, Qt::AlignCenter, text());
    }
}

void FluentPushButton::mousePressEvent(QMouseEvent* event) {
    setBackgroundColor(QFluentUI::ThemeColor::Light::area_color.darker(150));
    QPushButton::mousePressEvent(event);
}

void FluentPushButton::mouseReleaseEvent(QMouseEvent* event) {
    setBackgroundColor(QFluentUI::ThemeColor::Light::area_color);
    QPushButton::mouseReleaseEvent(event);
}

