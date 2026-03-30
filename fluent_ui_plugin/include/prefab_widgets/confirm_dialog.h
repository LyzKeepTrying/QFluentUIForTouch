#ifndef CONFIRM_DIALOG_H
#define CONFIRM_DIALOG_H

#include <QDialog>

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif


namespace Ui {
class ConfirmDialog;
}

class FLUENTUI_PLUGIN_EXPORT ConfirmDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmDialog(QWidget *parent = nullptr);
    ~ConfirmDialog();

    static bool showConfirm(const QString& title, const QString& message);

private:
    Ui::ConfirmDialog *ui;
};

#endif // CONFIRM_DIALOG_H
