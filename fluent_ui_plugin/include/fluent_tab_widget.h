#ifndef FLUENT_TAB_WIDGET_H
#define FLUENT_TAB_WIDGET_H

#include <QTabWidget>
#include <QHash>

#include "fluent_tab_bar.h"
#include "fluent_scroll_area.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

// QTabWidget 封装，左侧导航
class FLUENTUI_PLUGIN_EXPORT FluentTabWidget : public QTabWidget {
    Q_OBJECT
public:
    explicit FluentTabWidget(QWidget* parent = nullptr);
    ~FluentTabWidget();

    // 快捷访问底层 FluentTabBar
    FluentTabBar* fluentTabBar() const;

    // 添加页面（自动包装在 FluentScrollArea 中）
    void addTabWithScroll(QWidget* widget, const QString& label);
    void addTabWithScroll(QWidget* widget, const QIcon& icon, const QString& label);

private:
    FluentTabBar* tab_bar_;
    QHash<QWidget*, FluentScrollArea*> scroll_areas_; // 存储页面和对应的 FluentScrollArea
};

#endif // FLUENT_TAB_WIDGET_H
