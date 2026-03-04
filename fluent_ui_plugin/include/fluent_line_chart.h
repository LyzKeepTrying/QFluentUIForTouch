// fluent_line_chart.h
#ifndef FLUENT_LINE_CHART_H
#define FLUENT_LINE_CHART_H

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

struct FluentLinePoint {
    QString label;
    double value;
    QColor color;
};

class FLUENTUI_PLUGIN_EXPORT FluentLineChart : public QWidget
{
    Q_OBJECT
    DECLARE_PROPERTY_PRIVATE(double, AnimationProgress, 0.0)
    DECLARE_PROPERTY(bool,   EnableAnimation, true)
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, LineColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(int, BorderWidth, 1)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(bool, ShowPointLabel, true)
    DECLARE_PROPERTY(bool, ShowLegend, true)
    DECLARE_PROPERTY(double, PointRadius, 4.0)   // 点半径
    DECLARE_PROPERTY(double, LineWidth, 2.0)     // 折线粗细
    DECLARE_PROPERTY(bool, ShowXAxisValues, false)   // 是否显示 X 轴数值（点下方）
    DECLARE_PROPERTY(bool, ShowYAxisValues, false)   // 是否显示 Y 轴数值（左侧刻度）
    DECLARE_PROPERTY(bool, ShowReferenceLines, true) // 是否显示背景参考线（网格横线）

    // 新增最小/最大刻度属性（当 MaxScale > MinScale 时生效）
    DECLARE_PROPERTY(double, MinScale, 0.0) // 默认 0.0（表示自动）
    DECLARE_PROPERTY(double, MaxScale, 1.0) // 默认 0.0（表示自动）
    DECLARE_PROPERTY(int, Margin, 10);

public:
    explicit FluentLineChart(QWidget* parent = nullptr);

    void setData(const QVector<FluentLinePoint>& points);
    QVector<FluentLinePoint> data() const;

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void showEvent(QShowEvent* event) override;

private:
    void startAppearAnimation();
    void startDataAnimation();
    QColor autoColor(int index) const;

private:
    QVector<FluentLinePoint> m_points;
    QVector<FluentLinePoint> m_oldPoints;

    QPropertyAnimation* m_anim = nullptr;
    bool m_firstShow = true;

    const QSize k_default_size_{420, 260};
};

#endif // FLUENT_LINE_CHART_H
