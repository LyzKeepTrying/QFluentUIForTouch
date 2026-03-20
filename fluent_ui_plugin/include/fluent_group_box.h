#ifndef FLUENT_GROUP_BOX_H
#define FLUENT_GROUP_BOX_H

#include <QGroupBox>
#include <QPainter>
#include <QMouseEvent>

#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentGroupBox : public QGroupBox {
    Q_OBJECT

    DECLARE_PROPERTY_COLOR(FluentGroupBox, BackgroundColor, g_fluent_theme_center->getBackgroundColor().darker(104))
    DECLARE_PROPERTY_COLOR(FluentGroupBox, BorderColor, g_fluent_theme_center->getBorderColor().lighter(104))
    DECLARE_PROPERTY_COLOR(FluentGroupBox, TextColor, g_fluent_theme_center->getTextColor())

    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(int, BorderWidth, 1)
    DECLARE_PROPERTY(int, TitleLeftMargin, 4)
    DECLARE_PROPERTY(int, TitleBottomMargin, 4)
    DECLARE_PROPERTY(bool, ShowTitle, true)
    DECLARE_PROPERTY(bool, TitleIsOutside, true)

public:
    explicit FluentGroupBox(QWidget* parent = nullptr);
    explicit FluentGroupBox(const QString& title, QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;

};

#endif // FLUENT_GROUP_BOX_H
