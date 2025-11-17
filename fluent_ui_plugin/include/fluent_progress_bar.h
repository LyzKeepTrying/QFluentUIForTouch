#ifndef FLUENT_PROGRESS_BAR_H
#define FLUENT_PROGRESS_BAR_H

#include <QProgressBar>
#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentProgressBar : public QProgressBar {
    Q_OBJECT
    DECLARE_PROPERTY(qreal, LineWidth, 10.0)
    DECLARE_PROPERTY(QColor, SliderOnColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(QColor, SliderOffColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY_PRIVATE(int, CurSliderPos, 0.0)
    DECLARE_PROPERTY(bool, MoveAnamination, true)
    DECLARE_PROPERTY_SIGNAL(bool, IsLoop, false)
    DECLARE_PROPERTY(qreal, MoveSpeed, 1.0)
    DECLARE_PROPERTY(qreal, SliderLen, 0.25)

public:
    FluentProgressBar(QWidget *parent = nullptr);
    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;

private:
    const QSize k_default_size_{48, 12};
};

#endif // FLUENT_PROGRESS_BAR_H
