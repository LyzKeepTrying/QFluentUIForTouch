#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->fluentComboBox->addItems(QStringList() << "item1" << "item2");

}

MainWindow::~MainWindow()
{
    delete ui;
}
