#include "fluent_slider.h"

#include <QPainter>
#include <QMouseEvent>
#include <QtMath>

FluentSlider::FluentSlider(QWidget* parent)
    : QSlider{parent} {
    setContentsMargins(0, 0, 0, 0);
    setCursor(Qt::PointingHandCursor);
    setOrientation(Qt::Horizontal);
}

QSize FluentSlider::sizeHint() const {
    return k_default_size_;
}

void FluentSlider::paintEvent(QPaintEvent* /*event*/) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing |
                           QPainter::SmoothPixmapTransform |
                           QPainter::TextAntialiasing);

    // 计算轨道矩形：给轨道留出 thumb 半径 和 边距
    const int thumb_r = getThumbRadius();
    const int margin = 8;
    if (orientation() == Qt::Horizontal) {
        int w = rect().width() - thumb_r * 2 - margin * 2;
        int h = qMax(8, rect().height() - margin * 2); // 轨道高一个合理值
        line_rect_.setSize(QSize(w, h));
        line_rect_.moveTopLeft(QPoint(margin + thumb_r, (rect().height() - h) / 2));
    } else {
        int w = qMax(8, rect().width() - margin * 2);
        int h = rect().height() - thumb_r * 2 - margin * 2;
        line_rect_.setSize(QSize(w, h));
        line_rect_.moveTopLeft(QPoint((rect().width() - w) / 2, margin + thumb_r));
    }

    // 归一化处理（考虑 minimum()/maximum()）
    int minv = minimum();
    int maxv = maximum();
    double norm = 0.0;
    if (maxv != minv) {
        norm = double(value() - minv) / double(maxv - minv);
    }
    norm = qBound(0.0, norm, 1.0);

    // 绘制灰色轨道（off）
    QPen off_pen(getSliderOffColor(), 8);
    off_pen.setCapStyle(Qt::RoundCap);
    off_pen.setJoinStyle(Qt::RoundJoin);
    off_pen.setWidthF(getLineWidth());
    painter.setPen(off_pen);
    painter.setBrush(Qt::NoBrush);

    if (orientation() == Qt::Horizontal) {
        int y = line_rect_.y() + line_rect_.height() / 2;
        painter.drawLine(line_rect_.x(), y, line_rect_.x() + line_rect_.width(), y);
    } else {
        int x = line_rect_.x() + line_rect_.width() / 2;
        painter.drawLine(x, line_rect_.y(), x, line_rect_.y() + line_rect_.height());
    }

    // 绘制彩色轨道（on）
    QPen on_pen(getSliderOnColor(), 8);
    on_pen.setCapStyle(Qt::RoundCap);
    on_pen.setJoinStyle(Qt::RoundJoin);
    on_pen.setWidthF(getLineWidth());
    painter.setPen(on_pen);

    if (orientation() == Qt::Horizontal) {
        int y = line_rect_.y() + line_rect_.height() / 2;
        int x_end = line_rect_.x() + int(norm * line_rect_.width());
        painter.drawLine(line_rect_.x(), y, x_end, y);
    } else {
        int x = line_rect_.x() + line_rect_.width() / 2;
        // 我这里约定 norm=0 -> 底端, norm=1 -> 顶端 (value 增大时 thumb 向上)
        int y_bottom = line_rect_.y() + line_rect_.height();
        int y_curr = line_rect_.y() + int((1.0 - norm) * line_rect_.height());
        painter.drawLine(x, y_bottom, x, y_curr);
    }

    // 绘制 thumb（注意加上 line_rect_ 的偏移）
    if (orientation() == Qt::Horizontal) {
        qreal cx = line_rect_.x() + norm * line_rect_.width();
        qreal cy = line_rect_.y() + line_rect_.height() / 2.0;
        cur_thumb_pos_ = QPointF(cx, cy);
    } else {
        qreal cx = line_rect_.x() + line_rect_.width() / 2.0;
        qreal cy = line_rect_.y() + (1.0 - norm) * line_rect_.height();
        cur_thumb_pos_ = QPointF(cx, cy);
    }

    painter.setPen(getThumbBorderColor());
    painter.setBrush(getThumbIsPressed() ? getThumbColor().darker(150) : getThumbColor());
    painter.drawEllipse(cur_thumb_pos_, getThumbRadius(), getThumbRadius());
}

void FluentSlider::mousePressEvent(QMouseEvent* event) {
    QPointF pos = event->pos(); // widget 局部坐标
    QRectF thumb_rect(QPointF(0, 0), QSizeF(getThumbRadius() * 2.0, getThumbRadius() * 2.0));
    thumb_rect.moveCenter(cur_thumb_pos_);
    if (thumb_rect.contains(pos)) {
        setThumbIsPressed(true);
        event->accept();
        return;
    }
}

void FluentSlider::mouseMoveEvent(QMouseEvent* event) {
    if (getThumbIsPressed()) {
        QPointF pos = event->pos();
        double norm = 0.0;
        if (orientation() == Qt::Horizontal)
                norm = double(pos.x() - line_rect_.x()) / double(line_rect_.width());
        else
                norm = 1.0 - double(pos.y() - line_rect_.y()) / double(line_rect_.height());
        norm = qBound(0.0, norm, 1.0);

        int min_v = minimum();
        int max_v = maximum();
        int new_val = min_v;
        if (max_v != min_v) {
            new_val = min_v + int(norm * (max_v - min_v) + 0.5);
        }
        setValue(new_val);
        update();
        event->accept();
        return;
    }
    QSlider::mouseMoveEvent(event);
}

void FluentSlider::mouseReleaseEvent(QMouseEvent* event) {
    if (getThumbIsPressed()) {
        setThumbIsPressed(false);
        update();
        event->accept();
        return;
    }
    QSlider::mouseReleaseEvent(event);
}
