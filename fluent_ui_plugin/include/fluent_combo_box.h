#ifndef FLUENT_COMBO_BOX_H
#define FLUENT_COMBO_BOX_H

#include <QComboBox>
#include <QPropertyAnimation>

#include "define.h"
#include "theme.h"

#include <QStyledItemDelegate>

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentComboBoxDelegate : public QStyledItemDelegate
{
    Q_OBJECT
    DECLARE_PROPERTY_OBJECT(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY_OBJECT(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY_OBJECT(QColor, HighlightColor, QFluentUI::ThemeColor::Light::on_color)
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
    DECLARE_PROPERTY_SIGNAL(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY_SIGNAL(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY_SIGNAL(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, ArrowColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY_SIGNAL(QColor, HighlightColor, QFluentUI::ThemeColor::Light::area_color)
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
    void enterEvent(QEvent* event) override;  // 修复参数类型
    void leaveEvent(QEvent* event) override;
    void showPopup() override;
    void hidePopup() override;

private:
    void initAnimation();
    void updateDropdownStyle();
    void drawArrow(QPainter& painter);

    constexpr static QSize k_default_size_{120, 32};
    constexpr static int k_arrow_width_{24};
    constexpr static int k_corner_radius_{8};

    bool m_mouseHover = false;
    bool m_mousePressed = false;
    QPropertyAnimation* m_animation = nullptr;
};

#endif // FLUENT_COMBO_BOX_H
