#include "fluent_line_chart.h"

#include <QPainter>
#include <QFontMetrics>
#include <QtMath>
#include <QPainterPath>

FluentLineChart::FluentLineChart(QWidget* parent)
    : QWidget(parent)
{
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    //setMinimumSize(k_default_size_);

    m_anim = new QPropertyAnimation(this, getAnimationProgressPropertyName(), this);
    m_anim->setDuration(500);
    m_anim->setEasingCurve(QEasingCurve::OutCubic);
}

void FluentLineChart::showEvent(QShowEvent* event)
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

void FluentLineChart::setData(const QVector<FluentLinePoint>& points)
{
    m_oldPoints = m_points;
    m_points = points;

    for (int i = 0; i < m_points.size(); ++i) {
        if (!m_points[i].color.isValid())
            m_points[i].color = autoColor(i);
    }

    if (getEnableAnimation())
        startDataAnimation();
    else
        setAnimationProgress(1.0);

    update();
}

QVector<FluentLinePoint> FluentLineChart::data() const
{
    return m_points;
}

QSize FluentLineChart::sizeHint() const
{
    return k_default_size_;
}

void FluentLineChart::startAppearAnimation()
{
    m_anim->stop();
    setAnimationProgress(0.0);
    m_anim->setStartValue(0.0);
    m_anim->setEndValue(1.0);
    m_anim->start();
}

void FluentLineChart::startDataAnimation()
{
    m_anim->stop();
    setAnimationProgress(0.0);
    m_anim->setStartValue(0.0);
    m_anim->setEndValue(1.0);
    m_anim->start();
}

QColor FluentLineChart::autoColor(int index) const
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

void FluentLineChart::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    QRectF drawRect = rect().adjusted(1, 1, -1, -1);

    painter.setBrush(getBackgroundColor());
    painter.setPen(QPen(getBorderColor(), getBorderWidth()));
    painter.drawRoundedRect(drawRect, 10, 10);

    if (m_points.isEmpty())
        return;

    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);

    const int legendWidth = getShowLegend() ? 120 : 0;
    const int spacing = getChartSpacing();

    QRectF legendRect = drawRect.adjusted(20, 20, legendWidth - 20, -20);
    QRectF chartRect  = drawRect.adjusted(legendWidth + spacing, spacing, -spacing, -spacing);

    // 左侧图例
    if (getShowLegend()) {
        int y = legendRect.top();
        int lineHeight = font.pixelSize() + 6;

        for (const auto& s : m_points) {
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

    double maxNew = 0.0, maxOld = 0.0;
    for (auto& s : m_points)    maxNew = qMax(maxNew, s.value);
    for (auto& s : m_oldPoints) maxOld = qMax(maxOld, s.value);
    double maxValue = qMax(maxNew, maxOld);

    int count = m_points.size();
    double stepX = chartRect.width() / qMax(1, count - 1);
    double t = getEnableAnimation() ? getAnimationProgress() : 1.0;

    QPainterPath path;
    QVector<QPointF> points;

    for (int i = 0; i < count; ++i) {
        double newV = m_points[i].value;
        double oldV = (i < m_oldPoints.size()) ? m_oldPoints[i].value : 0.0;
        double v = oldV + (newV - oldV) * t;

        double x = chartRect.left() + i * stepX;
        double y = chartRect.bottom() - chartRect.height() * v / qMax(1.0, maxValue);

        points << QPointF(x, y);
        if (i == 0)
            path.moveTo(x, y);
        else
            path.lineTo(x, y);
    }

    // 折线
    QPen linePen(getLineColor(), getLineWidth());
    linePen.setCapStyle(Qt::RoundCap);
    linePen.setJoinStyle(Qt::RoundJoin);
    painter.setPen(linePen);
    painter.setBrush(Qt::NoBrush);
    painter.drawPath(path);

    // 点与文字
    const double r = getPointRadius();

    for (int i = 0; i < points.size(); ++i) {
        painter.setBrush(m_points[i].color);
        painter.setPen(Qt::NoPen);
        painter.drawEllipse(points[i], r, r);

        if (getShowPointLabel()) {
            painter.setPen(getTextColor());
            QString text = QString::number(
                m_oldPoints.value(i).value +
                    (m_points[i].value - m_oldPoints.value(i).value) * t,
                'f', 1);

            painter.drawText(QRectF(points[i].x() - 20, points[i].y() - 22, 40, 16),
                             Qt::AlignCenter, text);
        }
    }
}
