#ifndef FLUENT_SCROLL_AREA_H
#define FLUENT_SCROLL_AREA_H


#include <QScrollArea>
#include <QMouseEvent>
#include "fluent_scroll_bar.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentScrollArea : public QScrollArea {
    Q_OBJECT
public:
    explicit FluentScrollArea(QWidget* parent = nullptr);
    explicit FluentScrollArea(QWidget* widget, QWidget* parent);
    ~FluentScrollArea() override = default;


    QSize sizeHint() const override;


    FluentScrollBar* verticalFluentScrollBar() const { return vbar_; }
    FluentScrollBar* horizontalFluentScrollBar() const { return hbar_; }


protected:
    bool eventFilter(QObject* watched, QEvent* event) override;


private:
    void initCommon();


    FluentScrollBar* vbar_ = nullptr;
    FluentScrollBar* hbar_ = nullptr;


    // simple mouse panning state
    bool dragging_ = false;
    QPoint panStartPos_;
    QPoint scrollStartPos_;
};


#endif // FLUENT_SCROLL_AREA_H
