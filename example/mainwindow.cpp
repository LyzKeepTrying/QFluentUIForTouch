#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->table->setFixedHeight(1000);
    ui->fluentTabWidget->addTabWithScroll(ui->table, QIcon(":/icon/dog.png"), "表格");


    QVector<FluentPieSlice> data;
    data.push_back({"样本1", 0.1, QColor()});
    data.push_back({"样本2", 0.6, QColor()});
    data.push_back({"样本3", 0.3, QColor()});
    ui->fluentPieChart->setData(data);
    QVector<FluentBarItem> data1;
    data1.push_back({"样本1", 0.1, QColor()});
    data1.push_back({"样本2", 0.7, QColor()});
    data1.push_back({"样本3", 0.4, QColor()});
    data1.push_back({"样本1", 0.1, QColor()});
    data1.push_back({"样本2", 0.3, QColor()});
    data1.push_back({"样本3", 0.4, QColor()});
    data1.push_back({"样本1", 0.8, QColor()});
    ui->fluentBarChart->setData(data1);
    QVector<FluentLinePoint> data2;
    data2.push_back({"样本1", 0.1, QColor()});
    data2.push_back({"样本2", 0.7, QColor()});
    data2.push_back({"样本3", 0.4, QColor()});
    data2.push_back({"样本1", 0.1, QColor()});
    data2.push_back({"样本2", 0.5, QColor()});
    data2.push_back({"样本3", 0.4, QColor()});
    data2.push_back({"样本1", 0.1, QColor()});
    data2.push_back({"样本2", 0.2, QColor()});
    ui->fluentLineChart->setData(data2);

    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=]{
        QVector<FluentPieSlice> data = ui->fluentPieChart->data();
        std::reverse(data.begin(), data.end());
        ui->fluentPieChart->setData(data);
        QVector<FluentBarItem> data1 = ui->fluentBarChart->data();
        std::reverse(data1.begin(), data1.end());
        ui->fluentBarChart->setData(data1);
        QVector<FluentLinePoint> data2 = ui->fluentLineChart->data();
        std::reverse(data2.begin(), data2.end());
        ui->fluentLineChart->setData(data2);
    });
    timer->start(2000);
}
MainWindow::~MainWindow()
{
    delete ui;
}
