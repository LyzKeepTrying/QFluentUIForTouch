#pragma once
#include <QAbstractButton>
#include <QPropertyAnimation>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentToggleButton : public QAbstractButton {
    Q_OBJECT
    DECLARE_PROPERTY(qreal, ThumbPosition, 0.0)
    DECLARE_PROPERTY(qreal, ThumbRadius, 14)
    DECLARE_PROPERTY(qreal, ThumbXStart, 4)
    DECLARE_PROPERTY(qreal, ThumbXEnd, k_default_width_ - 14*2 - 4)
    DECLARE_PROPERTY(QColor, ThumbColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BackgroundOffColor, QFluentUI::ThemeColor::Light::off_color)
    DECLARE_PROPERTY(QColor, BackgroundOnColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)

public:
    explicit FluentToggleButton(QWidget* parent = nullptr);
    QSize sizeHint() const override;
protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;

private:
    constexpr static int k_default_width_ = 48;
    constexpr static int k_default_height_ = 24;
};
