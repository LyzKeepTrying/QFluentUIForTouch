#ifndef FLUENT_LINE_SPIN_BOX_H
#define FLUENT_LINE_SPIN_BOX_H

#include <QSpinBox>
#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentLineSpinBox : public QSpinBox {
    Q_OBJECT
    DECLARE_PROPERTY_COLOR(FluentLineSpinBox, BackgroundColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentLineSpinBox, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentLineSpinBox, BorderFocusOnColor, g_fluent_theme_center->getOnColor())
    DECLARE_PROPERTY_COLOR(FluentLineSpinBox, BorderFocusOffColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentLineSpinBox, SliderOnColor, g_fluent_theme_center->getOnColor())
    DECLARE_PROPERTY_COLOR(FluentLineSpinBox, SliderOffColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentLineSpinBox, ThumbColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentLineSpinBox, ThumbBorderColor, g_fluent_theme_center->getBorderColor())

    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(qreal, ThumbRadius, 11.0);
    DECLARE_PROPERTY(qreal, LineWidth, 10.0);
    DECLARE_PROPERTY_PRIVATE(bool, ShowCursor, true);
    DECLARE_PROPERTY_PRIVATE(bool, ThumbIsPressed, false);
    DECLARE_PROPERTY(Qt::Orientation, DirectionState, Qt::Horizontal);
    DECLARE_PROPERTY(bool, PaintStep, false);
    DECLARE_PROPERTY(bool, SliderPress, true);

public:
    explicit FluentLineSpinBox(QWidget* parent = nullptr);

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

#endif // FLUENT_LINE_SPIN_BOX_H
