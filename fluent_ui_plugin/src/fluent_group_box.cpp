#include "fluent_group_box.h"

FluentGroupBox::FluentGroupBox(QWidget* parent)
    : QGroupBox(parent)
{
}

FluentGroupBox::FluentGroupBox(const QString& title, QWidget* parent)
    : QGroupBox(title, parent)
{
}
void FluentGroupBox::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    if(!getTitleIsOutside() || !getShowTitle() || title().isEmpty()){

        const int border_width = getBorderWidth();
        const QRect rect = this->rect().adjusted(border_width, border_width, -border_width, -border_width);

        // 绘制背景
        painter.setPen(Qt::NoPen);
        painter.setBrush(getBackgroundColor());
        painter.drawRoundedRect(rect, 8, 8);

        // 绘制边框
        QPen border_pen;
        border_pen.setColor(getBorderColor());
        border_pen.setWidth(border_width);
        painter.setPen(border_pen);
        painter.setBrush(Qt::NoBrush);
        painter.drawRoundedRect(rect, 8, 8);

        // 标题文本
        if (!title().isEmpty() && getShowTitle()) {
            QFont font(QFluentUI::Font::default_text_font);
            font.setPixelSize(getFontSize());
            painter.setFont(font);
            painter.setPen(getTextColor());

            // 计算文本位置
            QFontMetrics fm(font);
            int text_width = fm.horizontalAdvance(title());
            int text_height = fm.height();

            QRect title_rect = QRect(QPoint(rect.x() + getTitleLeftMargin(), (rect.y() + rect.height() - text_height) / 2),
                                     QSize(text_width, text_height));
            painter.drawText(title_rect, Qt::AlignCenter, title());
        }

    }
    else{

        // 标题文本
        QFont font(QFluentUI::Font::default_text_font);
        font.setPixelSize(getFontSize());
        painter.setFont(font);
        painter.setPen(getTextColor());

        // 计算文本位置
        QFontMetrics fm(font);
        int text_width = fm.horizontalAdvance(title());
        int text_height = fm.height();

        QRect title_rect = QRect(QPoint(rect().x() + getTitleLeftMargin(), rect().y()),
                                 QSize(text_width, text_height));
        painter.drawText(title_rect, Qt::AlignCenter, title());

        const int border_width = getBorderWidth();
        const QRect rect = this->rect().adjusted(border_width, border_width + title_rect.y() + title_rect.height() + getTitleBottomMargin(), -border_width, -border_width);

        // 绘制背景
        painter.setPen(Qt::NoPen);
        painter.setBrush(getBackgroundColor());
        painter.drawRoundedRect(rect, 8, 8);

        // 绘制边框
        QPen border_pen;
        border_pen.setColor(getBorderColor());
        border_pen.setWidth(border_width);
        painter.setPen(border_pen);
        painter.setBrush(Qt::NoBrush);
        painter.drawRoundedRect(rect, 8, 8);

    }
}
