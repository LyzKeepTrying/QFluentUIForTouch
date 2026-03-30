#include "prefab_widgets/confirm_dialog.h"
#include "ui_confirm_dialog.h"
#include <QApplication>
#include <QObject>

ConfirmDialog::ConfirmDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ConfirmDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setWindowModality(Qt::ApplicationModal);
    setAttribute(Qt::WA_TranslucentBackground);

    connect(ui->okButton, &QPushButton::clicked, this, [=]{
        accept();
    });
    connect(ui->cancelButton, &QPushButton::clicked, this, [=]{
        reject();
    });
}

ConfirmDialog::~ConfirmDialog()
{
    delete ui;
}

bool ConfirmDialog::showConfirm(const QString& title, const QString& message)
{
    QWidget* mainWindow = QApplication::activeWindow();
    if (!mainWindow) return false;

    // 创建半透明覆盖层以暗化背景，作为主窗口的子widget
    QWidget* overlay = new QWidget(mainWindow);
    overlay->setGeometry(mainWindow->rect());
    overlay->setStyleSheet("background-color: rgba(0, 0, 0, 80);");
    overlay->setAttribute(Qt::WA_TransparentForMouseEvents, false);
    overlay->show();
    overlay->raise();

    // 创建确认对话框
    ConfirmDialog dialog(mainWindow);
    dialog.ui->titleLabel->setText(title);
    dialog.ui->messageLabel->setText(message);
    dialog.raise();

    // 连接对话框关闭信号，移除覆盖层
    QObject::connect(&dialog, &QDialog::finished, overlay, &QWidget::deleteLater);

    int result = dialog.exec();
    return result == QDialog::Accepted;
}
