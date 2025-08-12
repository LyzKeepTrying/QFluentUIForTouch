#include "fluent_line_spin_box.h"

#include <QPainter>
#include <QLineEdit>
#include <QTimer>
#include <QTextLayout>
#include <QtMath>

FluentLineSpinBox::FluentLineSpinBox(QWidget* parent)
    : QSpinBox(parent) {
    setCursor(Qt::PointingHandCursor);
    setFrame(false);
    if (lineEdit()) {
        lineEdit()->hide();
    }
    setButtonSymbols(QAbstractSpinBox::NoButtons);
    setDirectionState(Qt::Vertical);

    // 光标闪烁计时
    QTimer* cursor_flash_timer = new QTimer(this);
    connect(cursor_flash_timer, &QTimer::timeout, this, [=]{
        if(hasFocus()){
            setShowCursor(!getShowCursor());
        }
    });
    cursor_flash_timer->start(800);
}

QSize FluentLineSpinBox::sizeHint() const {
    return QSize(k_default_size_);
}

void FluentLineSpinBox::paintEvent(QPaintEvent* event) {
    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing |
                           QPainter::TextAntialiasing |
                           QPainter::SmoothPixmapTransform);

    // 整体边框
    painter.setPen(hasFocus() ? getBorderFocusOnColor()
                              : getBorderFocusOffColor());
    painter.setBrush(getBackgroundColor());
    int show_size = qMin(height(), width());
    QRect show_rect = QRect(width() - show_size, (height() - show_size) / 2.0, show_size, show_size).adjusted(4, 4, -4, -4);
    painter.drawRoundedRect(show_rect, 8, 8);

    // 绘制中间的数字文本
    painter.setPen(getTextColor());
    QFont text_font = QFluentUI::Font::default_text_font;
    painter.setFont(text_font);
    text_font.setPixelSize(getFontSize());
    painter.setFont(text_font);
    QRect text_rect = show_rect.adjusted(8, 8, -8, -8);
    painter.setPen(getTextColor());
    painter.setFont(text_font);
    painter.drawText(text_rect, Qt::AlignCenter, text());

    // 绘制光标
    if (hasFocus() && getShowCursor()) {
        QTextLayout layout(text(), text_font);
        layout.beginLayout();
        QTextLine line = layout.createLine();
        layout.endLayout();
        int text_width = int(line.naturalTextWidth());
        // 居中对齐时的 x 起点 = 文本框中心 - 文本宽度的一半
        int line_x = text_rect.x() + (text_rect.width() - text_width) / 2;
        line.setPosition(QPointF(0, 0));  // 保持原样，用于 cursorToX
        int cursor_pos = lineEdit()->cursorPosition();
        qreal x_inline = line.cursorToX(cursor_pos);

        int cx = line_x + int(x_inline);
        int cy_top = text_rect.top();
        int cy_bottom = text_rect.bottom();

        painter.setPen(getTextColor());
        painter.drawLine(cx, cy_top, cx, cy_bottom);
    }

    // 绘制灰色环形
    QPen off_pen(getBorderFocusOffColor(), 8);
    off_pen.setCapStyle(Qt::RoundCap);
    off_pen.setJoinStyle(Qt::RoundJoin);
    off_pen.setWidthF(getLineWidth());
    painter.setPen(off_pen);
    painter.setBrush(Qt::NoBrush);

    line_rect_.setTopLeft(QPoint(8 + getThumbRadius(), 0));
    line_rect_.setSize(QSize(width() - show_size - 16 - getThumbRadius(), show_size));


    painter.drawLine(line_rect_.x(), line_rect_.height() / 2, line_rect_.x() + line_rect_.width(), line_rect_.height() / 2);

    // 绘制彩色环形
    QPen on_pen(getBorderFocusOnColor(), 8);
    on_pen.setCapStyle(Qt::RoundCap);
    on_pen.setJoinStyle(Qt::RoundJoin);
    on_pen.setWidthF(getLineWidth());
    painter.setPen(on_pen);
    painter.setBrush(Qt::NoBrush);
    double norm = double(value()) / maximum();
    painter.drawLine(line_rect_.x(), line_rect_.height() / 2, line_rect_.x() + norm * line_rect_.width(), line_rect_.height() / 2);

    // 绘制thumb
    cur_thumb_pos_ = QPointF(line_rect_.x() + norm * line_rect_.width(), line_rect_.height() / 2);
    painter.setPen(getBorderFocusOffColor());
    painter.setBrush(getThumbIsPressed() ? getThumbColor().darker(150) : getThumbColor());
    painter.drawEllipse(cur_thumb_pos_, getThumbRadius(), getThumbRadius());

}

void FluentLineSpinBox::mousePressEvent(QMouseEvent* event) {
    lineEdit()->setCursorPosition(lineEdit()->text().length());
    QPointF pos = event->pos(); // widget 局部坐标
    QRectF thumb_rect(QPoint(0, 0), QSize(getThumbRadius() * 2, getThumbRadius() * 2)); // cur_thumb_pos 需要是成员变量或能计算得到
    thumb_rect.moveCenter(cur_thumb_pos_);
    if (thumb_rect.contains(pos)) {
        setThumbIsPressed(true);
        return;
    }
    QSpinBox::mousePressEvent(event);
}

void FluentLineSpinBox::mouseReleaseEvent(QMouseEvent* event) {
    setThumbIsPressed(false);
    QSpinBox::mouseReleaseEvent(event);
}

void FluentLineSpinBox::mouseMoveEvent(QMouseEvent* event) {
    if (getThumbIsPressed()) {
        QPointF pos = event->pos();
        float norm = (pos.x() - line_rect_.x()) / line_rect_.width();
        setValue(norm * maximum());
    }
    QSpinBox::mouseMoveEvent(event);
}

