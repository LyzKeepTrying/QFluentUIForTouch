#ifndef FLUENT_LINE_EDIT_H
#define FLUENT_LINE_EDIT_H

#include <QLineEdit>
#include <QSpinBox>

#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentLineEdit : public QLineEdit {
    Q_OBJECT

    DECLARE_PROPERTY_COLOR(FluentLineEdit, BackgroundColor, g_fluent_theme_center->getBackgroundColor())
    DECLARE_PROPERTY_COLOR(FluentLineEdit, BorderFocusOffColor, g_fluent_theme_center->getBorderColor())
    DECLARE_PROPERTY_COLOR(FluentLineEdit, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY_COLOR(FluentLineEdit, BorderFocusOnColor, g_fluent_theme_center->getOnColor())

    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY_PRIVATE(bool, ShowCursor, true)

public:
    explicit FluentLineEdit(QWidget* parent = nullptr);
    explicit FluentLineEdit(const QString& text, QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;
    QSize sizeHint() const override;

private:
    const QSize k_default_size_{72, 24};
};

#endif // FLUENT_LINE_EDIT_H
