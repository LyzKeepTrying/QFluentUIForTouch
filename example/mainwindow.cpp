#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fluent_message_bar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->fluentTabWidget->addTabWithScroll(ui->table, QIcon(":/icon/dog.png"), "表格");
    setGeometry(1000, 500, 1920, 1080);
    auto* bar1 = new FluentMessageBar(this);
    bar1->showMessage(
        "配置加载成功配置加载成功配置加载成功",
        FluentMessageBar::MessageType::Info,
        3000,
        FluentMessageBar::Position::RightTop,
        this
        );

    auto* bar2 = new FluentMessageBar(this);
    bar2->showMessage(
        "配置加载成功配置加载成功配置加载成功配置加载成功1",
        FluentMessageBar::MessageType::Warning,
        6000,
        FluentMessageBar::Position::RightTop,
        this
        );

    auto* bar3 = new FluentMessageBar(this);
    bar3->showMessage(
        "配置加载成功2",
        FluentMessageBar::MessageType::Error,
        0,
        FluentMessageBar::Position::TopCenter,
        ui->fluentTabWidget
        );


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

    connect(ui->fluentColorPicker, &FluentColorPicker::colorChanged, this, [=](QColor value){
        g_fluent_theme_center->setOnColor(value);
    });

    connect(ui->fluentColorPicker_2, &FluentColorPicker::colorChanged, this, [=](QColor value){
        g_fluent_theme_center->setBackgroundColor(value);
    });

    connect(ui->fluentColorPicker_3, &FluentColorPicker::colorChanged, this, [=](QColor value){
        g_fluent_theme_center->setTextColor(value);
    });

    connect(ui->fluentColorPicker_4, &FluentColorPicker::colorChanged, this, [=](QColor value){
        g_fluent_theme_center->setBorderColor(value);
    });
}
MainWindow::~MainWindow()
{
    delete ui;
}
