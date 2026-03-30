#ifndef PROGRESS_WIDGET_H
#define PROGRESS_WIDGET_H

#include <QDialog>
#include <functional>

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif


namespace Ui {
class ProgressWidget;
}

class FLUENTUI_PLUGIN_EXPORT ProgressWidget : public QDialog
{
    Q_OBJECT

public:
    explicit ProgressWidget(QWidget *parent = nullptr);
    ~ProgressWidget();

    static void showProgress(const QString& title, const QString& subtitle, int duration_ms, bool is_loop);
    static void showProgress(const QString& title, const QString& subtitle, std::function<bool()> check_is_over, int check_interval_ms, int timeout_ms);

private:
    Ui::ProgressWidget *ui;
};

#endif // PROGRESS_WIDGET_H
