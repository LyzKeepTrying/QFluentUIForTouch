#include "fluent_line_spin_box.h"

#include <QPainter>
#include <QLineEdit>
#include <QTimer>
#include <QTextLayout>
#include <QtMath>

FluentLineSpinBox::FluentLineSpinBox(QWidget* parent)
    : QSpinBox(parent) {
    setContentsMargins(0, 0, 0, 0);
    setCursor(Qt::PointingHandCursor);
    setFrame(false);
    if (lineEdit()) {
        lineEdit()->hide();
    }
    setButtonSymbols(QSpinBox::NoButtons);
    setDirectionState(Qt::Horizontal);

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

    bool isVertical = (getDirectionState() == Qt::Vertical);

    // 整体边框（文本框）
    painter.setPen(hasFocus() ? getBorderFocusOnColor()
                              : getBorderFocusOffColor());
    painter.setBrush(getBackgroundColor());

    int show_size = isVertical ? width() : height();
    QRect show_rect;
    if (isVertical) {
        // 文本框在上方
        show_rect = QRect((width() - show_size) / 2, 0, show_size, show_size).adjusted(4, 4, -4, -4);
    } else {
        // 文本框在右侧
        show_rect = QRect(width() - show_size, (height() - show_size) / 2, show_size, show_size).adjusted(4, 4, -4, -4);
    }
    painter.drawRoundedRect(show_rect, 8, 8);

    // 绘制中间的数字文本
    painter.setPen(getTextColor());
    QFont text_font = QFluentUI::Font::default_text_font;
    text_font.setPixelSize(getFontSize());
    painter.setFont(text_font);
    QRect text_rect = show_rect.adjusted(8, 8, -8, -8);
    painter.drawText(text_rect, Qt::AlignCenter, text());

    // 绘制光标
    if (hasFocus() && getShowCursor()) {
        QTextLayout layout(text(), text_font);
        layout.beginLayout();
        QTextLine line = layout.createLine();
        layout.endLayout();
        int text_width = int(line.naturalTextWidth());
        int line_x = text_rect.x() + (text_rect.width() - text_width) / 2;
        line.setPosition(QPointF(0, 0));
        int cursor_pos = lineEdit()->cursorPosition();
        qreal x_inline = line.cursorToX(cursor_pos);

        int cx = line_x + int(x_inline);
        int cy_top = text_rect.top();
        int cy_bottom = text_rect.bottom();

        painter.setPen(getTextColor());
        painter.drawLine(cx, cy_top, cx, cy_bottom);
    }

    // 绘制灰色轨道
    QPen off_pen(getSliderOffColor(), getLineWidth());
    off_pen.setCapStyle(Qt::RoundCap);
    painter.setPen(off_pen);
    painter.setBrush(Qt::NoBrush);

    if (isVertical) {
        // 垂直轨道在下方
        int track_top = show_rect.bottom() + 8 + getThumbRadius();
        int track_bottom = height() - 8 - getThumbRadius();
        int track_x = width() / 2;
        line_rect_ = QRect(track_x - 1, track_top, 2, track_bottom - track_top);
        painter.drawLine(track_x, track_top, track_x, track_bottom);
    } else {
        // 水平轨道在左边
        line_rect_ = QRect(8 + getThumbRadius(), (height() - getLineWidth()) / 2,
                           width() - show_size - 24 - getThumbRadius(), getLineWidth());
        painter.drawLine(line_rect_.x(), height() / 2,
                         line_rect_.x() + line_rect_.width(), height() / 2);
    }

    // 绘制隔断线
    if (getPaintStep()) {
        painter.save();
        painter.setPen(Qt::NoPen);
        painter.setBrush(getSliderOffColor().darker(150));

        int range = maximum() - minimum();
        if (range > 0 && singleStep() > 0) {
            for (int i = minimum(); i < maximum(); i += singleStep()) {
                // 跳过起点和终点
                if (i == minimum())
                    continue;

                qreal norm = (i - minimum()) / qreal(range);

                if (!isVertical) {
                    painter.drawEllipse(
                        QPointF(line_rect_.x() + norm * line_rect_.width(),
                                line_rect_.y() + line_rect_.height() / 2.0),
                        getLineWidth() / 4.0,
                        getLineWidth() / 4.0
                        );
                } else {
                    painter.drawEllipse(
                        QPointF(line_rect_.x() + line_rect_.width() / 2.0,
                                line_rect_.y() + norm * line_rect_.height()),
                        getLineWidth() / 4.0,
                        getLineWidth() / 4.0
                        );
                }
            }
        }

        painter.restore();
    }

    // 绘制彩色已选轨道
    QPen on_pen(getSliderOnColor(), getLineWidth());
    on_pen.setCapStyle(Qt::RoundCap);
    painter.setPen(on_pen);

    double norm = double(value() - minimum()) / double(maximum() - minimum());

    if (isVertical) {
        int y1 = line_rect_.top();
        int y2 = line_rect_.bottom();
        int posY = y2 - norm * (y2 - y1);
        painter.drawLine(width() / 2, posY, width() / 2, y2);
        cur_thumb_pos_ = QPointF(width() / 2, posY);
    } else {
        int x1 = line_rect_.x();
        int x2 = line_rect_.x() + line_rect_.width();
        int posX = x1 + norm * (x2 - x1);
        painter.drawLine(x1, height() / 2, posX, height() / 2);
        cur_thumb_pos_ = QPointF(posX, height() / 2);
    }

    // 绘制 thumb
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
        event->accept();
        return;
    }

    if(getSliderPress()){

        // 轨道点击：在轨道区域（扩大一点以便点中更容易）设置值并进入按下状态以便拖动
        QRectF track_rect = QRectF(line_rect_);
        // 扩大检测范围为 thumb 半径，方便点击
        track_rect = track_rect.adjusted(-getThumbRadius(), -getThumbRadius(), getThumbRadius(), getThumbRadius());

        if (track_rect.contains(pos)) {
            bool isVertical = (getDirectionState() == Qt::Vertical);
            qreal norm;
            if (isVertical) {
                norm = qreal(line_rect_.bottom() - pos.y()) / line_rect_.height();
            } else {
                norm = (pos.x() - line_rect_.x()) / line_rect_.width();
            }
            norm = qBound(0.0, norm, 1.0);

            int min_v = minimum();
            int max_v = maximum();
            int new_val = min_v + int(norm * (max_v - min_v) + 0.5);
            setValue(new_val);

            // 进入按下状态，后续 mouseMoveEvent 会处理拖动
            setThumbIsPressed(true);
            event->accept();
            return;
        }

    }
}

void FluentLineSpinBox::mouseReleaseEvent(QMouseEvent* event) {
    if(getThumbIsPressed()){
        setThumbIsPressed(false);
    }
    QSpinBox::mouseReleaseEvent(event);
}

void FluentLineSpinBox::mouseMoveEvent(QMouseEvent* event) {
    bool isVertical = (getDirectionState() == Qt::Vertical);
    if (getThumbIsPressed()) {
        QPointF pos = event->pos();
        qreal norm;
        if (isVertical) {
            norm = qreal(line_rect_.bottom() - pos.y()) / line_rect_.height();
        } else {
            norm = (pos.x() - line_rect_.x()) / line_rect_.width();
        }
        norm = qBound(0.0, norm, 1.0);

        int min_v = minimum();
        int max_v = maximum();
        int new_val = min_v + int(norm * (max_v - min_v) + 0.5);
        setValue(new_val);
        event->accept();
        return;
    }
    QSpinBox::mouseMoveEvent(event);
}
