#ifndef FLUENT_SLIDER_H
#define FLUENT_SLIDER_H

#include <QSlider>
#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentSlider : public QSlider {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, ThumbColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(qreal, ThumbRadius, 11.0);
    DECLARE_PROPERTY(qreal, LineWidth, 10.0);
    DECLARE_PROPERTY(bool, ThumbIsPressed, false);
    DECLARE_PROPERTY(QColor, SliderOnColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(QColor, SliderOffColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, ThumbBorderColor, QFluentUI::ThemeColor::Light::border_color)

public:
    FluentSlider(QWidget* parent = nullptr);

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

#endif // FLUENT_SLIDER_H
