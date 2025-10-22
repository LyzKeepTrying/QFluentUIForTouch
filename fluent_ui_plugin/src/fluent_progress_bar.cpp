#include "fluent_progress_bar.h"

#include <QPainter>
#include <QTimer>
#include <QEasingCurve>
#include <QPropertyAnimation>

constexpr QSize FluentProgressBar::k_default_size_;

FluentProgressBar::FluentProgressBar(QWidget* parent)
    : QProgressBar(parent){
    setContentsMargins(0, 0, 0, 0);
    setValue(minimum());

    // 设置动画
    QPropertyAnimation* slider_move_animation = new QPropertyAnimation(this, getCurSliderPosPropertyName(), this);
    slider_move_animation->setEasingCurve(QEasingCurve::Linear);
    // 状态切换时更新动画
    connect(this, &QProgressBar::valueChanged, this, [=](int value) {

        if (slider_move_animation->state() == QPropertyAnimation::Running)
            slider_move_animation->stop();

        if(getIsLoop())
            return;

        if(getMoveAnamination()){
            slider_move_animation->setDuration(500.0 / getMoveSpeed());
            slider_move_animation->setStartValue(getCurSliderPos());
            slider_move_animation->setEndValue(value);
            slider_move_animation->start();
        }
        else{
            setCurSliderPos(value);
        }

    });

    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=]{
        static double accum = 0.0;
        accum += (maximum() - minimum()) / 100.0 * getMoveSpeed();
        if (accum >= 1.0) {
            int step = int(accum);
            accum -= step;
            setCurSliderPos((getCurSliderPos() - minimum() + step) % (maximum() - minimum() + 1) + minimum());
        }
    });

    connect(this, &FluentProgressBar::IsLoopChanged, this, [=](bool is_loop){
        if (timer->isActive()) {
            timer->stop();
        }

        if(is_loop)
            timer->start(33); //fps30
    });
}

QSize FluentProgressBar::sizeHint() const {
    return QSize(k_default_size_);
}

void FluentProgressBar::paintEvent(QPaintEvent* event) {

    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing);

    QRect slider_rect = rect().adjusted(getLineWidth(), getLineWidth(), - getLineWidth(), - getLineWidth());

    // 绘制灰色轨道
    QPen off_pen(getSliderOffColor(), getLineWidth());
    off_pen.setCapStyle(Qt::RoundCap);
    painter.setPen(off_pen);
    painter.setBrush(Qt::NoBrush);

    painter.drawLine(slider_rect.x(), slider_rect.y() + slider_rect.height() / 2, slider_rect.x() + slider_rect.width(), slider_rect.y() + slider_rect.height() / 2);

    // 绘制彩色已选轨道
    QPen on_pen(getSliderOnColor(), getLineWidth());
    on_pen.setCapStyle(Qt::RoundCap);
    painter.setPen(on_pen);

    double norm = double(getCurSliderPos() - minimum()) / double(maximum() - minimum());

    if(getIsLoop()){
        double norm_end = norm + qBound(0.0, getSliderLen(), 1.0);
        bool need_draw_left_progress = norm_end > 1.0;
        norm_end = norm_end > 1.0 ? norm_end - 1.0 : norm_end;
        if(need_draw_left_progress){
            painter.drawLine(slider_rect.x(), slider_rect.y() + slider_rect.height() / 2, slider_rect.x() + slider_rect.width() * norm_end, slider_rect.y() + slider_rect.height() / 2);
            painter.drawLine(slider_rect.x() + norm * slider_rect.width(), slider_rect.y() + slider_rect.height() / 2, slider_rect.x() + slider_rect.width(), slider_rect.y() + slider_rect.height() / 2);
        }else{
            painter.drawLine(slider_rect.x() + norm * slider_rect.width(), slider_rect.y() + slider_rect.height() / 2, slider_rect.x() + norm_end * slider_rect.width(), slider_rect.y() + slider_rect.height() / 2);
        }
    }else{
        painter.drawLine(slider_rect.x(), slider_rect.y() + slider_rect.height() / 2, slider_rect.x() + slider_rect.width() * norm, slider_rect.y() + slider_rect.height() / 2);
    }
}
