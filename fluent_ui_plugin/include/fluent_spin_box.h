#ifndef FLUENT_SPIN_BOX_H
#define FLUENT_SPIN_BOX_H

#include <QSpinBox>
#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentSpinBox : public QSpinBox {
    Q_OBJECT

    DECLARE_PROPERTY_COLOR(FluentSpinBox, BackgroundColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentSpinBox, BorderFocusOnColor, g_fluent_theme_center->getOnColor())
    DECLARE_PROPERTY_COLOR(FluentSpinBox, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentSpinBox, BorderFocusOffColor, g_fluent_theme_center->getBorderColor())

    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY_PRIVATE(bool, PlusButtonIsPressed, false);
    DECLARE_PROPERTY_PRIVATE(bool, MinusButtonIsPressed, false);
    DECLARE_PROPERTY_PRIVATE(bool, ShowCursor, true);

public:
    explicit FluentSpinBox(QWidget* parent = nullptr);

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    QRect plus_button_rect_;
    QRect minus_button_rect_;
    QTimer* long_press_timer_ = nullptr;
    bool long_press_direction_ = false;

    const QSize k_default_size_{100, 24};
};

#endif // FLUENT_SPIN_BOX_H
