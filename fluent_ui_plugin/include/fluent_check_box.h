#ifndef FLUENT_CHECK_BOX_H
#define FLUENT_CHECK_BOX_H

#include <QCheckBox>
#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentCheckBox : public QCheckBox {
    Q_OBJECT
    DECLARE_PROPERTY_COLOR(FluentCheckBox, BackgroundColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentCheckBox, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentCheckBox, BorderFocusOnColor, g_fluent_theme_center->getOnColor())
    DECLARE_PROPERTY_COLOR(FluentCheckBox, BorderFocusOffColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentCheckBox, CheckMarkColor, g_fluent_theme_center->getOnColor())

    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(int, TextSpacing, 8)

public:
    explicit FluentCheckBox(QWidget* parent = nullptr);
    explicit FluentCheckBox(const QString& text, QWidget* parent = nullptr);

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    bool hitButton(const QPoint &pos) const override;

private:
    const QSize k_default_size_{120, 24};
};

#endif // FLUENT_CHECK_BOX_H
