#include "fluent_tab_widget.h"
#include <QPainter>
#include <QBoxLayout>
#include <QStackedWidget>

FluentTabWidget::FluentTabWidget(QWidget* parent)
    : QTabWidget(parent)
    , tab_bar_(nullptr)
    , current_page_widget_(nullptr)
{
    setTabPosition(QTabWidget::West);
    setTabShape(QTabWidget::Rounded);

    // 使用自定义 FluentTabBar
    tab_bar_ = new FluentTabBar(this);
    setTabBar(tab_bar_);
    setDocumentMode(true);
    setMovable(false);

    // 设置动画
    QPropertyAnimation* slide_animation = new QPropertyAnimation(this);
    slide_animation->setDuration(getAnimationDuration());
    slide_animation->setEasingCurve(getAnimationEasing());

    connect(slide_animation, &QPropertyAnimation::finished, this, [=]{
        // 动画结束后确保所有页面位置正确
        for (int i = 0; i < count(); ++i) {
            QWidget* page = widget(i);
            if (page && page != current_page_widget_) {
                page->move(0, 0);
            }
        }
    });

    // 连接信号
    connect(this, &QTabWidget::currentChanged, this, [=](int index){
        if (index == getLastIndex() || !getAnimationEnabled() || getFirstShow()) {
            setLastIndex(index);
            current_page_widget_ = widget(currentIndex());
            return;
        }

        if (slide_animation->state() == QPropertyAnimation::Running) {
            slide_animation->stop();
        }

        QWidget* previous_widget = current_page_widget_;
        QWidget* current_widget = widget(index);

        if (!previous_widget || !current_widget) {
            setLastIndex(index);
            current_page_widget_ = current_widget;
            return;
        }

        // 设置新页面初始位置
        QPoint start_pos = getSlideStartPosition(getLastIndex(), index);
        current_widget->move(start_pos);
        current_widget->show();
        current_widget->raise();

        // 设置动画目标为新页面
        slide_animation->setTargetObject(current_widget);
        slide_animation->setPropertyName("pos");
        slide_animation->setStartValue(start_pos);
        slide_animation->setEndValue(QPoint(0, 0));
        slide_animation->start();

        setLastIndex(index);
        current_page_widget_ = current_widget;
    });
}

FluentTabWidget::~FluentTabWidget()
{
    // 清理滚动区域
    foreach(auto scroll_area, scroll_areas_) {
        scroll_area->deleteLater();
    }
}

FluentTabBar* FluentTabWidget::fluentTabBar() const
{
    return tab_bar_;
}

void FluentTabWidget::addTabWithScroll(QWidget* widget, const QString& label)
{
    addTabWithScroll(widget, QIcon(), label);
}

void FluentTabWidget::addTabWithScroll(QWidget* widget, const QIcon& icon, const QString& label)
{
    // 使用 FluentScrollArea 替代 QScrollArea
    FluentScrollArea* scroll_area = new FluentScrollArea(widget, this);

    // 添加到标签页
    int index = QTabWidget::addTab(scroll_area, icon, label);

    // 保存映射关系
    scroll_areas_[widget] = scroll_area;

    // 如果是第一个页面，设置为当前页面
    if (index == 0 && current_page_widget_ == nullptr) {
        current_page_widget_ = scroll_area;
    }
}

void FluentTabWidget::showEvent(QShowEvent* event)
{
    QTabWidget::showEvent(event);

    if (getFirstShow()) {
        setFirstShow(false);
        // 首次显示时确保当前页面位置正确
        current_page_widget_ = widget(currentIndex());
        setLastIndex(currentIndex());
    }
}

void FluentTabWidget::resizeEvent(QResizeEvent* event)
{
    QTabWidget::resizeEvent(event);

    //更新页面位置
    QTabWidget::TabPosition position = tabPosition();
    QRect geometry = rect();

    switch (position) {
    case QTabWidget::North:
        geometry.adjust(0, tab_bar_->height(), 0, 0);
        break;
    case QTabWidget::South:
        geometry.adjust(0, 0, 0, -tab_bar_->height());
        break;
    case QTabWidget::West:
        geometry.adjust(tab_bar_->width(), 0, 0, 0);
        break;
    case QTabWidget::East:
        geometry.adjust(0, 0, -tab_bar_->width(), 0);
        break;
    }

    // 设置所有页面的几何位置
    for (int i = 0; i < count(); ++i) {
        QWidget* page = widget(i);
        if (page) {
            page->setGeometry(geometry);
        }
    }
}

QPoint FluentTabWidget::getSlideStartPosition(int fromIndex, int toIndex)
{
    if (fromIndex == -1 || toIndex == -1) {
        return QPoint(0, 0);
    }

    QTabWidget::TabPosition position = tabPosition();
    QSize size = current_page_widget_ ? current_page_widget_->size() : this->size();

    // 根据标签栏位置决定滑动方向
    if (position == QTabWidget::North || position == QTabWidget::South) {
        // 水平标签栏 - 水平滑动
        int direction = (toIndex > fromIndex) ? 1 : -1;
        return QPoint(direction * size.width(), 0);
    } else {
        // 垂直标签栏 - 垂直滑动
        int direction = (toIndex > fromIndex) ? 1 : -1;
        return QPoint(0, direction * size.height());
    }
}
