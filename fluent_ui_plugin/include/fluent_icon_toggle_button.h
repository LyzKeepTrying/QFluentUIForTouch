#ifndef FLUENT_ICON_TOGGLE_BUTTON_H
#define FLUENT_ICON_TOGGLE_BUTTON_H

#include <QAbstractButton>

#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class Q_DECL_EXPORT FluentIconToggleButton : public QAbstractButton {
    Q_OBJECT

    DECLARE_PROPERTY_COLOR(FluentIconToggleButton, BackgroundColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentIconToggleButton, BorderColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentIconToggleButton, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentIconToggleButton, ToggledBackgroundColor, g_fluent_theme_center->getOnColor())

    DECLARE_PROPERTY(int, IconTopMargin, -6)
    DECLARE_PROPERTY(int, IconTextSpace, 0)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(QIcon, ToggledIcon, QIcon())
    DECLARE_PROPERTY(QString, ToggledText, "")
    DECLARE_PROPERTY(bool, TextIsOustside, false);

public:
    explicit FluentIconToggleButton(QWidget* parent = nullptr);

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    const QSize k_default_size_{64, 64};
    const QSize k_default_icon_size_{38, 38};
};


#endif // FLUENT_ICON_TOGGLE_BUTTON_H
