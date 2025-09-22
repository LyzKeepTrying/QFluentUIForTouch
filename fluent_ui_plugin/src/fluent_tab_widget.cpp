#include "fluent_tab_widget.h"

FluentTabWidget::FluentTabWidget(QWidget* parent)
    : QTabWidget(parent), tab_bar_(nullptr)
{
    setTabPosition(QTabWidget::West);

    // 使用自定义 FluentTabBar
    tab_bar_ = new FluentTabBar(this);
    setTabBar(tab_bar_);
    setDocumentMode(true);
    setMovable(false);
}

FluentTabWidget::~FluentTabWidget()
{
    // 清理滚动区域
    for (auto scrollArea : scroll_areas_) {
        delete scrollArea;
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
    FluentScrollArea* scrollArea = new FluentScrollArea(widget, this);

    // 添加到标签页
    QTabWidget::addTab(scrollArea, icon, label);

    // 保存映射关系
    scroll_areas_[widget] = scrollArea;
}
