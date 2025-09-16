#include "fluent_tab_widget.h"

#include <QStylePainter>
#include <QStyleOption>
#include <QEvent>
#include <QApplication>

// ---------------- FluentLeftTabWidget ----------------

FluentTabWidget::FluentTabWidget(QWidget* parent)
    : QTabWidget(parent)
{
    setTabPosition(QTabWidget::West);

    // 使用自定义 FluentTabBar
    m_tabBar = new FluentTabBar(this);
    setTabBar(m_tabBar);
    setDocumentMode(true); // 更扁平
    setMovable(false);
}

FluentTabBar* FluentTabWidget::fluentTabBar() const
{
    return m_tabBar;
}
