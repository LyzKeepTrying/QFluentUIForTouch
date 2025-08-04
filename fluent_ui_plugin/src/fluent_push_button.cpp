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
        QSize icon_size = iconSize();
        // 图标左+文字间距 4px
        int w = icon_size.width() + 4 + fontMetrics().horizontalAdvance(text());
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
    QRect content_rect = rect().adjusted(8, 0, -8, 0);
    painter.setFont(QFluentUI::Font::default_text_font);

    if (!icon().isNull()) {
        // 绘制图标
        QSize icon_size = iconSize();
        QPoint icon_pos((width() - icon_size.width() - fontMetrics().horizontalAdvance(text()) - 4) / 2,
                      (height() - icon_size.height()) / 2);
        QPixmap pix = icon().pixmap(icon_size);
        painter.drawPixmap(icon_pos, pix);

        // 绘制文字
        painter.setPen(getTextColor());
        QRect text_rect(icon_pos.x() + icon_size.width() + 4,
                       0,
                       fontMetrics().horizontalAdvance(text()),
                       height());
        painter.drawText(text_rect, Qt::AlignVCenter | Qt::AlignLeft, text());
    } else {
        // 仅文字
        painter.setPen(getTextColor());
        painter.drawText(content_rect, Qt::AlignCenter, text());
    }
}

void FluentPushButton::mousePressEvent(QMouseEvent* event) {
    setBackgroundColor(getBackgroundColor().darker(150));
    QPushButton::mousePressEvent(event);
}

void FluentPushButton::mouseReleaseEvent(QMouseEvent* event) {
    setBackgroundColor(getBackgroundColor().lighter(150));
    QPushButton::mouseReleaseEvent(event);
}

