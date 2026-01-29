#ifndef FLUENT_BAR_CHART_H
#define FLUENT_BAR_CHART_H

#include <QWidget>
#include <QVector>
#include <QColor>
#include <QPropertyAnimation>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

struct FluentBarItem {
    QString label;
    double value;
    QColor color;
};

class FLUENTUI_PLUGIN_EXPORT FluentBarChart : public QWidget
{
    Q_OBJECT
    DECLARE_PROPERTY_PRIVATE(double, AnimationProgress, 0.0)
    DECLARE_PROPERTY(bool,   EnableAnimation, true)
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(int, BorderWidth, 1)
    DECLARE_PROPERTY(int, BarSpacing, 10)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

    DECLARE_PROPERTY(bool, ShowValueLabel, true)
    DECLARE_PROPERTY(bool, ShowLegend, true)

public:
    explicit FluentBarChart(QWidget* parent = nullptr);

    void setData(const QVector<FluentBarItem>& items);
    QVector<FluentBarItem> data() const;

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void showEvent(QShowEvent* event) override;

private:
    void startAppearAnimation();
    void startDataAnimation();
    QColor autoColor(int index) const;

private:
    QVector<FluentBarItem> m_items;
    QVector<FluentBarItem> m_oldItems;

    QPropertyAnimation* m_anim = nullptr;
    bool m_firstShow = true;

    const QSize k_default_size_{420, 260};
};

#endif // FLUENT_BAR_CHART_H
