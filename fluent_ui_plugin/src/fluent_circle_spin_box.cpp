#include "fluent_circle_spin_box.h"

#include <QPainter>
#include <QLineEdit>
#include <QTimer>
#include <QTextLayout>
#include <QtMath>

FluentCircleSpinBox::FluentCircleSpinBox(QWidget* parent)
    : QSpinBox(parent) {
    setContentsMargins(0, 0, 0, 0);
    setCursor(Qt::PointingHandCursor);
    setFrame(false);
    if (lineEdit()) {
        lineEdit()->hide();
    }
    setButtonSymbols(QAbstractSpinBox::NoButtons);

    connect(this, QOverload<int>::of(&QSpinBox::valueChanged), this, [this](int val){
        int min_v = minimum();
        int max_v = maximum();

        double norm = 0.0;
        if (max_v != min_v) {
            norm = double(val - min_v) / (max_v - min_v);
        }
        norm = qBound(0.0, norm, 1.0);

        setCurArcLen(norm * getMaxArcLen());
    });

    // 光标闪烁计时
    QTimer* cursor_flash_timer = new QTimer(this);
    connect(cursor_flash_timer, &QTimer::timeout, this, [=]{
        if(hasFocus()){
            setShowCursor(!getShowCursor());
        }
    });
    cursor_flash_timer->start(800);
}

QSize FluentCircleSpinBox::sizeHint() const {
    return QSize(k_default_size_);
}

void FluentCircleSpinBox::paintEvent(QPaintEvent* event) {
    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing |
                           QPainter::TextAntialiasing |
                           QPainter::SmoothPixmapTransform);

    // 整体边框
    painter.setPen(hasFocus() ? getBorderFocusOnColor()
                              : getBorderFocusOffColor());
    painter.setBrush(getBackgroundColor());
    int mid_size = qMin(height(), width()) / 2.5;
    QRect mid_rect = QRect((width() - mid_size) / 2, (height() - mid_size) / 2, mid_size, mid_size).adjusted(4, 4, -4, -4);
    painter.drawRoundedRect(mid_rect, 8, 8);

    // 绘制中间的数字文本
    painter.setPen(getTextColor());
    QFont text_font = QFluentUI::Font::default_text_font;
    painter.setFont(text_font);
    text_font.setPixelSize(getFontSize());
    painter.setFont(text_font);
    QRect text_rect = mid_rect.adjusted(8, 8, -8, -8);
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
    QPen off_pen(getSliderOffColor(), 8);
    off_pen.setCapStyle(Qt::RoundCap);
    off_pen.setJoinStyle(Qt::RoundJoin);
    off_pen.setWidthF(getArcWidth());
    painter.setPen(off_pen);
    painter.setBrush(Qt::NoBrush);

    int side = qMin(rect().width(), rect().height());
    arc_rect_.setTopLeft(QPoint(0,0));
    arc_rect_.setSize(QSize(side, side));
    arc_rect_.moveCenter(rect().center());
    arc_rect_.adjust(getArcRectAdjust(), getArcRectAdjust(), -getArcRectAdjust(), -getArcRectAdjust());

    int start_angle = (270 - (360 - getMaxArcLen()) / 2) * 16;
    int span_angle  = - getMaxArcLen()* 16;

    painter.drawArc(arc_rect_, start_angle, span_angle);

    if (getPaintStep()) {
        painter.save();
        painter.setPen(Qt::NoPen);
        painter.setBrush(getSliderOffColor().darker(150));

        int range = maximum() - minimum();
        if (range > 0 && singleStep() > 0) {
            // 计算起始角（度，与上面 start_angle 对应，但以度为单位）
            double start_deg = 270.0 - (360.0 - getMaxArcLen()) / 2.0;
            // arc_rect_ 已经是环的矩形区域，中心和半轴可复用
            double cx = arc_rect_.center().x();
            double cy = arc_rect_.center().y();
            double rx = arc_rect_.width()  / 2.0;
            double ry = arc_rect_.height() / 2.0;

            for (int i = minimum(); i < maximum(); i += singleStep()) {
                // 跳过起点（与线性实现一致）
                if (i == minimum())
                    continue;

                qreal norm = (i - minimum()) / qreal(range);
                // norm=0 -> 起点，norm=1 -> 终点
                double deg = start_deg - norm * getMaxArcLen(); // 向顺时针方向(负角度)推进
                // 转为弧度并计算点坐标（与 arcEndPoint 的坐标系一致）
                double theta = qDegreesToRadians(deg);
                double x = cx + rx * std::cos(theta);
                double y = cy - ry * std::sin(theta); // 注意 Qt 的 Y 向下

                // 小点半径，参考线性版本使用 getLineWidth()/4.0
                double dotRadius = getArcWidth() / 4.0;
                painter.drawEllipse(QPointF(x, y), dotRadius, dotRadius);
            }
        }

        painter.restore();
    }

    // 绘制彩色环形
    QPen on_pen(getSliderOnColor(), 8);
    on_pen.setCapStyle(Qt::RoundCap);
    on_pen.setJoinStyle(Qt::RoundJoin);
    on_pen.setWidthF(getArcWidth());
    painter.setPen(on_pen);
    painter.setBrush(Qt::NoBrush);

    int cur_angle = - getCurArcLen()* 16;

    painter.drawArc(arc_rect_, start_angle, cur_angle);

    // 绘制thumb
    cur_thumb_pos_ = arcEndPoint(arc_rect_, start_angle, cur_angle);

    painter.setPen(getThumbBorderColor());
    painter.setBrush(getThumbIsPressed() ? getThumbColor().darker(150) : getThumbColor());
    painter.drawEllipse(cur_thumb_pos_, getThumbRadius(), getThumbRadius());

}

QPointF FluentCircleSpinBox::arcEndPoint(const QRectF &arcRect, int startAngle16, int spanAngle16)
{
    // 将 1/16 度 -> 度
    qreal startDeg = startAngle16 / 16.0;
    qreal spanDeg  = spanAngle16  / 16.0;
    qreal endDeg   = startDeg + spanDeg;   // 结束角（度）

    qreal theta = qDegreesToRadians(endDeg); // 弧度

    qreal cx = arcRect.center().x();
    qreal cy = arcRect.center().y();
    qreal rx = arcRect.width()  / 2.0;
    qreal ry = arcRect.height() / 2.0;

    qreal x = cx + rx * std::cos(theta);
    qreal y = cy - ry * std::sin(theta); // 注意减号（Qt 的 y 向下）

    return QPointF(x, y);
}

void FluentCircleSpinBox::mousePressEvent(QMouseEvent* event) {
    if (lineEdit())
        lineEdit()->setCursorPosition(lineEdit()->text().length());

    QPointF pos = event->pos();

    // 1) 判断是否点中 thumb
    QRectF thumb_rect(
        cur_thumb_pos_.x() - getThumbRadius(),
        cur_thumb_pos_.y() - getThumbRadius(),
        getThumbRadius() * 2,
        getThumbRadius() * 2
        );
    if (thumb_rect.contains(pos)) {
        setThumbIsPressed(true);
        event->accept();
        return;
    }

    if(getSliderPress()){
        // 2) 判断是否点中环形轨道带（考虑画笔宽度和 thumb 作为容差）
        QPointF center = arc_rect_.center();
        qreal dx = pos.x() - center.x();
        qreal dy = pos.y() - center.y();
        qreal dist = std::hypot(dx, dy);

        qreal rx = arc_rect_.width() / 2.0; // 半径（绘制时以 arc_rect 为基准）
        qreal half_stroke = getArcWidth() / 2.0;
        qreal tol = getThumbRadius(); // 容差，点击更容易一些

        qreal inner_r = rx - half_stroke - tol;
        qreal outer_r = rx + half_stroke + tol;

        if (dist >= inner_r && dist <= outer_r) {
            // 计算鼠标对应角度（与 mouseMoveEvent 中保持一致）
            qreal angle_rad = std::atan2(center.y() - pos.y(), pos.x() - center.x());
            qreal angle_deg = qRadiansToDegrees(angle_rad);
            if (angle_deg < 0) angle_deg += 360;

            // 圆弧起点（度），与绘制时保持一致
            qreal start_deg = 270 - (360 - getMaxArcLen()) / 2.0;
            if (start_deg < 0) start_deg += 360;

            auto cw_diff = [](qreal from, qreal to) {
                qreal diff = from - to;
                if (diff < 0) diff += 360;
                return diff;
            };

            qreal arc_pos_deg = cw_diff(start_deg, angle_deg);

            // 超出圆弧范围时钳制到最近端（与 mouseMoveEvent 行为一致）
            if (arc_pos_deg > getMaxArcLen()) {
                if (value() <= minimum()) {
                    arc_pos_deg = 0.0;
                } else if (value() >= maximum()) {
                    arc_pos_deg = getMaxArcLen();
                } else {
                    arc_pos_deg = std::max(0.0, std::min(arc_pos_deg, qreal(getMaxArcLen())));
                }
            }

            qreal norm = arc_pos_deg / getMaxArcLen();
            norm = qBound(0.0, norm, 1.0);

            int min_v = minimum();
            int max_v = maximum();
            int new_val = min_v;
            if (max_v != min_v) {
                new_val = min_v + int(norm * (max_v - min_v) + 0.5);
            }
            setValue(new_val);

            // 进入按下状态，以便后续 mouseMoveEvent 处理拖动
            setThumbIsPressed(true);
            update();
            event->accept();
            return;
        }
    }
}

void FluentCircleSpinBox::mouseReleaseEvent(QMouseEvent* event) {
    setThumbIsPressed(false);
    QSpinBox::mouseReleaseEvent(event);
}

void FluentCircleSpinBox::mouseMoveEvent(QMouseEvent* event) {
    if (getThumbIsPressed()) {
        QPointF pos = event->pos();
        QPointF center = arc_rect_.center();

        // 当前鼠标角度（Qt 坐标，y 向下）
        double angle_rad = std::atan2(center.y() - pos.y(), pos.x() - center.x());
        double angle_deg = qRadiansToDegrees(angle_rad);
        if (angle_deg < 0) angle_deg += 360;

        // 圆弧起点和终点（顺时针方向）
        double start_deg = 270 - (360 - getMaxArcLen()) / 2;
        if (start_deg < 0) start_deg += 360;

        auto cw_diff = [](double from, double to) {
            double diff = from - to;
            if (diff < 0) diff += 360;
            return diff;
        };

        // 鼠标到起点的顺时针差
        double arc_pos_deg = cw_diff(start_deg, angle_deg);

        if (arc_pos_deg > getMaxArcLen()) {
            // 超出圆弧范围，根据当前 value 决定钳制位置
            if (value() <= minimum()) {
                arc_pos_deg = 0.0; // 起点
            } else if (value() >= maximum()) {
                arc_pos_deg = getMaxArcLen(); // 终点
            } else {
                // 不是极值则直接夹到范围内
                arc_pos_deg = std::max(0.0, std::min(arc_pos_deg, double(getMaxArcLen())));
            }
        }

        // 归一化并更新
        double norm = arc_pos_deg / getMaxArcLen();
        norm = qBound(0.0, norm, 1.0);

        int min_v = minimum();
        int max_v = maximum();
        int new_val = min_v;
        if (max_v != min_v) {
            new_val = min_v + int(norm * (max_v - min_v) + 0.5);
        }
        setValue(new_val);

        event->accept();
        return;
    }
    QSpinBox::mouseMoveEvent(event);
}

