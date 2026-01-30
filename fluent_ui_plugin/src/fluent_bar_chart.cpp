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
    painter.drawRoundedRect(drawRect, 10, 10);

    if (m_items.isEmpty())
        return;

    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);

    const int legendWidth = getShowLegend() ? 120 : 0;
    const int spacing = getBarSpacing();

    QRectF legendRect = drawRect.adjusted(20, 20, legendWidth - 20, -20);
    QRectF barRect = drawRect.adjusted(legendWidth + 20, 20, -20, -40);

    // 图例
    if (getShowLegend()) {
        int y = legendRect.top();
        int lineHeight = font.pixelSize() + 6;

        for (const auto& s : m_items) {
            painter.setBrush(s.color);
            painter.setPen(Qt::NoPen);
            painter.drawRoundedRect(QRectF(legendRect.left(), y + 4, 10, 10), 2, 2);

            painter.setPen(getTextColor());
            QString text = QString("%1 (%2)").arg(s.label).arg(s.value, 0, 'f', 1);
            painter.drawText(QRectF(legendRect.left() + 16, y, legendRect.width() - 16, lineHeight),
                             Qt::AlignVCenter | Qt::AlignLeft, text);

            y += lineHeight;
        }
    }

    double maxValue = 0.0;
    for (auto& s : m_items)
        maxValue = qMax(maxValue, s.value);

    int count = m_items.size();
    double barWidth = (barRect.width() - spacing * (count - 1)) / count;
    double t = getEnableAnimation() ? getAnimationProgress() : 1.0;

    for (int i = 0; i < count; ++i) {
        double newValue = m_items[i].value;
        double oldValue = (i < m_oldItems.size()) ? m_oldItems[i].value : 0.0;
        double interpValue = oldValue + (newValue - oldValue) * t;

        double h = barRect.height() * interpValue / qMax(1.0, maxValue);
        QRectF bar(barRect.left() + i * (barWidth + spacing),
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
}
