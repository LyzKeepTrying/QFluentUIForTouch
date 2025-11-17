#ifndef FLUENT_TITLE_BAR_H
#define FLUENT_TITLE_BAR_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTimer>
#include <QPropertyAnimation>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class Q_DECL_EXPORT FluentTitleBar : public QWidget {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color.darker(104))
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(int, TimeFontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(int, TitleFontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(bool, ShowTitle, true)
    DECLARE_PROPERTY(QString, Title, "null")
    DECLARE_PROPERTY(bool, ShowDateTime, true)
    DECLARE_PROPERTY_PRIVATE(QString, TimeText, "null")

public:
    explicit FluentTitleBar(QWidget* parent = nullptr);
    ~FluentTitleBar();

protected:
    void paintEvent(QPaintEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;
};

#endif // FLUENT_TITLE_BAR_H
