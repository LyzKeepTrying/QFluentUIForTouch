// fluent_page_plugin.h
#pragma once

#include <QObject>
#include <QWidget>
#include "fluent_ui_interface.h"

// ------------------- 插件接口 -------------------
class FluentPagePlugin
{
public:
    virtual ~FluentPagePlugin() {}

    // 页面唯一 ID
    virtual QString pageId() const = 0;
    // 页面名称（菜单/Tab 显示用）
    virtual QString pageName() const = 0;
    // 页面图标
    virtual QIcon pageIcon() const;
    // 创建页面 Widget
    virtual QWidget* createWidget(QWidget* parent = nullptr) = 0;

    // 显示前调用（可选）
    virtual inline void preShow(){}
    // 显示后调用（可选）
    virtual inline void endShow(){}
    // 切换页面前调用（可选）
    virtual inline void preClose(){}
    // 切换页面后调用（可选）
    virtual inline void endClose(){}

    // 初始化，注入页面提供的操作接口
    inline void initialize(FluentUiInterface* fluent_ui_interface){
        fluent_ui_interface_ = fluent_ui_interface;
    }

private:
    FluentUiInterface* fluent_ui_interface_ = nullptr;
};
// Qt 插件宏
#define FluentPagePlugin_iid "com.zkgd.ui.FluentPagePlugin"
Q_DECLARE_INTERFACE(FluentPagePlugin, FluentPagePlugin_iid)

class FluentPageCollectionPlugin
{
    virtual QList<FluentPagePlugin*> createWidgets(QWidget* parent = nullptr) = 0;
};
// Qt 插件宏
#define FluentPageCollectionPlugin_iid "com.zkgd.ui.FluentPageCollectionPlugin"
Q_DECLARE_INTERFACE(FluentPageCollectionPlugin, FluentPageCollectionPlugin_iid)
