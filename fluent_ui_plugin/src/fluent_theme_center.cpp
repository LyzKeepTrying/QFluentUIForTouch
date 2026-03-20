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
    for (QWidget* w : QApplication::topLevelWidgets()) {
        if (!w || !w->isVisible())
            continue;

        // 维护一个控件队列，用迭代代替递归
        QList<QWidget*> stack;
        stack.append(w);

        while (!stack.isEmpty()) {
            QWidget* cur = stack.takeLast();
            cur->update(); // 标记自身重绘

            // 添加所有直接子控件
            const auto children = cur->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
            for (QWidget* child : children) {
                if (child->isVisible())
                    stack.append(child);
            }
        }
    }
}
