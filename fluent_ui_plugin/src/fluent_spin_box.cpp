#include "fluent_spin_box.h"

#include <QPainter>
#include <QLineEdit>
#include <QTimer>
#include <QTextLayout>

FluentSpinBox::FluentSpinBox(QWidget* parent)
    : QSpinBox(parent) {
    setContentsMargins(0, 0, 0, 0);
    setCursor(Qt::PointingHandCursor);
    setFrame(false);
    if (lineEdit()) {
        lineEdit()->hide();
    }
    setButtonSymbols(QAbstractSpinBox::NoButtons);

    // 光标闪烁计时
    QTimer* cursor_flash_timer = new QTimer(this);
    connect(cursor_flash_timer, &QTimer::timeout, this, [=]{
        if(hasFocus()){
            setShowCursor(!getShowCursor());
        }
    });
    cursor_flash_timer->start(800);
}

QSize FluentSpinBox::sizeHint() const {
    return QSize(k_default_size_);
}

void FluentSpinBox::paintEvent(QPaintEvent* event) {
    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing |
                           QPainter::TextAntialiasing |
                           QPainter::SmoothPixmapTransform);

    // 整体背景和边框
    painter.setPen(hasFocus() ? getBorderFocusOnColor()
                              : getBorderFocusOffColor());
    painter.setBrush(getBackgroundColor());
    painter.drawRoundedRect(rect().adjusted(1, 1, -1, -1), 8, 8);



    // 计算按钮大小和位置（正方形，边长 = 高度）
    int btn_size = height();
    minus_button_rect_ = QRect(0, 0, btn_size, btn_size).adjusted(4, 4, -4, -4);
    plus_button_rect_ = QRect(width() - btn_size, 0, btn_size, btn_size).adjusted(4, 4, -4, -4);

    // 准备绘制按钮内部样式（可根据状态改颜色，这里用背景色举例）
    painter.setPen(Qt::NoPen);
    painter.setBrush(getMinusButtonIsPressed() ? getBackgroundColor().darker(150) : getBackgroundColor().darker(110)); // 稍微深一点的按钮底色
    painter.drawRoundedRect(minus_button_rect_, 8, 8);
    painter.setBrush(getPlusButtonIsPressed() ? getBackgroundColor().darker(150) : getBackgroundColor().darker(110)); // 稍微深一点的按钮底色
    painter.drawRoundedRect(plus_button_rect_, 8, 8);

    // 在按钮里画“–”和“+”
    painter.setPen(getTextColor());
    QFont text_font = QFluentUI::Font::default_text_font;
    text_font.setPixelSize(btn_size / 1.5);
    painter.setFont(text_font);
    painter.drawText(minus_button_rect_,  Qt::AlignCenter, "–");
    painter.drawText(plus_button_rect_, Qt::AlignCenter, "+");

    // 绘制中间的数字文本
    // 左侧留出按钮宽度 + 8px 间距，右侧留出按钮宽度 + 8px
    text_font.setPixelSize(getFontSize());
    painter.setFont(text_font);
    QRect text_rect = rect().adjusted(btn_size + 8, 0, -btn_size - 8, 0);
    painter.setPen(getTextColor());
    painter.setFont(text_font);
    painter.drawText(text_rect, Qt::AlignCenter, text());

    // 绘制光标
    if (hasFocus() && getShowCursor() && !isReadOnly()) {
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
        int cy_top = text_rect.top() + text_rect.height() / 4;
        int cy_bottom = text_rect.bottom() - text_rect.height() / 4;

        painter.setPen(getTextColor());
        painter.drawLine(cx, cy_top, cx, cy_bottom);
    }
}

void FluentSpinBox::mousePressEvent(QMouseEvent* event) {
    if (plus_button_rect_.contains(event->pos()) && !isReadOnly()) {
        setPlusButtonIsPressed(true);
        stepUp();
    } else if (minus_button_rect_.contains(event->pos()) && !isReadOnly()) {
        setMinusButtonIsPressed(true);
        stepDown();
    }else{
        setPlusButtonIsPressed(false);
        setMinusButtonIsPressed(false);
    }
    lineEdit()->setCursorPosition(lineEdit()->text().length());
    QSpinBox::mousePressEvent(event);
}

void FluentSpinBox::mouseReleaseEvent(QMouseEvent* event) {
    setPlusButtonIsPressed(false);
    setMinusButtonIsPressed(false);
    QSpinBox::mouseReleaseEvent(event);
}
