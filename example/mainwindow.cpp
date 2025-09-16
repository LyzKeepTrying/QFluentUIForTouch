#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->fluentComboBox->addItems(QStringList() << "item1" << "item2");
    ui->fluentTabWidget->addTab(ui->spinx_box, QIcon(":/icon/cat.png"), "Box1");
    ui->fluentTabWidget->addTab(ui->progress_bar, QIcon(":/icon/dog.png"), "Box2");
    ui->fluentTabWidget->addTab(ui->line_edit, QIcon(":/icon/cat.png"), "Box3");
    ui->fluentTabWidget->addTab(ui->button, QIcon(":/icon/dog.png"), "Box4");
}

MainWindow::~MainWindow()
{
    delete ui;
}
