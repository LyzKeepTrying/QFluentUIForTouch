#ifndef FLUENT_TABLE_WIDGET_H
#define FLUENT_TABLE_WIDGET_H

#include <QTableWidget>
#include <QHeaderView>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

// Fluent 风格的表格控件
class Q_DECL_EXPORT FluentTableWidget : public QTableWidget {
    Q_OBJECT

    DECLARE_PROPERTY_SIGNAL(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY_SIGNAL(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY_SIGNAL(QColor, HighLightColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY_SIGNAL(QColor, BackGroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY_SIGNAL(QColor, AlternativeColor, QFluentUI::ThemeColor::Light::off_color.lighter(120))
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)

public:
    explicit FluentTableWidget(QWidget* parent = nullptr);
    ~FluentTableWidget() override;

protected:
    void paintEvent(QPaintEvent* event) override;
};

#endif // FLUENT_TABLE_WIDGET_H
