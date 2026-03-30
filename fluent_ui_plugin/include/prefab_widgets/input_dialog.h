#ifndef INPUT_DIALOG_H
#define INPUT_DIALOG_H

#include <QDialog>
#include <QVector>
#include <QPair>
#include <QVariant>

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif


namespace Ui {
class InputDialog;
}

class FLUENTUI_PLUGIN_EXPORT InputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InputDialog(QWidget *parent = nullptr);
    ~InputDialog();

    static bool getInputs(const QVector<QPair<QString, QString>>& inputs, QVector<QVariant>& values);

private:
    Ui::InputDialog *ui;
    QVector<QWidget*> inputWidgets;
};

#endif // INPUT_DIALOG_H
