#ifndef FLUENT_COMBO_BOX_H
#define FLUENT_COMBO_BOX_H

#include <QComboBox>
#include <QPropertyAnimation>

#include "define.h"
#include "fluent_theme_center.h"

#include <QStyledItemDelegate>

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentComboBoxDelegate : public QStyledItemDelegate
{
    Q_OBJECT
    DECLARE_PROPERTY_COLOR(FluentComboBoxDelegate, BackgroundColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentComboBoxDelegate, HighlightColor, g_fluent_theme_center->getOnColor())
    DECLARE_PROPERTY_COLOR(FluentComboBoxDelegate, TextColor, g_fluent_theme_center->getTextColor())

    DECLARE_PROPERTY_OBJECT(qreal, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY_OBJECT(int, RowHeight, 32)
public:
    explicit FluentComboBoxDelegate(QObject* parent = nullptr);
    void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override;
    QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override;
};

class FLUENTUI_PLUGIN_EXPORT FluentComboBox : public QComboBox
{
    Q_OBJECT
    DECLARE_PROPERTY_COLOR(FluentComboBox, BackgroundColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentComboBox, BorderColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentComboBox, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentComboBox, ArrowColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentComboBox, HighlightColor, g_fluent_theme_center->getBackgroundColor())

    DECLARE_PROPERTY(int, ArrowWidth, 30)
    DECLARE_PROPERTY(int, ArrowSize, 6)
    DECLARE_PROPERTY_SIGNAL(qreal, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY_SIGNAL(int, RowHeight, 32)
    DECLARE_PROPERTY_PRIVATE(qreal, AnimationProgress, 0.0)

public:
    explicit FluentComboBox(QWidget * parent = nullptr);
    ~FluentComboBox();

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void showPopup() override;
    void hidePopup() override;

private:
    void updateListViewStyle();
    void drawArrow(QPainter& painter);

    const QSize k_default_size_{120, 32};

    QPropertyAnimation *animation_ = nullptr;

};

#endif // FLUENT_COMBO_BOX_H
