#ifndef FLUENT_SLIDER_H
#define FLUENT_SLIDER_H

#include <QSlider>
#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentSlider : public QSlider {
    Q_OBJECT

    DECLARE_PROPERTY(qreal, ThumbRadius, 11.0);
    DECLARE_PROPERTY(qreal, LineWidth, 10.0);
    DECLARE_PROPERTY_PRIVATE(bool, ThumbIsPressed, false);

    DECLARE_PROPERTY_COLOR(FluentSlider, ThumbColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentSlider, SliderOnColor, g_fluent_theme_center->getOnColor())
    DECLARE_PROPERTY_COLOR(FluentSlider, SliderOffColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentSlider, ThumbBorderColor, g_fluent_theme_center->getBorderColor())

    DECLARE_PROPERTY(bool, PaintStep, false);
    DECLARE_PROPERTY(bool, SliderPress, true);

public:
    FluentSlider(QWidget* parent = nullptr);

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    const QSize k_default_size_{100, 24};
    QRect line_rect_;
    QPointF cur_thumb_pos_;
};

#endif // FLUENT_SLIDER_H
