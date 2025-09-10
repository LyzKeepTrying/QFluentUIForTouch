#ifndef FLUENT_GROUP_BOX_H
#define FLUENT_GROUP_BOX_H

#include <QGroupBox>
#include <QPainter>
#include <QMouseEvent>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentGroupBox : public QGroupBox {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(int, BorderWidth, 1)
    DECLARE_PROPERTY(int, TitleMargin, 10)
    DECLARE_PROPERTY(bool, ShowTitle, true)

public:
    explicit FluentGroupBox(QWidget* parent = nullptr);
    explicit FluentGroupBox(const QString& title, QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;

};

#endif // FLUENT_GROUP_BOX_H
