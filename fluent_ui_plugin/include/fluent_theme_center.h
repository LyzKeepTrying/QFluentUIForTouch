#ifndef FLUENT_THEME_CENTER_H
#define FLUENT_THEME_CENTER_H

#include "define.h"

#include <QObject>
#include <QColor>
#include <QMetaObject>
#include <QFont>


namespace QFluentUI {

namespace Font {

const QFont default_text_font = QFont("SimHei");
const int default_font_size = 14;

}
}

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

#define g_fluent_theme_center FluentThemeCenter::instance()

class FLUENTUI_PLUGIN_EXPORT FluentThemeCenter : public QObject
{
    Q_OBJECT
    DECLARE_PROPERTY_THEME(QColor, BackgroundColor, Qt::white)
    DECLARE_PROPERTY_THEME(QColor, TextColor, Qt::black)
    DECLARE_PROPERTY_THEME(QColor, BorderColor, QColor(128, 128, 128, 100))
    DECLARE_PROPERTY_THEME(QColor, OnColor, QColor(0, 144, 0))
public:
    static FluentThemeCenter* instance();
    void refreshEntireApp();
private:
    FluentThemeCenter(QObject* parent = nullptr);
    ~FluentThemeCenter();
Q_SIGNALS:
    void themeChanged();
};

#endif // FLUENT_THEME_CENTER_H
