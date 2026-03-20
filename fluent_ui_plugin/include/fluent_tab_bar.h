#ifndef FLUENT_TAB_BAR_H
#define FLUENT_TAB_BAR_H

#include <QTabBar>

#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentTabBar : public QTabBar {
    Q_OBJECT

    DECLARE_PROPERTY_COLOR(FluentTabBar, BackgroundColor, g_fluent_theme_center->getBackgroundColor().darker(104))
    DECLARE_PROPERTY_COLOR(FluentTabBar, SelectedColor, g_fluent_theme_center->getOnColor())
    DECLARE_PROPERTY_COLOR(FluentTabBar, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentTabBar, BorderColor, g_fluent_theme_center->getBorderColor())

    DECLARE_PROPERTY(int, TabWidth, 100)
    DECLARE_PROPERTY(int, TabHeight, 60)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(int, TabSpacing, 8)
    DECLARE_PROPERTY(int, TabMargin, 5)
    DECLARE_PROPERTY(int, TabWidgetSpacing, 3)
    DECLARE_PROPERTY(bool, MoveAnamination, true)
    DECLARE_PROPERTY_PRIVATE(int, CurSelectRectPos, 0)
    DECLARE_PROPERTY(bool, ShowIcon, true)

public:
    explicit FluentTabBar(QWidget* parent = nullptr);

    QSize tabSizeHint(int index) const override;
    QSize minimumTabSizeHint(int index) const override;
    void resizeEvent(QResizeEvent *) override;

protected:
    void paintEvent(QPaintEvent* ev) override;
};

#endif // FLUENT_TAB_BAR_H
