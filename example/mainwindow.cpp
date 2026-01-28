#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->fluentComboBox->addItems(QStringList() << "item1" << "item2");
    ui->line_edit->setFixedHeight(1000);
    ui->fluentTabWidget->addTabWithScroll(ui->spinx_box, QIcon(":/icon/cat.png"), "Box1");
    ui->fluentTabWidget->addTabWithScroll(ui->progress_bar, QIcon(":/icon/dog.png"), "Box2");
    ui->fluentTabWidget->addTabWithScroll(ui->line_edit, QIcon(":/icon/cat.png"), "Box3");
    ui->fluentTabWidget->addTabWithScroll(ui->button, QIcon(":/icon/dog.png"), "Box4");
    ui->fluentTabWidget->addTabWithScroll(ui->table, QIcon(":/icon/cat.png"), "Box5");
    //qobject_cast<FluentTabBar*>(ui->fluentTabWidget->tabBar())->setShowIcon(false);

}
MainWindow::~MainWindow()
{
    delete ui;
}
