#include "fluent_toggle_button.h"

#include <QPainter>
#include <QEasingCurve>
#include <QPropertyAnimation>
#include <QTimer>

constexpr QSize FluentToggleButton::k_default_size_;

FluentToggleButton::FluentToggleButton(QWidget* parent)
    : QAbstractButton(parent) {
    setContentsMargins(0, 0, 0, 0);
    setCheckable(true);
    setCursor(Qt::PointingHandCursor);

    // 设置动画
    QPropertyAnimation* thumb_animation = new QPropertyAnimation(this, getThumbPositionPropertyName(), this);
    thumb_animation->setDuration(150);
    thumb_animation->setEasingCurve(QEasingCurve::OutQuad);

    // 状态切换时更新动画
    connect(this, &QAbstractButton::toggled, this, [=](bool checked) {
        if (thumb_animation->state() == QPropertyAnimation::Running) {
            thumb_animation->stop();
        }

        thumb_animation->setStartValue(getThumbPosition());
        thumb_animation->setEndValue(checked ? getThumbXEnd() : getThumbXStart());
        thumb_animation->start();
    });

    // 设置初始状态
    QTimer::singleShot(300, this, [=]{
        setThumbPosition(getThumbXStart());
        setThumbPosition(isChecked() ? getThumbXEnd() : getThumbXStart());
    });

    connect(this, &FluentToggleButton::ThumbRadiusChanged, this, [=](int thumb_radius){
        setThumbXEnd(width() - thumb_radius*2 - 3);
        setThumbPosition(isChecked() ? getThumbXEnd() : getThumbXStart());
    });

}

QSize FluentToggleButton::sizeHint() const {
    return QSize(k_default_size_);
}

void FluentToggleButton::paintEvent(QPaintEvent* event) {

    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing | QPainter::SmoothPixmapTransform);

    // 绘制背景（带有悬停效果）
    const int border_radius = getThumbRadius() + 4;
    QRect bg_rect(0, 0, width(), height());
    QColor bg_color = isChecked() ? getBackgroundOnColor() : getBackgroundOffColor();

    painter.setPen(getBorderColor());
    painter.setBrush(bg_color);
    painter.drawRoundedRect(bg_rect.adjusted(1, 1, -1, -1), border_radius, border_radius);

    // 绘制滑块
    QColor thumb_color = isChecked() ? getThumbColor() : getThumbColor().darker(200);
    QRectF thumb_rectf = QRectF(getThumbPosition(), (height() - getThumbRadius()*2.0) / 2.0, getThumbRadius()*2.0, getThumbRadius()*2.0);

    painter.setPen(Qt::NoPen);
    painter.setBrush(thumb_color);
    painter.drawEllipse(thumb_rectf);
}


void FluentToggleButton::mousePressEvent(QMouseEvent* event) {

    // Fluent风格的按压效果
    setThumbColor(getThumbColor().darker(150));
    setBorderColor(getBorderColor().darker(200));

    QAbstractButton::mousePressEvent(event);

}

void FluentToggleButton::mouseReleaseEvent(QMouseEvent* event){

    setThumbColor(getThumbColor().lighter(150));
    setBorderColor(getBorderColor().lighter(200));

    QAbstractButton::mouseReleaseEvent(event);

}

void FluentToggleButton::resizeEvent(QResizeEvent* event) {

    Q_UNUSED(event)

    setThumbXEnd(width() - getThumbRadius()*2 - 3);

    setThumbPosition(isChecked() ? getThumbXEnd() : getThumbXStart());

}
