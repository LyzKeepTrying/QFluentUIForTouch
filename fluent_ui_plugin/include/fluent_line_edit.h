#ifndef FLUENT_LINE_EDIT_H
#define FLUENT_LINE_EDIT_H

#include <QLineEdit>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentLineEdit : public QLineEdit {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, FocusColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

public:
    explicit FluentLineEdit(QWidget* parent = nullptr);
    explicit FluentLineEdit(const QString& text, QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;
    QSize sizeHint() const override;
    void focusInEvent(QFocusEvent* event) override;
    void focusOutEvent(QFocusEvent* event) override;

private:
    constexpr static QSize k_default_size{72, 24};
};

#endif // FLUENT_LINE_EDIT_H
