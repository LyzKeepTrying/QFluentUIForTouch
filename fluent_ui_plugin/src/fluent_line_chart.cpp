#include "fluent_line_chart.h"

#include <QPainter>
#include <QFontMetrics>
#include <QtMath>
#include <QPainterPath>
#include <limits>

FluentLineChart::FluentLineChart(QWidget* parent)
    : QWidget(parent)
{
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    m_anim = new QPropertyAnimation(this, getAnimationProgressPropertyName(), this);
    m_anim->setDuration(500);
    m_anim->setEasingCurve(QEasingCurve::OutCubic);

    QVector<FluentLinePoint> data2;
    data2.push_back({"样本1", 0.1, QColor()});
    data2.push_back({"样本2", 0.7, QColor()});
    data2.push_back({"样本3", 0.4, QColor()});
    data2.push_back({"样本1", 0.1, QColor()});
    data2.push_back({"样本2", 0.5, QColor()});
    data2.push_back({"样本3", 0.4, QColor()});
    data2.push_back({"样本1", 0.1, QColor()});
    data2.push_back({"样本2", 0.2, QColor()});
    setData(data2);
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

    // 重置交互状态（保留显示或不保留按需，这里保留当前显示）
    // m_showCursor = false; // 如果希望每次数据更新都隐藏，可解除注释

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

int FluentLineChart::indexForPos(const QPoint& pos) const
{
    if (m_screenPoints.isEmpty())
        return -1;

    // 找到水平方向上距离鼠标最近的点
    int best = -1;
    qreal bestDist = std::numeric_limits<qreal>::infinity();
    for (int i = 0; i < m_screenPoints.size(); ++i) {
        qreal dx = qAbs(pos.x() - m_screenPoints[i].x());
        if (dx < bestDist) {
            bestDist = dx;
            best = i;
        }
    }
    return best;
}

void FluentLineChart::mousePressEvent(QMouseEvent* event)
{
    if (m_points.isEmpty()) {
        QWidget::mousePressEvent(event);
        return;
    }

    m_pressed = true;
    int idx = indexForPos(event->pos());
    if (idx >= 0 && idx < m_points.size()) {
        m_activeIndex = idx;
        m_showCursor = true;
        update();
    }

    QWidget::mousePressEvent(event);
}

void FluentLineChart::mouseMoveEvent(QMouseEvent* event)
{
    if (!m_points.isEmpty() && m_pressed) {
        int idx = indexForPos(event->pos());
        if (idx >= 0 && idx < m_points.size() && idx != m_activeIndex) {
            m_activeIndex = idx;
            m_showCursor = true;
            update();
        }
    }

    QWidget::mouseMoveEvent(event);
}

void FluentLineChart::mouseReleaseEvent(QMouseEvent* event)
{
    m_pressed = false;
    // 保持显示（如果需要点击释放后隐藏，可在此处设置 m_showCursor = false）
    QWidget::mouseReleaseEvent(event);
}

void FluentLineChart::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    QRectF drawRect = rect().adjusted(1, 1, -1, -1);

    painter.setBrush(getBackgroundColor());
    painter.setPen(QPen(getBorderColor(), getBorderWidth()));
    painter.drawRoundedRect(drawRect, 8, 8);
    drawRect.adjust(getMargin(), getMargin(), -getMargin(), -getMargin());

    if (m_points.isEmpty())
        return;

    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);

    const int legendWidth = getShowLegend() ? 120 : 0;

    // ===== 与 FluentBarChart 完全一致的边距策略 =====
    const int leftMargin = 20;
    const int topMargin = 20;
    const int rightMargin = 20;
    int bottomMargin = 40;

    QRectF legendRect = drawRect.adjusted(leftMargin, topMargin,
                                          legendWidth - rightMargin, -topMargin);

    QRectF chartRect = drawRect.adjusted(legendWidth + leftMargin,
                                         topMargin,
                                         -rightMargin,
                                         -bottomMargin);

    // X轴标签预留
    int xLabelHeight = getShowXAxisValues() ? (font.pixelSize() + 8) : 0;
    if (xLabelHeight > 0)
        chartRect.setBottom(chartRect.bottom() - xLabelHeight);

    // Y轴标签预留
    const int yLabelWidth = 46;
    const int yLabelSpacing = 8;
    if (getShowYAxisValues())
        chartRect.setLeft(chartRect.left() + yLabelWidth + yLabelSpacing);

    // ===== 图例 =====
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

    // ===== 计算 min/max （自动模式用） =====
    double dataMaxNew = -std::numeric_limits<double>::infinity();
    double dataMinNew =  std::numeric_limits<double>::infinity();
    for (const auto& s : m_points) {
        dataMaxNew = qMax(dataMaxNew, s.value);
        dataMinNew = qMin(dataMinNew, s.value);
    }
    // 考虑旧数据（动画过渡）以防动画突变
    double dataMaxOld = -std::numeric_limits<double>::infinity();
    double dataMinOld =  std::numeric_limits<double>::infinity();
    for (const auto& s : m_oldPoints) {
        dataMaxOld = qMax(dataMaxOld, s.value);
        dataMinOld = qMin(dataMinOld, s.value);
    }
    if (dataMaxNew == -std::numeric_limits<double>::infinity()) dataMaxNew = 0.0;
    if (dataMinNew ==  std::numeric_limits<double>::infinity()) dataMinNew = 0.0;
    if (dataMaxOld == -std::numeric_limits<double>::infinity()) dataMaxOld = dataMaxNew;
    if (dataMinOld ==  std::numeric_limits<double>::infinity()) dataMinOld = dataMinNew;

    double autoMin = qMin(dataMinNew, dataMinOld);
    double autoMax = qMax(dataMaxNew, dataMaxOld);

    // ===== 使用用户指定刻度（当 MaxScale > MinScale 时生效），否则自动计算 =====
    double minValue = autoMin;
    double maxValue = autoMax;

    if (getMaxScale() > getMinScale()) {
        minValue = getMinScale();
        maxValue = getMaxScale();
    } else {
        // 自动模式保护：当范围极小或相等时，保证合理范围
        if (qFuzzyCompare(maxValue, minValue) || (maxValue - minValue) < 1e-6) {
            if (autoMin > 0.0)
                minValue = 0.0;
            else
                minValue = autoMin;
            maxValue = qMax(maxValue, minValue + 1.0);
        }
    }

    // 保护范围
    double range = maxValue - minValue;
    if (range <= 0.0) range = 1.0;

    int count = m_points.size();
    double stepX = chartRect.width() / qMax(1, count - 1);
    double t = getEnableAnimation() ? getAnimationProgress() : 1.0;

    // ============================================================
    // ReferenceLines：按 chartRect 等分，始终占满（不随 max/min 压缩）
    // Y 轴文字按 minValue..maxValue 映射
    // ============================================================
    if (getShowReferenceLines() || getShowYAxisValues()) {
        const int yTicks = 4;

        QColor gridColor = getBorderColor();
        gridColor.setAlpha(100);
        QPen gridPen(gridColor, 1, Qt::DashLine);
        gridPen.setCapStyle(Qt::FlatCap);

        for (int i = 0; i <= yTicks; ++i) {
            double ratio = i / static_cast<double>(yTicks);
            double y = chartRect.bottom() - chartRect.height() * ratio;

            if (getShowReferenceLines()) {
                painter.setPen(gridPen);
                painter.drawLine(QPointF(chartRect.left(), y), QPointF(chartRect.right(), y));
            }

            if (getShowYAxisValues()) {
                double v = minValue + range * ratio;
                painter.setPen(getTextColor());
                QRectF labelRect(chartRect.left() - yLabelWidth - yLabelSpacing,
                                 y - font.pixelSize() / 2.0,
                                 yLabelWidth,
                                 font.pixelSize() + 4);
                painter.drawText(labelRect, Qt::AlignRight | Qt::AlignVCenter, QString::number(v, 'f', 1));
            }
        }
    }

    // ===== 构建折线路径（数据按 min..max 映射） =====
    QPainterPath path;
    QVector<QPointF> points;
    points.reserve(count);

    for (int i = 0; i < count; ++i) {
        double newV = m_points[i].value;
        double oldV = (i < m_oldPoints.size()) ? m_oldPoints[i].value : minValue;
        double v = oldV + (newV - oldV) * t;

        // 将 v 映射到 [minValue, maxValue] 再计算 y
        double ratio = (v - minValue) / range;
        // clamp ratio
        if (ratio < 0.0) ratio = 0.0;
        if (ratio > 1.0) ratio = 1.0;

        double x = chartRect.left() + i * stepX;
        double y = chartRect.bottom() - chartRect.height() * ratio;

        points << QPointF(x, y);

        if (i == 0)
            path.moveTo(x, y);
        else
            path.lineTo(x, y);
    }

    // 保存屏幕点位置，供鼠标事件使用
    m_screenPoints = points;

    // 绘制折线
    QPen linePen(getLineColor(), getLineWidth());
    linePen.setCapStyle(Qt::RoundCap);
    linePen.setJoinStyle(Qt::RoundJoin);
    painter.setPen(linePen);
    painter.setBrush(Qt::NoBrush);
    painter.drawPath(path);

    // 点与标签
    const double r = getPointRadius();
    for (int i = 0; i < points.size(); ++i) {
        painter.setBrush(m_points[i].color);
        painter.setPen(Qt::NoPen);
        painter.drawEllipse(points[i], r, r);

        if (getShowPointLabel()) {
            painter.setPen(getTextColor());
            double displayV = m_oldPoints.value(i).value +
                              (m_points[i].value - m_oldPoints.value(i).value) * t;
            painter.drawText(QRectF(points[i].x() - 20, points[i].y() - 22, 40, 16),
                             Qt::AlignCenter, QString::number(displayV, 'f', 1));
        }
    }

    // X轴标签
    if (getShowXAxisValues()) {
        painter.setPen(getTextColor());
        for (int i = 0; i < points.size(); ++i) {
            QRectF labelRect(points[i].x() - stepX * 0.5 + 2,
                             chartRect.bottom() + 4,
                             stepX,
                             font.pixelSize() + 4);
            painter.drawText(labelRect, Qt::AlignHCenter | Qt::AlignTop, m_points[i].label);
        }
    }

    // =========================
    // 绘制交互时的垂直参考线与数值（吸附到最近点）
    // =========================
    if (m_showCursor && m_activeIndex >= 0 && m_activeIndex < m_screenPoints.size()) {
        QPointF pt = m_screenPoints[m_activeIndex];

        // 垂直虚线
        QPen vPen(getBorderColor(), 1, Qt::DashLine);
        vPen.setCapStyle(Qt::FlatCap);
        painter.setPen(vPen);
        painter.drawLine(QPointF(pt.x(), chartRect.top()), QPointF(pt.x(), chartRect.bottom()));

        // 高亮点（外圈）
        painter.setPen(QPen(Qt::NoPen));
        painter.setBrush(Qt::white);
        painter.drawEllipse(pt, r + 2.0, r + 2.0);
        painter.setBrush(m_points[m_activeIndex].color);
        painter.drawEllipse(pt, r, r);

        // 显示 Y 值的标签（只显示纵坐标对应数值）
        double displayV = m_oldPoints.value(m_activeIndex).value +
                          (m_points[m_activeIndex].value - m_oldPoints.value(m_activeIndex).value) * t;
        QString txt = QString::number(displayV, 'f', 2);

        QFontMetrics fm(font);
        int txtW = fm.horizontalAdvance(txt) + 12;
        int txtH = fm.height() + 8;

        // 放在点上方（若空间不足则放在点下方）
        QRectF textRect(pt.x() - txtW / 2.0, pt.y() - txtH - 8, txtW, txtH);
        if (textRect.top() < chartRect.top()) {
            textRect.moveTop(pt.y() + 8);
        }
        // 保证不超出 chartRect 左右边界
        if (textRect.left() < chartRect.left())
            textRect.moveLeft(chartRect.left() + 4);
        if (textRect.right() > chartRect.right())
            textRect.moveRight(chartRect.right() - 4);

        // 背景和边框
        painter.setPen(QPen(getBorderColor(), 1));
        painter.setBrush(getBackgroundColor());
        painter.drawRoundedRect(textRect, 4, 4);

        // 文本
        painter.setPen(getTextColor());
        painter.drawText(textRect, Qt::AlignCenter, txt);
    }
}
