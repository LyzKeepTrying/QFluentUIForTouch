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
    FluentComboBoxDelegate* delegate = new FluentComboBoxDelegate(this);
    listView->setItemDelegate(delegate);
    listView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    listView->setSelectionMode(QAbstractItemView::SingleSelection);
    setView(listView);
    updateListViewStyle();

    connect(this, &FluentComboBox::BackgroundColorChanged, this, [=](QColor color){
        updateListViewStyle();
        delegate->setBackgroundColor(color);
    });

    connect(this, &FluentComboBox::BorderColorChanged, this, [=](){
        updateListViewStyle();
    });

    connect(this, &FluentComboBox::TextColorChanged, this, [=](QColor color){
        delegate->setTextColor(color);
    });

    connect(this, &FluentComboBox::HighlightColorChanged, this, [=](QColor color){
        delegate->setHighlightColor(color);
    });

    connect(this, &FluentComboBox::FontSizeChanged, this, [=](qreal font_size){
        delegate->setFontSize(font_size);
    });

    connect(this, &FluentComboBox::RowHeightChanged, this, [=](int row_height){
        delegate->setRowHeight(row_height);
    });

    animation_ = new QPropertyAnimation(this, getAnimationProgressPropertyName(), this);
    animation_->setDuration(200);
    animation_->setEasingCurve(QEasingCurve::OutQuad);

}

FluentComboBox::~FluentComboBox()
{
}

void FluentComboBox::updateListViewStyle()
{
    setStyleSheet(
        QString("QListView {"
                "  background-color: %1;"
                "  border: 1px solid %2;"
                "  border-radius: 0;"
                "  padding: 4px 4;"
                "  outline: none;"
                "}")
            .arg(getBackgroundColor().name())
            .arg(getBorderColor().lighter().name()));
}

QSize FluentComboBox::sizeHint() const
{
    int text_width = fontMetrics().horizontalAdvance(currentText());
    return QSize(qMax(k_default_size_.width(), text_width + getArrowWidth() + 20), k_default_size_.height());
}

void FluentComboBox::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    // 绘制背景和边框
    QRect rect = this->rect().adjusted(1, 1, -1, -1);

    painter.setBrush(getBackgroundColor());
    painter.setPen(getBorderColor());
    painter.drawRoundedRect(rect, 8, 8);

    // 绘制文本
    painter.setPen(getTextColor());
    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    painter.setFont(font);
    QRect text_rect = rect.adjusted(12, 0, -getArrowWidth(), 0);
    painter.drawText(text_rect, Qt::AlignVCenter | Qt::AlignLeft, currentText());

    // 绘制下拉箭头
    painter.setPen(getArrowColor());

    // 箭头动画效果
    qreal arrow_rotation = getAnimationProgress() * 180;
    QPointF arrow_center(width() - getArrowWidth()/2, height()/2);
    painter.translate(arrow_center);
    painter.rotate(arrow_rotation);

    QPointF arrowPoints[3] = {
        QPointF(-getArrowSize(), -getArrowSize()/2),
        QPointF(0, getArrowSize()/2),
        QPointF(getArrowSize(), -getArrowSize()/2)
    };

    painter.setBrush(getArrowColor());
    painter.setPen(Qt::NoPen);
    painter.drawConvexPolygon(arrowPoints, 3);

}

void FluentComboBox::mousePressEvent(QMouseEvent* event)
{

    QComboBox::mousePressEvent(event);
}

void FluentComboBox::mouseReleaseEvent(QMouseEvent* event)
{

    QComboBox::mouseReleaseEvent(event);
}

void FluentComboBox::showPopup()
{
    // 开始箭头动画
    if (animation_) {
        animation_->stop();
        animation_->setStartValue(getAnimationProgress());
        animation_->setEndValue(1.0);
        animation_->start();
    }

    QComboBox::showPopup();
}

void FluentComboBox::hidePopup()
{
    // 开始箭头动画
    if (animation_) {
        animation_->stop();
        animation_->setStartValue(getAnimationProgress());
        animation_->setEndValue(0.0);
        animation_->start();
    }

    QComboBox::hidePopup();
}
