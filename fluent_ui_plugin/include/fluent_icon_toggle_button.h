#ifndef FLUENT_ICON_TOGGLE_BUTTON_H
#define FLUENT_ICON_TOGGLE_BUTTON_H

#include <QAbstractButton>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class Q_DECL_EXPORT FluentIconToggleButton : public QAbstractButton {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, ToggledBackgroundColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(int, IconTopSpace, -6)
    DECLARE_PROPERTY(int, IconTextInnerSpace, 0)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(QIcon, ToggledIcon, QIcon())
    DECLARE_PROPERTY(QString, ToggledText, "")

public:
    explicit FluentIconToggleButton(QWidget* parent = nullptr);

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    constexpr static QSize k_default_size_{64, 64};
    constexpr static QSize k_default_icon_size_{38, 38};
};


#endif // FLUENT_ICON_TOGGLE_BUTTON_H
