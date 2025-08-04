#include "fluent_line_edit.h"

#include <QPainter>

FluentLineEdit::FluentLineEdit(QWidget* parent)
    : QLineEdit(parent) {
    setContentsMargins(0, 0, 0, 0);
    setTextMargins(6, 0, 6, 0);
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(QFluentUI::Font::default_font_size);
    setFont(font);
}

FluentLineEdit::FluentLineEdit(const QString& text, QWidget* parent)
    : FluentLineEdit(parent) {
    setText(text);
}

QSize FluentLineEdit::sizeHint() const{
    return k_default_size;
}

void FluentLineEdit::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // 绘制背景
    painter.setPen(getBorderColor());
    painter.setBrush(getBackgroundColor());
    painter.drawRoundedRect(rect(), 16, 16);

    // 调用基类绘制文本
    QLineEdit::paintEvent(event);
}

void FluentLineEdit::focusInEvent(QFocusEvent* event) {

    QLineEdit::focusInEvent(event);
}

void FluentLineEdit::focusOutEvent(QFocusEvent* event) {

    QLineEdit::focusOutEvent(event);
}
