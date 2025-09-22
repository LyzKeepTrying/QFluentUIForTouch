// FluentScrollBar - header + implementation with circular thumb

#ifndef FLUENT_SCROLLBAR_H
#define FLUENT_SCROLLBAR_H

#include <QScrollBar>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentScrollBar : public QScrollBar {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, ThumbColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, ThumbBorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, TrackColor, QFluentUI::ThemeColor::Light::off_color)
    DECLARE_PROPERTY(qreal, ThumbRadius, 12.0)
    DECLARE_PROPERTY(qreal, TrackWidth, 10.0)
    DECLARE_PROPERTY_PRIVATE(bool, ThumbPressed, false)

public:
    FluentScrollBar(QWidget* parent = nullptr);

    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

    // 添加背景透明处理
    bool event(QEvent* event) override;

private:
    QRect calculateGrooveRect() const;
    QRect calculateThumbRect() const; // now returns the square bounding rect of the circular thumb
    int calculateThumbAxisLength() const; // helper: length used to compute position along groove
    bool isThumbArea(const QPoint& pos) const;

    constexpr static QSize k_default_size_{12, 12};
    constexpr static int k_min_thumb_length_{20};
};

#endif // FLUENT_SCROLLBAR_H
