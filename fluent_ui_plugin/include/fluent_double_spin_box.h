#ifndef FLUENT_DOUBLE_SPIN_BOX_H
#define FLUENT_DOUBLE_SPIN_BOX_H

#include <QDoubleSpinBox>
#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentDoubleSpinBox : public QDoubleSpinBox {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, BorderFocusOnColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(QColor, BorderFocusOffColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(bool, PlusButtonIsPressed, false);
    DECLARE_PROPERTY(bool, MinusButtonIsPressed, false);
    DECLARE_PROPERTY(bool, ShowCursor, true);

public:
    explicit FluentDoubleSpinBox(QWidget* parent = nullptr);

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    QRect plus_button_rect_;
    QRect minus_button_rect_;

    constexpr static QSize k_default_size_{100, 24};
};

#endif // FLUENT_DOUBLE_SPIN_BOX_H
