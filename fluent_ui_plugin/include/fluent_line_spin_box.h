#ifndef FLUENT_LINE_SPIN_BOX_H
#define FLUENT_LINE_SPIN_BOX_H

#include <QSpinBox>
#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentLineSpinBox : public QSpinBox {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, BorderFocusOnColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(QColor, BorderFocusOffColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(QColor, SliderOnColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(QColor, SliderOffColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, ThumbColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, ThumbBorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(qreal, ThumbRadius, 11.0);
    DECLARE_PROPERTY(qreal, LineWidth, 10.0);
    DECLARE_PROPERTY(bool, ShowCursor, true);
    DECLARE_PROPERTY(bool, ThumbIsPressed, false);
    DECLARE_PROPERTY(Qt::Orientation, DirectionState, Qt::Horizontal);

public:
    explicit FluentLineSpinBox(QWidget* parent = nullptr);

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    constexpr static QSize k_default_size_{100, 24};
    QRect line_rect_;
    QPointF cur_thumb_pos_;
};

#endif // FLUENT_LINE_SPIN_BOX_H
