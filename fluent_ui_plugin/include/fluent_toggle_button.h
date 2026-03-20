#pragma once
#include <QAbstractButton>

#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentToggleButton : public QAbstractButton {
    Q_OBJECT
    DECLARE_PROPERTY_PRIVATE(qreal, ThumbPosition, 0.0)
    DECLARE_PROPERTY_SIGNAL(qreal, ThumbRadius, 14)
    DECLARE_PROPERTY_PRIVATE(qreal, ThumbXStart, 4)
    DECLARE_PROPERTY_PRIVATE(qreal, ThumbXEnd, k_default_size_.width() - 14*2 - 3)

    DECLARE_PROPERTY_COLOR(FluentToggleButton, ThumbColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentToggleButton, BackgroundOffColor, g_fluent_theme_center->getOffColor())
    DECLARE_PROPERTY_COLOR(FluentToggleButton, BackgroundOnColor, g_fluent_theme_center->getOnColor())
    DECLARE_PROPERTY_COLOR(FluentToggleButton, BorderColor, g_fluent_theme_center->getBorderColor())

public:
    explicit FluentToggleButton(QWidget* parent = nullptr);
    QSize sizeHint() const override;
protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;

private:
    const QSize k_default_size_{48, 24};
};
