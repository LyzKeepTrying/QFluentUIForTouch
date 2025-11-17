#include "fluent_title_bar.h"

#include <QDateTime>
#include <QDebug>
#include <QPainter>

FluentTitleBar::FluentTitleBar(QWidget* parent)
    : QWidget(parent)
{
    // 启动日期时间更新定时器
    QTimer* date_timer = new QTimer(this);
    connect(date_timer, &QTimer::timeout, this, [=]{
        setTimeText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    });
    date_timer->start(1000); // 每秒更新一次

}

FluentTitleBar::~FluentTitleBar()
{
}


void FluentTitleBar::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing |
                           QPainter::TextAntialiasing |
                           QPainter::SmoothPixmapTransform);

    // 绘制区域与圆角
    const qreal radius = 8.0;
    const QRectF r = rect().adjusted(-10, -10, +10, -1);

    // 基础颜色（来自你现有主题）
    QColor base = getBackgroundColor();

    // 调色辅助（不用改命名）
    auto makeBrighter = [](const QColor &c, int v)->QColor{
        return c.lighter(100 + v);
    };
    auto makeDarker = [](const QColor &c, int v)->QColor{
        return c.darker(100 + v);
    };

    // ---------- 主体：左右暗中间亮的线性渐变，模拟圆柱体横截面受光 ----------
    QLinearGradient g(r.topLeft(), r.topRight());
    g.setColorAt(0.0, makeDarker(base, 5));   // 左侧暗
    g.setColorAt(0.25, base);
    g.setColorAt(0.5, makeBrighter(base, 3)); // 中央略亮（柔和高光）
    g.setColorAt(0.75, base);
    g.setColorAt(1.0, makeDarker(base, 5));   // 右侧暗
    painter.setPen(Qt::NoPen);
    painter.setBrush(QBrush(g));
    painter.drawRoundedRect(r, radius, radius);

    // ---------- 径向柔和高光：偏上方，增加曲面感（透明较弱，贴合 Fluent 低对比） ----------
    QPointF radialCenter(r.center().x(), r.center().y() - r.height() * 0.18);
    qreal radialRadius = r.width() * 0.9;
    QRadialGradient rg(radialCenter, radialRadius);
    QColor high = QColor(255,255,255,110); // 低对比高光
    rg.setColorAt(0.0, high);
    rg.setColorAt(0.25, QColor(255,255,255,55));
    rg.setColorAt(0.6, QColor(255,255,255,10));
    rg.setColorAt(1.0, QColor(255,255,255,0));
    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    painter.setBrush(QBrush(rg));
    painter.setPen(Qt::NoPen);
    painter.drawRoundedRect(r, radius, radius);

    // ---------- 顶部细高光条（更显质感） ----------
    QRectF topBar(r.left() + 4, r.top() + 2, r.width() - 8, std::max(3.0, r.height() * 0.14));
    QLinearGradient topG(topBar.topLeft(), topBar.bottomLeft());
    // 顶部高光透明度要低，符合 Fluent 的柔和风格
    topG.setColorAt(0.0, QColor(255,255,255,200));
    topG.setColorAt(1.0, QColor(255,255,255,30));
    painter.setBrush(topG);
    painter.setPen(Qt::NoPen);
    painter.drawRoundedRect(topBar, radius/2.0, radius/2.0);

    // ---------- 底部细阴影，增加边界感 ----------
    QColor bottomShadow(0,0,0,36);
    painter.setPen(QPen(bottomShadow, 1.0));
    painter.drawLine(QPointF(r.left() + radius*0.5, r.bottom() - 1.0),
                     QPointF(r.right() - radius*0.5, r.bottom() - 1.0));

    // ---------- 绘制左侧时间与中间标题（严格沿用你现有的命名与逻辑） ----------
    // 左侧绘制时间（与原逻辑一致）
    if (getShowDateTime()) {
        QFont font(QFluentUI::Font::default_text_font);
        font.setPixelSize(getTimeFontSize());
        painter.setFont(font);
        painter.setPen(getTextColor());
        painter.setBrush(Qt::NoBrush);

        QFontMetrics fm(font);
        QRect left_area(8, 0, width(), height());
        QString elided = fm.elidedText(getTimeText(), Qt::ElideRight, left_area.width());
        painter.drawText(left_area, Qt::AlignVCenter | Qt::AlignLeft, elided);
    }

    // 中间绘制标题（与原逻辑一致）
    if (getShowTitle()) {
        QFont font(QFluentUI::Font::default_text_font);
        font.setPixelSize(getTitleFontSize());
        painter.setFont(font);
        painter.setPen(getTextColor());
        painter.setBrush(Qt::NoBrush);

        QFontMetrics fm(font);
        QRect mid_area(0, 0, width(), height());
        QString elided = fm.elidedText(getTitle(), Qt::ElideRight, mid_area.width());
        painter.drawText(mid_area, Qt::AlignCenter, elided);
    }

    QWidget::paintEvent(event);
}



void FluentTitleBar::resizeEvent(QResizeEvent* event)
{
    QWidget::resizeEvent(event);
}
