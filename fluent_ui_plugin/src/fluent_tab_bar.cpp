#include "fluent_tab_bar.h"

#include <QPainter>
#include <QPropertyAnimation>
#include <QIcon>
#include <QTimer>

FluentTabBar::FluentTabBar(QWidget* parent)
    : QTabBar(parent)
{
    setShape(QTabBar::RoundedWest);
    setIconSize(QSize(30, 30));

    // 设置动画
    QPropertyAnimation* slider_move_animation = new QPropertyAnimation(this, getCurSelectRectPosPropertyName(), this);
    slider_move_animation->setEasingCurve(QEasingCurve::InOutCubic);

    // 状态切换时更新动画
    connect(this, &QTabBar::currentChanged, this, [=](int index) {
        if (index < 0 || index >= count()) return;

        if (slider_move_animation->state() == QPropertyAnimation::Running)
            slider_move_animation->stop();

        int pos;
        if (shape() == QTabBar::RoundedWest || shape() == QTabBar::RoundedEast) {
            // 垂直方向：使用Y坐标
            pos = tabRect(index).y() + getTabMargin();
        } else {
            // 水平方向：使用X坐标
            pos = tabRect(index).x() + getTabMargin();
        }

        if(getMoveAnamination()){
            slider_move_animation->setDuration(200);
            slider_move_animation->setStartValue(getCurSelectRectPos());
            slider_move_animation->setEndValue(pos);
            slider_move_animation->start();
        } else {
            setCurSelectRectPos(pos);
        }
    });

    // 设置初始状态
    QTimer::singleShot(300, this, [=]{
        setCurrentIndex(1);
        setCurrentIndex(0);
    });
}

QSize FluentTabBar::tabSizeHint(int index) const
{
    Q_UNUSED(index);
    if (shape() == QTabBar::RoundedWest || shape() == QTabBar::RoundedEast) {
        // 垂直方向：固定宽度，高度根据内容调整
        return QSize(getTabWidth(), getTabHeight());
    } else {
        // 水平方向：固定高度，宽度根据内容调整
        return QSize(getTabWidth(), getTabHeight());
    }
}

QSize FluentTabBar::minimumTabSizeHint(int index) const
{
    return tabSizeHint(index);
}

void FluentTabBar::paintEvent(QPaintEvent* ev)
{
    Q_UNUSED(ev);

    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // 整体背景（tabBar 背景）
    QRect full_rect = rect().adjusted(1, 1, -1, -1);
    painter.setPen(getBorderColor());
    painter.setBrush(getBackgroundColor());
    painter.drawRoundedRect(full_rect, 8, 8);

    // 绘制选中指示器（单个全局指示器）
    if (count() > 0) {

        QRect slider_rect;

        int tab_width = tabSizeHint(0).width();
        int tab_height = tabSizeHint(0).height();
        int margin = getTabMargin();

        if (shape() == QTabBar::RoundedWest || shape() == QTabBar::RoundedEast) {
            // 垂直方向：指示器高度为标签高度-2*margin，宽度为整个背景宽度-2*margin
            int slider_height = tab_height - 2 * margin;
            int slider_width = full_rect.width() - 2 * margin;
            slider_rect = QRect(margin + 1, getCurSelectRectPos() + 1, slider_width, slider_height);
        } else {
            // 水平方向：指示器宽度为标签宽度-2*margin，高度为整个背景高度-2*margin
            int slider_width = tab_width - 2 * margin;
            int slider_height = full_rect.height() - 2 * margin;
            slider_rect = QRect(getCurSelectRectPos() + 1, margin + 1, slider_width, slider_height);
        }

        painter.setPen(Qt::NoPen);
        painter.setBrush(getSelectedColor());
        painter.drawRoundedRect(slider_rect, 8, 8);
    }

    // 画每个 tab 的内容
    const int tab_count = count();
    for (int i = 0; i < tab_count; ++i) {

        int tab_width = tabSizeHint(i).width();
        int tab_height = tabSizeHint(i).height();
        int margin = getTabMargin();

        QRect content_rect;

        if (shape() == QTabBar::RoundedWest || shape() == QTabBar::RoundedEast) {
            // 垂直方向：指示器高度为标签高度-2*margin，宽度为整个背景宽度-2*margin
            int content_height = tab_height - 2 * margin;
            int content_width = full_rect.width() - 2 * margin;
            content_rect = QRect(margin + 1, tabRect(i).y() + getTabMargin() + 1, content_width, content_height);
        } else {
            // 水平方向：指示器宽度为标签宽度-2*margin，高度为整个背景高度-2*margin
            int content_width = tab_width - 2 * margin;
            int content_height = full_rect.height() - 2 * margin;
            content_rect = QRect(tabRect(i).x() + getTabMargin() + 1, margin + 1, content_width, content_height);
        }

        bool selected = (currentIndex() == i);

        // 图标 + 文本布局
        int icon_size = shape() == QTabBar::RoundedSouth || shape() == QTabBar::RoundedNorth ? iconSize().height() : iconSize().width();
        int tab_spacing = getTabSpacing();

        if (shape() == QTabBar::RoundedSouth || shape() == QTabBar::RoundedNorth) {
            // 垂直方向：图标在上，文本在下（垂直排列）
            QIcon icon = tabIcon(i);
            if (!icon.isNull() && getShowIcon()) {
                // 图标在水平方向居中
                int icon_x = content_rect.center().x() - icon_size/2;
                QRect icon_rect(icon_x, content_rect.top() + tab_spacing, icon_size, icon_size);
                QPixmap pm = icon.pixmap(icon_size, icon_size);
                painter.drawPixmap(icon_rect, pm);
            }

            // 文本绘制（在图标下方）
            QFont font(QFluentUI::Font::default_text_font);
            font.setPixelSize(getFontSize());
            painter.setFont(font);
            painter.setPen(selected ? QColor::fromRgb(~getTextColor().rgb()) : getTextColor());
            QFontMetrics fm(font);

            QString text = tabText(i);
            int text_height = fm.height();
            int text_y = content_rect.top() + icon_size + 2 * tab_spacing;

            if(getShowIcon()){
                QRect text_rect(content_rect.left(), text_y, content_rect.width(), text_height);

                painter.drawText(text_rect, Qt::AlignHCenter | Qt::AlignTop,
                                 fm.elidedText(text, Qt::ElideRight, text_rect.width()));
            }
            else{
                QRect text_rect(content_rect.left(), content_rect.top(), content_rect.width(), content_rect.height());

                painter.drawText(text_rect, Qt::AlignCenter,
                                 fm.elidedText(text, Qt::ElideRight, text_rect.width()));
            }
        } else {
            // 水平方向：图标在左，文本在右（水平排列）
            QIcon icon = tabIcon(i);
            // 图标绘制
            QRect icon_rect(content_rect.left() + tab_spacing,
                            content_rect.center().y() - icon_size/2,
                            icon_size, icon_size);

            if (!icon.isNull() && getShowIcon()) {
                QPixmap pm = icon.pixmap(icon_size, icon_size);
                painter.drawPixmap(icon_rect, pm);
            }

            // 文本绘制
            QFont font(QFluentUI::Font::default_text_font);
            font.setPixelSize(getFontSize());
            painter.setFont(font);
            painter.setPen(selected ? QColor::fromRgb(~getTextColor().rgb()) : getTextColor());
            QFontMetrics fm(font);

            if(getShowIcon()){
                QRect text_rect(icon_rect.right() + tab_spacing,
                                content_rect.y(),
                                content_rect.width() - icon_rect.width() - tab_spacing * 2,
                                content_rect.height());

                painter.drawText(text_rect, Qt::AlignVCenter | Qt::AlignLeft,
                                 fm.elidedText(tabText(i), Qt::ElideRight, text_rect.width()));

            }else{
                QRect text_rect(content_rect.x(),
                                content_rect.y(),
                                content_rect.width(),
                                content_rect.height());

                painter.drawText(text_rect, Qt::AlignCenter,
                                 fm.elidedText(tabText(i), Qt::ElideRight, text_rect.width()));
            }
        }
    }
}
