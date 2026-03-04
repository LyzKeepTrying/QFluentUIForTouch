// fluent_bar_chart.cpp
#include "fluent_bar_chart.h"

#include <QPainter>
#include <QFontMetrics>
#include <QtMath>

FluentBarChart::FluentBarChart(QWidget* parent)
    : QWidget(parent)
{
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    //setMinimumSize(k_default_size_);

    m_anim = new QPropertyAnimation(this, getAnimationProgressPropertyName(), this);
    m_anim->setDuration(500);
    m_anim->setEasingCurve(QEasingCurve::OutCubic);

    QVector<FluentBarItem> data1;
    data1.push_back({"样本1", 0.1, QColor()});
    data1.push_back({"样本2", 0.7, QColor()});
    data1.push_back({"样本3", 0.4, QColor()});
    data1.push_back({"样本1", 0.1, QColor()});
    data1.push_back({"样本2", 0.3, QColor()});
    data1.push_back({"样本3", 0.4, QColor()});
    data1.push_back({"样本1", 0.8, QColor()});
    setData(data1);
}

void FluentBarChart::showEvent(QShowEvent* event)
{
    QWidget::showEvent(event);

    if (m_firstShow) {
        m_firstShow = false;
        if (getEnableAnimation())
            startAppearAnimation();
        else
            setAnimationProgress(1.0);
    }
}

void FluentBarChart::setData(const QVector<FluentBarItem>& items)
{
    m_oldItems = m_items;
    m_items = items;

    for (int i = 0; i < m_items.size(); ++i) {
        if (!m_items[i].color.isValid())
            m_items[i].color = autoColor(i);
    }

    if (getEnableAnimation())
        startDataAnimation();
    else
        setAnimationProgress(1.0);

    update();
}

QVector<FluentBarItem> FluentBarChart::data() const
{
    return m_items;
}

QSize FluentBarChart::sizeHint() const
{
    return k_default_size_;
}

void FluentBarChart::startAppearAnimation()
{
    m_anim->stop();
    setAnimationProgress(0.0);
    m_anim->setStartValue(0.0);
    m_anim->setEndValue(1.0);
    m_anim->start();
}

void FluentBarChart::startDataAnimation()
{
    m_anim->stop();
    setAnimationProgress(0.0);
    m_anim->setStartValue(0.0);
    m_anim->setEndValue(1.0);
    m_anim->start();
}

QColor FluentBarChart::autoColor(int index) const
{
    static QVector<QColor> palette = {
        QColor(0, 120, 212),
        QColor(16, 124, 16),
        QColor(232, 17, 35),
        QColor(255, 185, 0),
        QColor(0, 153, 188),
        QColor(136, 23, 152),
        QColor(0, 183, 195),
        QColor(255, 140, 0)
    };
    return palette[index % palette.size()];
}

void FluentBarChart::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    QRectF drawRect = rect().adjusted(1, 1, -1, -1);

    painter.setBrush(getBackgroundColor());
    painter.setPen(QPen(getBorderColor(), getBorderWidth()));
    painter.drawRoundedRect(drawRect, 8, 8);
    drawRect.adjust(getMargin(), getMargin(), -getMargin(), -getMargin());

    if (m_items.isEmpty())
        return;

    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);

    const int legendWidth = getShowLegend() ? 120 : 0;
    const int spacing = getBarSpacing();

    // 固定边距（与之前保持一致）
    const int leftMargin = 20;
    const int topMargin = 20;
    const int rightMargin = 20;
    // 底部默认预留 40（原来使用 -40），这里会根据是否显示 X 轴值再调整
    int bottomMargin = 40;

    QRectF legendRect = drawRect.adjusted(leftMargin, topMargin, legendWidth - rightMargin, -topMargin);
    QRectF barRect   = drawRect.adjusted(legendWidth + leftMargin, topMargin, -rightMargin, -bottomMargin);

    // 如果需要显示 X 轴数值，给底部预留额外空间（与原逻辑兼容）
    int xLabelHeight = getShowXAxisValues() ? (font.pixelSize() + 8) : 0;
    if (xLabelHeight > 0) {
        // 将 barRect 的底部上移以留出 X 轴标签区域
        barRect.setBottom(barRect.bottom() - xLabelHeight);
    }

    // 如果需要显示 Y 轴数值，给左侧预留空间
    const int yLabelWidth = 46;
    const int yLabelSpacing = 8; // Y 轴标签与图表的微小间隔（固定）
    if (getShowYAxisValues()) {
        barRect.setLeft(barRect.left() + yLabelWidth + yLabelSpacing);
    }

    // ===== 图例绘制 =====
    if (getShowLegend()) {
        int y = legendRect.top();
        int lineHeight = font.pixelSize() + 6;

        for (const auto& s : m_items) {
            painter.setBrush(s.color);
            painter.setPen(Qt::NoPen);
            painter.drawRoundedRect(QRectF(legendRect.left(), y + 4, 10, 10), 2, 2);

            painter.setPen(getTextColor());
            QString text = QString("%1 (%2)").arg(s.label).arg(s.value, 0, 'f', 1);
            painter.drawText(QRectF(legendRect.left() + 16, y,
                                    legendRect.width() - 16, lineHeight),
                             Qt::AlignVCenter | Qt::AlignLeft, text);
            y += lineHeight;
        }
    }

    // ===== 数据范围计算（用于自动模式） =====
    double dataMax = -std::numeric_limits<double>::infinity();
    double dataMin =  std::numeric_limits<double>::infinity();
    for (const auto& s : m_items) {
        dataMax = qMax(dataMax, s.value);
        dataMin = qMin(dataMin, s.value);
    }
    if (dataMax == -std::numeric_limits<double>::infinity()) dataMax = 0.0;
    if (dataMin ==  std::numeric_limits<double>::infinity()) dataMin = 0.0;

    // ===== 使用用户指定刻度（当 MaxScale > MinScale 时生效），否则自动 =====
    double minValue = dataMin;
    double maxValue = dataMax;

    if (getMaxScale() > getMinScale()) {
        minValue = getMinScale();
        maxValue = getMaxScale();
    } else {
        // 如果自动情况下范围太小或相等，做保护
        if (qFuzzyCompare(maxValue, minValue) || (maxValue - minValue) < 1e-6) {
            // 优先把底部设为 0（更符合柱状图习惯），但如果 dataMin<0 则以 dataMin 为底
            if (dataMin > 0.0)
                minValue = 0.0;
            else
                minValue = dataMin;
            // 保证 maxValue > minValue
            if (maxValue <= minValue)
                maxValue = minValue + 1.0;
        }
    }

    // 保护范围
    double range = maxValue - minValue;
    if (range <= 0.0) range = 1.0;

    int count = m_items.size();
    double barWidth = qMax(1.0, (barRect.width() - spacing * (count - 1)) / (double)count);
    double t = getEnableAnimation() ? getAnimationProgress() : 1.0;

    // ===== 参考线 & Y 刻度 =====
    if (getShowReferenceLines() || getShowYAxisValues()) {
        const int yTicks = 4;
        QColor gridColor = getBorderColor();
        gridColor.setAlpha(100);
        QPen gridPen(gridColor, 1, Qt::DashLine);
        gridPen.setCapStyle(Qt::FlatCap);

        for (int i = 0; i <= yTicks; ++i) {
            double ratio = i / (double)yTicks;
            double v = minValue + range * ratio;
            double y = barRect.bottom() - barRect.height() * ( (v - minValue) / range );

            if (getShowReferenceLines()) {
                painter.setPen(gridPen);
                painter.drawLine(QPointF(barRect.left(), y), QPointF(barRect.right(), y));
            }

            if (getShowYAxisValues()) {
                painter.setPen(getTextColor());
                QRectF labelRect(barRect.left() - yLabelWidth - yLabelSpacing,
                                 y - font.pixelSize() / 2.0,
                                 yLabelWidth,
                                 font.pixelSize() + 4);
                painter.drawText(labelRect, Qt::AlignRight | Qt::AlignVCenter, QString::number(v, 'f', 1));
            }
        }
    }

    // ===== 绘制柱子 =====
    for (int i = 0; i < count; ++i) {
        double newValue = m_items[i].value;
        double oldValue = (i < m_oldItems.size()) ? m_oldItems[i].value : minValue; // old 相对 min
        double interpValue = oldValue + (newValue - oldValue) * t;

        // clamp interpValue to [minValue, maxValue]
        double clamped = qBound(minValue, interpValue, maxValue);

        double h = barRect.height() * ( (clamped - minValue) / range );
        double left = barRect.left() + i * (barWidth + spacing);
        QRectF bar(left,
                   barRect.bottom() - h,
                   barWidth,
                   h);

        painter.setBrush(m_items[i].color);
        painter.setPen(Qt::NoPen);
        painter.drawRoundedRect(bar, 4, 4);

        if (getShowValueLabel()) {
            painter.setPen(getTextColor());
            QString valueText = QString::number(interpValue, 'f', 1);
            painter.drawText(QRectF(bar.left(), bar.top() - 18, bar.width(), 16),
                             Qt::AlignCenter, valueText);
        }
    }

    // ===== X 轴标签 =====
    if (getShowXAxisValues()) {
        painter.setPen(getTextColor());
        for (int i = 0; i < count; ++i) {
            double left = barRect.left() + i * (barWidth + spacing);
            QRectF labelRect(left,
                             barRect.bottom() + 4,
                             barWidth,
                             font.pixelSize() + 4);
            painter.drawText(labelRect, Qt::AlignHCenter | Qt::AlignTop, m_items[i].label);
        }
    }
}
