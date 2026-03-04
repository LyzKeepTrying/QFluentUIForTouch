#ifndef FLUENT_UI_INTERFACE_H
#define FLUENT_UI_INTERFACE_H

#include <QObject>
#include <QString>
#include <QVariant>

#include "fluent_message_bar.h"

// ---------------- FluentUiInterface ----------------

class FluentUiInterface
{
public:
    virtual ~FluentUiInterface() {}

    // 导航相关
    virtual void switchPage(const QString& page_id) = 0;
    virtual void goToSubPage() = 0;
    virtual void goToMainPage() = 0;
    virtual void backToLastPage() = 0;

    // 页面显示相关
    virtual void hideSelf() = 0;
    virtual void showSelf() = 0;

    // 弹窗相关
    virtual void showMessage(const QString& Title, const QString& body, uint32_t ms_time) = 0;
    virtual bool getYesOrNo(const QString& Title, const QString& body) = 0;
    virtual void showCornerMessage(FluentMessageBar::MessageType message_type, FluentMessageBar::Position pos, const QString& text, uint32_t ms_time) = 0;
};

#define FluentUiInterface_iid "com.zkgd.ui.FluentUiInterface"
Q_DECLARE_INTERFACE(FluentUiInterface, FluentUiInterface_iid)

#endif // FLUENT_UI_INTERFACE_H
