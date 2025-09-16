#ifndef FLUENT_TAB_BAR_H
#define FLUENT_TAB_BAR_H

#include <QTabBar>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentTabBar : public QTabBar {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, SelectedColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(int, IconSize, 30)
    DECLARE_PROPERTY(int, TabWidth, 100)
    DECLARE_PROPERTY(int, TabHeight, 60)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(int, TabSpacing, 8)
    DECLARE_PROPERTY(int, TabMargin, 5)
    DECLARE_PROPERTY(bool, MoveAnamination, true);
    DECLARE_PROPERTY_PRIVATE(int, CurSelectRectPos, 0)

public:
    explicit FluentTabBar(QWidget* parent = nullptr);

    QSize tabSizeHint(int index) const override;
    QSize minimumTabSizeHint(int index) const override;

protected:
    void paintEvent(QPaintEvent* ev) override;
};

#endif // FLUENT_TAB_BAR_H
