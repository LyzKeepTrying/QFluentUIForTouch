#ifndef FLUENT_ICON_PUSH_BUTTON_H
#define FLUENT_ICON_PUSH_BUTTON_H

#include <QPushButton>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class Q_DECL_EXPORT FluentIconPushButton : public QPushButton {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(int, IconTopMargin, -6)
    DECLARE_PROPERTY(int, IconTextSpace, 0)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(bool, TextIsOustside, false);

public:
    explicit FluentIconPushButton(QWidget* parent = nullptr);
    explicit FluentIconPushButton(const QIcon& icon, const QString& text = QString(), QWidget* parent = nullptr);

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    constexpr static QSize k_default_size_{64, 64};
    constexpr static QSize k_default_icon_size_{38, 38};
};


#endif // FLUENT_ICON_PUSH_BUTTON_H
