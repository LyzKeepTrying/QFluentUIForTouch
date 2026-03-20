#ifndef FLUENT_PUSH_BUTTON_H
#define FLUENT_PUSH_BUTTON_H

#include <QPushButton>

#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentPushButton : public QPushButton {
    Q_OBJECT

    DECLARE_PROPERTY_COLOR(FluentPushButton, BackgroundColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentPushButton, BorderColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentPushButton, TextColor, g_fluent_theme_center->getTextColor())

    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

public:
    explicit FluentPushButton(const QString& text, QWidget* parent = nullptr);
    explicit FluentPushButton(QWidget* parent = nullptr);

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    const QSize k_default_size_{48, 24};
};

#endif // FLUENT_PUSH_BUTTON_H
