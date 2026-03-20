#ifndef FLUENT_PIE_CHART_H
#define FLUENT_PIE_CHART_H

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

struct FluentPieSlice {
    QString label;
    double value;
    QColor color;
};

class FLUENTUI_PLUGIN_EXPORT FluentPieChart : public QWidget
{
    Q_OBJECT
    DECLARE_PROPERTY_PRIVATE(double, AnimationProgress, 0.0)
    DECLARE_PROPERTY(bool,   EnableAnimation, true)

    DECLARE_PROPERTY_COLOR(FluentPieChart, BackgroundColor, g_fluent_theme_center->getBackgroundColor().darker(103))
    DECLARE_PROPERTY_COLOR(FluentPieChart, BorderColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentPieChart, TextColor, g_fluent_theme_center->getTextColor())


    DECLARE_PROPERTY(int, BorderWidth, 1)
    DECLARE_PROPERTY(int, PieSpacing, 24)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

    // 新增两个显示控制属性
    DECLARE_PROPERTY(bool, ShowInnerLabel, true)   // 扇形内标签
    DECLARE_PROPERTY(bool, ShowLegend, true)       // 左侧图例
    DECLARE_PROPERTY(int, Margin, 10);

public:
    explicit FluentPieChart(QWidget* parent = nullptr);

    void setData(const QVector<FluentPieSlice>& slices);
    QVector<FluentPieSlice> data() const;

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void showEvent(QShowEvent* event) override;

private:
    void startAppearAnimation();
    void startDataAnimation();
    QColor autoColor(int index) const;

private:
    QVector<FluentPieSlice> m_slices;
    QVector<FluentPieSlice> m_oldSlices;

    QPropertyAnimation* m_anim = nullptr;
    bool m_firstShow = true;

    const QSize k_default_size_{360, 260};   // 为左侧图例预留宽度
};

#endif // FLUENT_PIE_CHART_H
