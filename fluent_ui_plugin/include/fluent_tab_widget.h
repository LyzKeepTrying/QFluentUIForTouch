#ifndef FLUENT_TAB_WIDGET_H
#define FLUENT_TAB_WIDGET_H

#include <QTabWidget>
#include <QHash>
#include <QPropertyAnimation>
#include <QStackedWidget>

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
    DECLARE_PROPERTY(int, AnimationDuration, 450)
    DECLARE_PROPERTY(QEasingCurve::Type, AnimationEasing, QEasingCurve::OutCubic)
    DECLARE_PROPERTY(bool, AnimationEnabled, true)
    DECLARE_PROPERTY_PRIVATE(int, LastIndex, -1);
    DECLARE_PROPERTY_PRIVATE(bool, FirstShow, true);

public:
    explicit FluentTabWidget(QWidget* parent = nullptr);
    ~FluentTabWidget();

    // 快捷访问底层 FluentTabBar
    FluentTabBar* fluentTabBar() const;

    // 添加页面（自动包装在 FluentScrollArea 中）
    void addTabWithScroll(QWidget* widget, const QString& label);
    void addTabWithScroll(QWidget* widget, const QIcon& icon, const QString& label);

protected:
    void showEvent(QShowEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;

private:
    QPoint getSlideStartPosition(int fromIndex, int toIndex);

    FluentTabBar* tab_bar_;
    QHash<QWidget*, FluentScrollArea*> scroll_areas_; // 存储页面和对应的 FluentScrollArea
    QWidget* current_page_widget_; // 当前页面widget
};

#endif // FLUENT_TAB_WIDGET_H
