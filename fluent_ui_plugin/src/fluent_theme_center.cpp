#include "fluent_theme_center.h"

#include <QApplication>
#include <QWidget>

FluentThemeCenter* FluentThemeCenter::instance(){
    static FluentThemeCenter* fluent_theme_center = new FluentThemeCenter();
    return fluent_theme_center;
}

FluentThemeCenter::FluentThemeCenter(QObject* parent):QObject(parent)
{

}

FluentThemeCenter::~FluentThemeCenter(){

}

void FluentThemeCenter::refreshEntireApp()
{
    const auto topLevelWidgets = QApplication::topLevelWidgets();
    for (QWidget* w : topLevelWidgets) {
        if (w->isVisible()) {
            w->update(); // 标记重绘
        }
    }
}
