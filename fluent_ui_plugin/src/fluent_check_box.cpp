#include "fluent_check_box.h"

#include <QPainter>
#include <QPainterPath>
#include <QMouseEvent>

FluentCheckBox::FluentCheckBox(QWidget* parent)
    : QCheckBox(parent) {
    setCursor(Qt::PointingHandCursor);
}

FluentCheckBox::FluentCheckBox(const QString& text, QWidget* parent)
    : QCheckBox(text, parent) {
    setCursor(Qt::PointingHandCursor);
}

QSize FluentCheckBox::sizeHint() const {
    return k_default_size_;
}

void FluentCheckBox::paintEvent(QPaintEvent* event) {
    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing |
                           QPainter::TextAntialiasing);

    // 计算复选框位置（垂直居中）
    QRect check_rect = rect().adjusted(1, 1, -1, -1);
    check_rect.setSize(QSize(height() - 2, height() - 2));

    // 绘制复选框
    painter.setPen(hasFocus() ? getBorderFocusOnColor() : getBorderFocusOffColor());
    painter.setBrush(getBackgroundColor());
    painter.drawRoundedRect(check_rect, 8, 8);

    // 绘制选中状态
    if (checkState() == Qt::Checked) {
        QPainterPath path;
        path.moveTo(check_rect.x() + 8, check_rect.y() + check_rect.height() / 2.0);
        path.lineTo(check_rect.x() + check_rect.width() / 2, check_rect.y() + check_rect.height() - 8);
        path.lineTo(check_rect.x() + check_rect.width() - 8, 8);

        QPen pen(getCheckMarkColor(), 3);
        pen.setCapStyle(Qt::RoundCap);
        pen.setJoinStyle(Qt::RoundJoin);
        painter.setPen(pen);
        painter.drawPath(path);
    }

    // 绘制文本
    if (!text().isEmpty()) {
        QFont text_font = QFluentUI::Font::default_text_font;
        text_font.setPixelSize(getFontSize());
        painter.setFont(text_font);
        painter.setPen(getTextColor());

        int text_x = check_rect.width() + getTextSpacing();
        QRect text_rect(text_x, 0, width() - text_x, height());
        painter.drawText(text_rect, Qt::AlignLeft | Qt::AlignVCenter, text());
    }
}

bool FluentCheckBox::hitButton(const QPoint &pos) const {
    // 和 paintEvent 中相同的计算方式
    QRect check_rect = rect().adjusted(1, 1, -1, -1);
    check_rect.setSize(QSize(height() - 2, height() - 2));

    // 点击 check_box 本体 -> 允许
    if (check_rect.contains(pos))
        return true;

    // 其它位置不响应（你也可以直接 return rect().contains(pos);）
    return false;
}

void FluentCheckBox::mousePressEvent(QMouseEvent* event) {
    setBackgroundColor(getBackgroundColor().darker(150));
    QCheckBox::mousePressEvent(event);
}

void FluentCheckBox::mouseReleaseEvent(QMouseEvent* event) {
    setBackgroundColor(getBackgroundColor().lighter(150));
    QCheckBox::mouseReleaseEvent(event);
}
