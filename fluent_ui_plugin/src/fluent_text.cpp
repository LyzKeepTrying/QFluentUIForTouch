#include "fluent_text.h"

#include <QPainter>

FluentText::FluentText(QWidget *parent)
    : QLabel{parent}
{

}

void FluentText::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    QRect text_rect = rect().adjusted(1, 1, -1, -1);

    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);
    painter.setPen(getTextColor());

    painter.drawText(text_rect, alignment(), text());

}

QSize FluentText::sizeHint() const
{
    return k_default_size_;
}
