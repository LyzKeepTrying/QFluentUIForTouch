#include "fluent_scroll_area.h"
#include <QFrame>
#include <QStyle>

FluentScrollArea::FluentScrollArea(QWidget* parent)
    : QScrollArea(parent) {
    initCommon();
}

FluentScrollArea::FluentScrollArea(QWidget* widget, QWidget* parent)
    : QScrollArea(parent) {
    initCommon();
    setWidget(widget);
}

void FluentScrollArea::initCommon() {
    setFrameShape(QFrame::NoFrame);

    // 默认不开启自动拉伸，避免横向滚动条被抑制
    setWidgetResizable(true);

    setAttribute(Qt::WA_TranslucentBackground);

    QWidget* vp = viewport();
    vp->setAttribute(Qt::WA_TranslucentBackground);
    vp->setAutoFillBackground(false);

    vbar_ = new FluentScrollBar(this);
    vbar_->setOrientation(Qt::Vertical);
    setVerticalScrollBar(vbar_);

    hbar_ = new FluentScrollBar(this);
    hbar_->setOrientation(Qt::Horizontal);
    setHorizontalScrollBar(hbar_);

    // 默认策略：需要时才出现
    setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    viewport()->installEventFilter(this);
}

QSize FluentScrollArea::sizeHint() const {
    // Prefer a reasonable default while allowing layout to expand
    return QSize(200, 150);
}

void FluentScrollArea::setMousePanningEnabled(bool enabled) {
    if (mousePanningEnabled_ == enabled) return;
    mousePanningEnabled_ = enabled;
    if (enabled) viewport()->installEventFilter(this);
    else viewport()->removeEventFilter(this);
}

bool FluentScrollArea::eventFilter(QObject* watched, QEvent* event) {
    if (!mousePanningEnabled_)
        return QScrollArea::eventFilter(watched, event);

    if (watched != viewport())
        return QScrollArea::eventFilter(watched, event);

    switch (event->type()) {
    case QEvent::MouseButtonPress: {
        QMouseEvent* me = static_cast<QMouseEvent*>(event);
        if (me->button() == Qt::LeftButton) {
            dragging_ = true;
            panStartPos_ = me->pos();
            scrollStartPos_ = QPoint(horizontalScrollBar()->value(), verticalScrollBar()->value());
            return true; // consume
        }
        break;
    }

    case QEvent::MouseMove: {
        if (!dragging_) break;
        QMouseEvent* me = static_cast<QMouseEvent*>(event);
        QPoint delta = me->pos() - panStartPos_;
        horizontalScrollBar()->setValue(scrollStartPos_.x() - delta.x());
        verticalScrollBar()->setValue(scrollStartPos_.y() - delta.y());
        return true;
    }

    case QEvent::MouseButtonRelease: {
        QMouseEvent* me = static_cast<QMouseEvent*>(event);
        if (me->button() == Qt::LeftButton && dragging_) {
            dragging_ = false;
            return true;
        }
        break;
    }

    default:
        break;
    }

    return QScrollArea::eventFilter(watched, event);
}
