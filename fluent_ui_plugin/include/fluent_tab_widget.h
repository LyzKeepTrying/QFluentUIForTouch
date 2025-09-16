#ifndef FLUENT_TAB_WIDGET_H
#define FLUENT_TAB_WIDGET_H

#include <QTabWidget>

#include "define.h"
#include "theme.h"
#include "fluent_tab_bar.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

// QTabWidget 封装，左侧导航
class FLUENTUI_PLUGIN_EXPORT FluentTabWidget : public QTabWidget {
    Q_OBJECT
    // 可以复用一些外观属性（可在外部设置）
    DECLARE_PROPERTY(int, LeftTabWidth, 160)
    DECLARE_PROPERTY(int, LeftTabIconSize, 20)

public:
    explicit FluentTabWidget(QWidget* parent = nullptr);

    // 快捷访问底层 FluentTabBar
    FluentTabBar* fluentTabBar() const;

private:
    FluentTabBar* m_tabBar;
};

#endif // FLUENT_TAB_WIDGET_H
