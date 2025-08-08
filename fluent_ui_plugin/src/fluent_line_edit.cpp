#include "fluent_line_edit.h"

#include <QPainter>
#include <QTextLayout>
#include <QTimer>

FluentLineEdit::FluentLineEdit(QWidget* parent)
    : QLineEdit(parent) {
    setContentsMargins(0, 0, 0, 0);
    setTextMargins(6, 0, 6, 0);

    // 光标闪烁计时
    QTimer* cursor_flash_timer = new QTimer(this);
    connect(cursor_flash_timer, &QTimer::timeout, this, [=]{
        if(hasFocus()){
            setShowCursor(!getShowCursor());
        }
    });
    cursor_flash_timer->start(800);
}

FluentLineEdit::FluentLineEdit(const QString& text, QWidget* parent)
    : FluentLineEdit(parent) {
    setText(text);
}

QSize FluentLineEdit::sizeHint() const{
    return k_default_size_;
}

void FluentLineEdit::paintEvent(QPaintEvent* event) {
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // 绘制背景
    painter.setPen(hasFocus() ? getBorderFocusOnColor() : getBorderFocusOffColor());
    painter.setBrush(getBackgroundColor());
    painter.drawRoundedRect(rect(), 8, 8);

    // 文本区域 = 整个 rect 减去 textMargins
    const auto text_margin = textMargins();
    QRect text_rect = rect().adjusted(
        text_margin.left(), text_margin.top(),
        -text_margin.right(), -text_margin.bottom());

    // 获取实际要显示的文字
    QString draw_text;
    if (echoMode() == QLineEdit::Password) {
        draw_text = QString(displayText().length(), '*');
    } else {
        draw_text = displayText();
    }

    // 绘制文字
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);
    painter.setPen(getTextColor());
    painter.drawText(text_rect, Qt::AlignVCenter | Qt::AlignLeft, draw_text);

    // 绘制光标
    if (hasFocus() && getShowCursor()) {
        QTextLayout layout(draw_text, font);
        layout.beginLayout();
        QTextLine line = layout.createLine();
        line.setLineWidth(text_rect.width());
        layout.endLayout();

        int cursor_pos = cursorPosition();
        qreal x_inline = line.cursorToX(cursor_pos);
        int cx = text_rect.x() + int(x_inline) + 1;

        painter.setPen(getTextColor());
        painter.drawLine(
            cx,
            text_rect.top() + (text_rect.height() / 4),
            cx,
            text_rect.bottom() - (text_rect.height() / 4)
            );
    }
}
