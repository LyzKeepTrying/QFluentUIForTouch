#include "fluent_combo_box.h"
#include <QPainter>
#include <QPainterPath>
#include <QStylePainter>
#include <QStyleOptionComboBox>
#include <QListView>
#include <QAbstractItemView>
#include <QStyledItemDelegate>
#include <QEnterEvent>  // 添加必要的头文件

FluentComboBoxDelegate::FluentComboBoxDelegate(QObject* parent) : QStyledItemDelegate(parent){

}

void FluentComboBoxDelegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    painter->setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // 绘制背景
    if (option.state & QStyle::State_Selected) {
        painter->fillRect(option.rect, getHighlightColor());
    } else if (option.state & QStyle::State_MouseOver) {
        painter->fillRect(option.rect, getHighlightColor().lighter(150));
    } else {
        painter->fillRect(option.rect, getBackgroundColor());
    }

    // 绘制文本
    painter->setPen(option.state & QStyle::State_Selected ?
                        QColor::fromRgb(~getTextColor().rgb()) :
                        getTextColor());
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter->setFont(font);

    QRect textRect = option.rect.adjusted(12, 0, -12, 0);
    painter->drawText(textRect, Qt::AlignVCenter | Qt::AlignLeft, index.data().toString());

}

QSize FluentComboBoxDelegate::sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    QSize size = QStyledItemDelegate::sizeHint(option, index);
    size.setHeight(getRowHeight());
    return size;
}

FluentComboBox::FluentComboBox(QWidget * parent) : QComboBox(parent)
{
    setCursor(Qt::PointingHandCursor);  // 恢复光标设置

    // 设置下拉列表样式
    QListView* listView = new QListView(this);
    listView->setItemDelegate(new FluentComboBoxDelegate(this));
    listView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    listView->setSelectionMode(QAbstractItemView::SingleSelection);
    setView(listView);

    initAnimation();
    updateDropdownStyle();

}

FluentComboBox::~FluentComboBox()
{
    if (m_animation) {
        m_animation->stop();
        delete m_animation;
    }
}

void FluentComboBox::initAnimation()
{
    m_animation = new QPropertyAnimation(this, getAnimationProgressPropertyName());
    m_animation->setDuration(150);
    m_animation->setEasingCurve(QEasingCurve::OutQuad);
}

void FluentComboBox::updateDropdownStyle()
{
    setStyleSheet(
        QString("QListView {"
                "  background-color: %1;"
                "  border: 1px solid %2;"
                "  border-radius: 0;"
                "  padding: 2px 2;"
                "  outline: none;"
                "}")
            .arg(getBackgroundColor().name())
            .arg(getBorderColor().lighter().name()));
}

QSize FluentComboBox::sizeHint() const
{
    int textWidth = fontMetrics().horizontalAdvance(currentText());
    return QSize(qMax(k_default_size_.width(), textWidth + k_arrow_width_ + 20), k_default_size_.height());
}

void FluentComboBox::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // 绘制背景和边框
    QRect rect = this->rect().adjusted(1, 1, -1, -1);
    QPainterPath path;
    path.addRoundedRect(rect, k_corner_radius_, k_corner_radius_);

    // 鼠标悬停/按下效果
    QColor bgColor = getBackgroundColor();
    if (m_mousePressed) {
        bgColor = bgColor.darker(110);
    } else if (m_mouseHover) {
        bgColor = bgColor.lighter(105);
    }

    painter.fillPath(path, bgColor);
    painter.setPen(getBorderColor());
    painter.drawPath(path);

    // 绘制文本
    painter.setPen(getTextColor());
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);
    QRect textRect = rect.adjusted(12, 0, -k_arrow_width_, 0);
    painter.drawText(textRect, Qt::AlignVCenter | Qt::AlignLeft, currentText());

    // 绘制下拉箭头
    painter.setPen(getArrowColor());

    // 箭头动画效果
    qreal arrowRotation = getAnimationProgress() * 180;

    painter.save();
    QPointF arrowCenter(width() - k_arrow_width_/2, height()/2);
    painter.translate(arrowCenter);
    painter.rotate(arrowRotation);

    int arrowSize = 6;
    QPointF arrowPoints[3] = {
        QPointF(-arrowSize, -arrowSize/2),
        QPointF(0, arrowSize/2),
        QPointF(arrowSize, -arrowSize/2)
    };

    painter.setBrush(getArrowColor());
    painter.setPen(Qt::NoPen);
    painter.drawConvexPolygon(arrowPoints, 3);
    painter.restore();
}

void FluentComboBox::mousePressEvent(QMouseEvent* event)
{
    m_mousePressed = true;
    update();
    QComboBox::mousePressEvent(event);
}

void FluentComboBox::mouseReleaseEvent(QMouseEvent* event)
{
    m_mousePressed = false;
    update();
    QComboBox::mouseReleaseEvent(event);
}

void FluentComboBox::enterEvent(QEvent* event)  // 修复参数类型
{
    m_mouseHover = true;
    update();
    QComboBox::enterEvent(event);
}

void FluentComboBox::leaveEvent(QEvent* event)
{
    m_mouseHover = false;
    update();
    QComboBox::leaveEvent(event);
}

void FluentComboBox::showPopup()
{
    // 开始箭头动画
    if (m_animation) {
        m_animation->stop();
        m_animation->setStartValue(getAnimationProgress());
        m_animation->setEndValue(1.0);
        m_animation->start();
    }

    // 更新下拉列表样式
    updateDropdownStyle();

    QComboBox::showPopup();
}

void FluentComboBox::hidePopup()
{
    // 开始箭头动画
    if (m_animation) {
        m_animation->stop();
        m_animation->setStartValue(getAnimationProgress());
        m_animation->setEndValue(0.0);
        m_animation->start();
    }

    QComboBox::hidePopup();
}
