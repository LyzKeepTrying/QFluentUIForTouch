#ifndef FLUENT_LINE_CHART_H
#define FLUENT_LINE_CHART_H

#include <QWidget>
#include <QVector>
#include <QColor>
#include <QPropertyAnimation>
#include <QMouseEvent>

#include "define.h"
#include "fluent_theme_center.h"

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

    DECLARE_PROPERTY_COLOR(FluentLineChart, BackgroundColor, g_fluent_theme_center->getBackgroundColor().darker(103))
    DECLARE_PROPERTY_COLOR(FluentLineChart, BorderColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentLineChart, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentLineChart, LineColor, g_fluent_theme_center->getOnColor())

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

    // 鼠标交互
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    void startAppearAnimation();
    void startDataAnimation();
    QColor autoColor(int index) const;

    // 帮助函数：根据鼠标位置选取最近点索引（若没有点则返回 -1）
    int indexForPos(const QPoint& pos) const;

private:
    QVector<FluentLinePoint> m_points;
    QVector<FluentLinePoint> m_oldPoints;

    QPropertyAnimation* m_anim = nullptr;
    bool m_firstShow = true;

    const QSize k_default_size_{420, 260};

    // --- 新增成员，用于交互显示 ---
    QVector<QPointF> m_screenPoints; // 当前绘制时每个数据点的屏幕坐标（与 m_points 对应）
    bool m_showCursor = false;      // 是否显示当前的垂直参考线与数值
    bool m_pressed = false;         // 鼠标是否处于按下状态（用于拖动）
    int m_activeIndex = -1;         // 当前选中的点索引（-1 表示无）
};

#endif // FLUENT_LINE_CHART_H
