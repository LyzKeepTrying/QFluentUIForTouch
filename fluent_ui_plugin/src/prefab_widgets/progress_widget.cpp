#include "prefab_widgets/progress_widget.h"
#include "ui_progress_widget.h"
#include <QTimer>
#include <QApplication>
#include <QObject>
#include <QDesktopWidget>

ProgressWidget::ProgressWidget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ProgressWidget)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setWindowModality(Qt::ApplicationModal);
    setAttribute(Qt::WA_TranslucentBackground); // 设置背景透明
}

ProgressWidget::~ProgressWidget()
{
    delete ui;
}

void ProgressWidget::showProgress(const QString& title, const QString& subtitle, int duration_ms, bool is_loop)
{
    QWidget* mainWindow = QApplication::activeWindow();
    if (!mainWindow) return;

    // 创建半透明覆盖层以暗化背景，作为主窗口的子widget
    QWidget* overlay = new QWidget(mainWindow);
    overlay->setGeometry(mainWindow->rect());
    overlay->setStyleSheet("background-color: rgba(0, 0, 0, 80);");
    overlay->setAttribute(Qt::WA_TransparentForMouseEvents, false);
    overlay->show();
    overlay->raise(); // 确保覆盖层在底部

    // 创建进度对话框
    ProgressWidget widget(mainWindow);
    widget.ui->fluentText->setText(title);
    widget.ui->fluentText_2->setText(subtitle);
    widget.raise(); // 确保对话框在最前面

    // 如果非循环显示，则绑定定时器进度条
    if(!is_loop){
        widget.ui->fluentProgressBar->setIsLoop(false);
        widget.ui->fluentProgressBar->setMinimum(0);
        widget.ui->fluentProgressBar->setMaximum(100);
        widget.ui->fluentProgressBar->setValue(0);
        QTimer *timer = new QTimer(&widget);
        connect(timer, &QTimer::timeout, &widget, [&widget]{
            widget.ui->fluentProgressBar->setValue(widget.ui->fluentProgressBar->value() + 10);
        });
        timer->start(std::max(200, (duration_ms - 1000)) / 10.0);
    }

    // 连接对话框关闭信号，移除覆盖层
    QObject::connect(&widget, &QDialog::finished, overlay, &QWidget::deleteLater);

    // 定时关闭对话框
    QTimer::singleShot(duration_ms, &widget, &QDialog::accept);
    widget.exec();
}

void ProgressWidget::showProgress(const QString& title, const QString& subtitle, std::function<bool()> check_is_over, int check_interval_ms, int timeout_ms){
    QWidget* mainWindow = QApplication::activeWindow();
    if (!mainWindow) return;

    // 创建半透明覆盖层以暗化背景，作为主窗口的子widget
    QWidget* overlay = new QWidget(mainWindow);
    overlay->setGeometry(mainWindow->rect());
    overlay->setStyleSheet("background-color: rgba(0, 0, 0, 80);");
    overlay->setAttribute(Qt::WA_TransparentForMouseEvents, false);
    overlay->show();
    overlay->raise(); // 确保覆盖层在底部

    // 创建进度对话框
    ProgressWidget widget(mainWindow);
    widget.ui->fluentText->setText(title);
    widget.ui->fluentText_2->setText(subtitle);
    widget.raise(); // 确保对话框在最前面

    // 如果非循环显示，则绑定定时器进度条
    if(!check_is_over){
        QTimer *timer = new QTimer(&widget);
        connect(timer, &QTimer::timeout, &widget, [&widget, &check_is_over]{
            if(check_is_over()){
                widget.accept();
            }
        });
        timer->start(std::max(100, check_interval_ms));
    }

    // 连接对话框关闭信号，移除覆盖层
    QObject::connect(&widget, &QDialog::finished, overlay, &QWidget::deleteLater);

    // 定时关闭对话框
    QTimer::singleShot(timeout_ms, &widget, &QDialog::accept);
    widget.exec();
}
