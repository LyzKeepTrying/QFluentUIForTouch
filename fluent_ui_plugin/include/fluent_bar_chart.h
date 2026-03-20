// fluent_bar_chart.h
#ifndef FLUENT_BAR_CHART_H
#define FLUENT_BAR_CHART_H

#include <QWidget>
#include <QVector>
#include <QColor>
#include <QPropertyAnimation>

#include "define.h"
#include "fluent_theme_center.h"

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
    DECLARE_PROPERTY_COLOR(FluentBarChart, BackgroundColor, g_fluent_theme_center->getBackgroundColor().darker(103))
    DECLARE_PROPERTY_COLOR(FluentBarChart, BorderColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentBarChart, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY(int, BorderWidth, 1)
    DECLARE_PROPERTY(int, BarSpacing, 10)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(bool, ShowValueLabel, true)
    DECLARE_PROPERTY(bool, ShowLegend, true)

    // 新增属性：是否显示 X/Y 轴数值与是否显示参考线
    DECLARE_PROPERTY(bool, ShowXAxisValues, false)   // 是否显示 X 轴数值（点下方）
    DECLARE_PROPERTY(bool, ShowYAxisValues, false)   // 是否显示 Y 轴数值（左侧刻度）
    DECLARE_PROPERTY(bool, ShowReferenceLines, true) // 是否显示背景参考线（网格横线）

    // 新增最小/最大刻度属性（当 MaxScale > MinScale 时生效）
    DECLARE_PROPERTY(double, MinScale, 0.0) // 默认 0.0（表示自动）
    DECLARE_PROPERTY(double, MaxScale, 1.0) // 默认 0.0（表示自动）
    DECLARE_PROPERTY(int, Margin, 10);

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
