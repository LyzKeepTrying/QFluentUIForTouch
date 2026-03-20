#ifndef FLUENT_TEXT_H
#define FLUENT_TEXT_H

#include <QLabel>

#include "define.h"
#include "fluent_theme_center.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentText : public QLabel
{
    Q_OBJECT
    DECLARE_PROPERTY_COLOR(FluentText, TextColor, g_fluent_theme_center->getTextColor())
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

public:
    explicit FluentText(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;
    QSize sizeHint() const override;

private:
    const QSize k_default_size_{48, 24};

signals:
};

#endif // FLUENT_TEXT_H
