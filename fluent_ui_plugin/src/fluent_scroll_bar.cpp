#include "fluent_scroll_bar.h"

#include <QPainter>
#include <QMouseEvent>
#include <QtMath>

FluentScrollBar::FluentScrollBar(QWidget* parent)
    : QScrollBar{parent} {
    setContentsMargins(0, 0, 0, 0);
    setCursor(Qt::PointingHandCursor);

    // 设置背景透明
    setAttribute(Qt::WA_TranslucentBackground);

    // 建议最小尺寸与策略：确保控件足够放下圆形滑块和轨道
    setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    int diameter = qMax(int(qRound(getThumbRadius() * 2.0)), int(getTrackWidth()) + 6);
    const int padding = 4; // 额外像素，避免抗锯齿被裁剪
    if (orientation() == Qt::Vertical) {
        setMinimumWidth(diameter + padding);
        setMinimumHeight(k_default_size_.height());
    } else {
        setMinimumHeight(diameter + padding);
        setMinimumWidth(k_default_size_.width());
    }
}

QSize FluentScrollBar::sizeHint() const {
    // 控件的厚度应至少能容纳轨道和圆形滑块中更宽的那个
    int diameter = qMax(int(qRound(getThumbRadius() * 2.0)), int(getTrackWidth()) + 6);
    const int padding = 4;
    int thickness = diameter + padding;

    return orientation() == Qt::Vertical ?
               QSize(thickness, 100) :
               QSize(100, thickness);
}

QSize FluentScrollBar::minimumSizeHint() const {
    int diameter = qMax(int(qRound(getThumbRadius() * 2.0)), int(getTrackWidth()) + 6);
    const int padding = 4;
    int thickness = diameter + padding;
    return orientation() == Qt::Vertical ?
               QSize(thickness, k_default_size_.height()) :
               QSize(k_default_size_.width(), thickness);
}

// 处理背景透明
bool FluentScrollBar::event(QEvent* event) {
    if (event->type() == QEvent::ParentChange) {
        // 当父控件改变时确保背景透明
        setAttribute(Qt::WA_TranslucentBackground);
    }
    return QScrollBar::event(event);
}

QRect FluentScrollBar::calculateGrooveRect() const {
    const int base_margin = 1;

    QRect rect = this->rect().adjusted(base_margin, base_margin, -base_margin, -base_margin);

    if (orientation() == Qt::Vertical) {
        rect.setWidth(getTrackWidth());
        // center groove horizontally; the widget width (from sizeHint/minimum) should provide space
        rect.moveLeft((this->rect().width() - rect.width()) / 2);
    } else {
        rect.setHeight(getTrackWidth());
        rect.moveTop((this->rect().height() - rect.height()) / 2);
    }
    return rect;
}

// helper: compute the thumb length along the groove axis (used to compute position ratio)
int FluentScrollBar::calculateThumbAxisLength() const {
    QRect groove = calculateGrooveRect();

    int min = minimum();
    int max = maximum();
    int page = pageStep();

    if (max <= min || page <= 0) {
        return 0;
    }

    double lengthRatio = qMin(1.0, page / double(max - min + 1));
    int axisLength = qMax(k_min_thumb_length_, int(lengthRatio * (orientation() == Qt::Vertical ?
                                                                      groove.height() : groove.width())));
    return axisLength;
}

QRect FluentScrollBar::calculateThumbRect() const {
    QRect groove = calculateGrooveRect();
    QRect thumbRect;

    int min = minimum();
    int max = maximum();
    int page = pageStep();
    int val = value();

    if (max <= min || page <= 0) {
        return QRect();
    }

    // diameter: ensure it's at least ThumbRadius*2 and wider than track
    int diameter = qMax(int(qRound(getThumbRadius() * 2.0)), int(getTrackWidth()) + 6);

    if (orientation() == Qt::Vertical) {
        diameter = qMin(diameter, groove.height());
        double radius = diameter / 2.0;

        // Map value into [0,1] using full value span so the thumb can reach both ends correctly
        int valueSpan = max - min;
        double positionRatio = valueSpan > 0 ? (val - min) / double(valueSpan) : 0.0;
        positionRatio = qBound(0.0, positionRatio, 1.0);

        double travel = qMax(0.0, groove.height() - 2.0 * radius); // center moves in [top+radius, bottom-radius]
        double centerY = groove.top() + radius + positionRatio * travel;
        int centerX = groove.left() + groove.width() / 2;
        thumbRect = QRect(int(centerX - radius), int(centerY - radius), diameter, diameter);
    } else {
        diameter = qMin(diameter, groove.width());
        double radius = diameter / 2.0;

        int valueSpan = max - min;
        double positionRatio = valueSpan > 0 ? (val - min) / double(valueSpan) : 0.0;
        positionRatio = qBound(0.0, positionRatio, 1.0);

        double travel = qMax(0.0, groove.width() - 2.0 * radius);
        double centerX = groove.left() + radius + positionRatio * travel;
        int centerY = groove.top() + groove.height() / 2;
        thumbRect = QRect(int(centerX - radius), int(centerY - radius), diameter, diameter);
    }

    return thumbRect;
}

bool FluentScrollBar::isThumbArea(const QPoint& pos) const {
    QRect t = calculateThumbRect();
    if (t.isEmpty()) return false;
    QPoint center = t.center();
    double radius = t.width() / 2.0; // width==height for thumbRect
    double dx = pos.x() - center.x();
    double dy = pos.y() - center.y();
    return (dx*dx + dy*dy) <= (radius * radius);
}

void FluentScrollBar::paintEvent(QPaintEvent* /*event*/) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);


    painter.fillRect(rect(), palette().window());
    // 绘制轨道
    QRect groove_rect = calculateGrooveRect();
    painter.setPen(Qt::NoPen);
    painter.setBrush(getTrackColor());
    painter.drawRoundedRect(groove_rect, getTrackWidth()/2, getTrackWidth()/2);

    // 绘制圆形滑块
    QRect thumb_rect = calculateThumbRect();
    if (!thumb_rect.isEmpty()) {
        QColor thumbBrush = getThumbPressed() ? getThumbColor().darker(150) : getThumbColor();
        painter.setBrush(thumbBrush);
        painter.setPen(getThumbBorderColor());
        painter.drawEllipse(thumb_rect);
    }
}

void FluentScrollBar::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        if (isThumbArea(event->pos())) {
            // 点击在滑块上：开始拖动
            setThumbPressed(true);
            event->accept();
            return;
        } else {
            // 点击在轨道上：阻止默认行为（不跳转）
            event->ignore(); // 或者 event->ignore() 取决于你是否希望父控件接着处理
            return;
        }
    }
    // 其他按键交给基类处理（例如右键菜单等）
    QScrollBar::mousePressEvent(event);
}

void FluentScrollBar::mouseMoveEvent(QMouseEvent* event) {
    if (getThumbPressed()) {
        QRect groove = calculateGrooveRect();
        int min = minimum();
        int max = maximum();
        int page = pageStep();

        if (max <= min || page <= 0) {
            return;
        }

        // recompute diameter/radius used for effective travel range
        int diameter = qMax(int(qRound(getThumbRadius() * 2.0)), int(getTrackWidth()) + 6);
        double radius = diameter / 2.0;

        double pos = orientation() == Qt::Vertical ?
                         (event->pos().y() - groove.top()) :
                         (event->pos().x() - groove.left());

        double travel = orientation() == Qt::Vertical ?
                            qMax(0.0, groove.height() - 2.0 * radius) :
                            qMax(0.0, groove.width() - 2.0 * radius);

        // Protect against zero travel (thumb fills groove) -- keep ratio 0
        double ratio;
        if (qFuzzyIsNull(travel)) {
            ratio = 0.0;
        } else {
            // Map the pointer position to center movement: center = radius + ratio * travel
            // so ratio = (pos - radius) / travel
            ratio = (pos - radius) / travel;
            ratio = qBound(0.0, ratio, 1.0);
        }

        // Use full value span so the thumb can reach min..max
        int valueSpan = max - min;
        int newValue = min + (valueSpan > 0 ? qRound(ratio * valueSpan) : 0);
        newValue = qBound(min, newValue, max);

        setValue(newValue);
        update();
        event->accept();
        return;
    }
    QScrollBar::mouseMoveEvent(event);
}

void FluentScrollBar::mouseReleaseEvent(QMouseEvent* event) {
    if (getThumbPressed() && event->button() == Qt::LeftButton) {
        setThumbPressed(false);
        event->accept();
        return;
    }
    QScrollBar::mouseReleaseEvent(event);
}
