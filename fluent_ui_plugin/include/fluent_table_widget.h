#ifndef FLUENT_TABLE_WIDGET_H
#define FLUENT_TABLE_WIDGET_H

#include <QTableWidget>
#include <QHeaderView>

#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

// Fluent 风格的表格控件
class Q_DECL_EXPORT FluentTableWidget : public QTableWidget {
    Q_OBJECT

    DECLARE_PROPERTY_SIGNAL(int, FontSize, QFluentUI::Font::default_font_size)

    DECLARE_PROPERTY_COLOR(FluentTableWidget, BackGroundColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentTableWidget, HighLightColor, g_fluent_theme_center->getOnColor())
    DECLARE_PROPERTY_COLOR(FluentTableWidget, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentTableWidget, AlternativeColor, g_fluent_theme_center->getOffColor().lighter(120))
    DECLARE_PROPERTY_COLOR(FluentTableWidget, BorderColor, g_fluent_theme_center->getBorderColor())

public:
    explicit FluentTableWidget(QWidget* parent = nullptr);
    ~FluentTableWidget() override;

protected:
    void paintEvent(QPaintEvent* event) override;
};

#endif // FLUENT_TABLE_WIDGET_H
