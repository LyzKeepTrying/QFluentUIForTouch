#include "fluent_pie_chart.h"

#include <QPainter>
#include <QFontMetrics>
#include <QtMath>

FluentPieChart::FluentPieChart(QWidget* parent)
    : QWidget(parent)
{
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    //setMinimumSize(k_default_size_);

    m_anim = new QPropertyAnimation(this, getAnimationProgressPropertyName(), this);
    m_anim->setDuration(500);
    m_anim->setEasingCurve(QEasingCurve::OutCubic);
}

void FluentPieChart::showEvent(QShowEvent* event)
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

void FluentPieChart::setData(const QVector<FluentPieSlice>& slices)
{
    m_oldSlices = m_slices;
    m_slices = slices;

    for (int i = 0; i < m_slices.size(); ++i) {
        if (!m_slices[i].color.isValid())
            m_slices[i].color = autoColor(i);
    }

    if (getEnableAnimation())
        startDataAnimation();
    else
        setAnimationProgress(1.0);

    update();
}

QVector<FluentPieSlice> FluentPieChart::data() const
{
    return m_slices;
}

QSize FluentPieChart::sizeHint() const
{
    return k_default_size_;
}

void FluentPieChart::startAppearAnimation()
{
    m_anim->stop();
    setAnimationProgress(0.0);
    m_anim->setStartValue(0.0);
    m_anim->setEndValue(1.0);
    m_anim->start();
}

void FluentPieChart::startDataAnimation()
{
    m_anim->stop();
    setAnimationProgress(0.0);
    m_anim->setStartValue(0.0);
    m_anim->setEndValue(1.0);
    m_anim->start();
}

QColor FluentPieChart::autoColor(int index) const
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

void FluentPieChart::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    QRectF drawRect = rect().adjusted(1, 1, -1, -1);

    painter.setBrush(getBackgroundColor());
    painter.setPen(QPen(getBorderColor(), getBorderWidth()));
    painter.drawRoundedRect(drawRect, 10, 10);

    if (m_slices.isEmpty())
        return;

    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);

    const int legendWidth = getShowLegend() ? 120 : 0;
    const int spacing = getPieSpacing();

    QRectF legendRect = drawRect.adjusted(20, 20, legendWidth - 20, -20);
    QRectF pieRect = drawRect.adjusted(legendWidth + spacing, spacing, -spacing, -spacing);

    // 绘制左侧图例
    if (getShowLegend()) {
        int y = legendRect.top();
        int lineHeight = font.pixelSize() + 6;

        for (const auto& s : m_slices) {
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

    QPointF center = pieRect.center();
    double radius = pieRect.width() / 2.0;

    double totalNew = 0.0, totalOld = 0.0;
    for (auto& s : m_slices)    totalNew += s.value;
    for (auto& s : m_oldSlices) totalOld += s.value;

    double t = getEnableAnimation() ? getAnimationProgress() : 1.0;
    double startAngle = 90.0;

    for (int i = 0; i < m_slices.size(); ++i) {
        double newValue = m_slices[i].value;
        double oldValue = (i < m_oldSlices.size()) ? m_oldSlices[i].value : 0.0;

        double interpValue = oldValue + (newValue - oldValue) * t;
        double span = 360.0 * interpValue / qMax(totalNew, totalOld);

        painter.setBrush(m_slices[i].color);

        QPen borderPen(getBorderColor());
        borderPen.setWidthF(2.0);
        painter.setPen(borderPen);

        painter.drawPie(pieRect,
                        int(startAngle * 16),
                        int(-span * 16));

        // 扇形内文字
        if (getShowInnerLabel()) {
            double midAngle = qDegreesToRadians(startAngle - span / 2.0);
            QPointF textPos = center +
                              QPointF(qCos(midAngle), -qSin(midAngle)) * (radius * 0.6);

            QColor invertedColor = QColor(~getTextColor().rgb() | (getTextColor().alpha() << 24));
            painter.setPen(invertedColor);
            QString text = QString("%1\n%2")
                               .arg(m_slices[i].label)
                               .arg(interpValue, 0, 'f', 1);

            QRectF textRect(textPos.x() - 40, textPos.y() - 20, 80, 40);
            painter.drawText(textRect, Qt::AlignCenter, text);
        }

        startAngle -= span;
    }
}
