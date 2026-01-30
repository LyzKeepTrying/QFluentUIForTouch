/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "fluent_bar_chart.h"
#include "fluent_check_box.h"
#include "fluent_circle_spin_box.h"
#include "fluent_combo_box.h"
#include "fluent_date_picker.h"
#include "fluent_datetime_picker.h"
#include "fluent_double_spin_box.h"
#include "fluent_group_box.h"
#include "fluent_icon_push_button.h"
#include "fluent_icon_toggle_button.h"
#include "fluent_line_chart.h"
#include "fluent_line_edit.h"
#include "fluent_line_spin_box.h"
#include "fluent_pie_chart.h"
#include "fluent_progress_bar.h"
#include "fluent_push_button.h"
#include "fluent_spin_box.h"
#include "fluent_tab_widget.h"
#include "fluent_table_widget.h"
#include "fluent_time_picker.h"
#include "fluent_title_bar.h"
#include "fluent_toggle_button.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    FluentTabWidget *fluentTabWidget;
    QWidget *widget;
    FluentGroupBox *button;
    FluentToggleButton *fluentToggleButton;
    FluentIconToggleButton *fluentIconToggleButton_2;
    FluentIconToggleButton *fluentIconToggleButton;
    FluentPushButton *fluentPushButton;
    FluentCheckBox *fluentCheckBox;
    QWidget *tab_4;
    FluentGroupBox *line_edit;
    FluentComboBox *fluentComboBox;
    FluentLineEdit *fluentLineEdit;
    FluentSpinBox *fluentSpinBox;
    FluentDoubleSpinBox *fluentDoubleSpinBox;
    FluentDatePicker *fluentDatePicker;
    FluentTimePicker *fluentTimePickerPlugin;
    FluentDateTimePicker *fluentDateTimePicker;
    QWidget *tab;
    FluentGroupBox *spinx_box;
    FluentLineSpinBox *fluentLineSpinBox_2;
    FluentLineSpinBox *fluentLineSpinBox;
    FluentLineSpinBox *fluentLineSpinBox_3;
    FluentCircleSpinBox *fluentCircleSpinBox;
    FluentCircleSpinBox *fluentCircleSpinBox_2;
    QWidget *tab_5;
    FluentGroupBox *progress_bar_2;
    FluentProgressBar *fluentProgressBar_3;
    FluentProgressBar *fluentProgressBar_4;
    QWidget *tab_2;
    FluentGroupBox *progress_bar;
    FluentTabWidget *fluentTabWidget_2;
    QWidget *tab_6;
    FluentPieChart *fluentPieChart;
    QWidget *tab_7;
    FluentBarChart *fluentBarChart;
    QWidget *tab_8;
    FluentLineChart *fluentLineChart;
    FluentTitleBar *fluentTitleBar;
    FluentIconPushButton *fluentIconPushButton;
    FluentGroupBox *table;
    FluentTableWidget *fluentTableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(564, 475);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fluentTabWidget = new FluentTabWidget(centralwidget);
        fluentTabWidget->setObjectName(QString::fromUtf8("fluentTabWidget"));
        fluentTabWidget->setGeometry(QRect(0, 50, 561, 421));
        fluentTabWidget->setTabPosition(QTabWidget::West);
        fluentTabWidget->setTabShape(QTabWidget::Rounded);
        fluentTabWidget->setIconSize(QSize(30, 20));
        fluentTabWidget->setTabsClosable(false);
        fluentTabWidget->setTabBarAutoHide(false);
        fluentTabWidget->setProperty("PageScrollable", QVariant(true));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        button = new FluentGroupBox(widget);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(0, 0, 461, 421));
        button->setFontSize(14);
        button->setShowTitle(false);
        fluentToggleButton = new FluentToggleButton(button);
        fluentToggleButton->setObjectName(QString::fromUtf8("fluentToggleButton"));
        fluentToggleButton->setGeometry(QRect(20, 60, 71, 31));
        fluentToggleButton->setCheckable(true);
        fluentToggleButton->setChecked(false);
        fluentToggleButton->setThumbRadius(12.000000000000000);
        fluentIconToggleButton_2 = new FluentIconToggleButton(button);
        fluentIconToggleButton_2->setObjectName(QString::fromUtf8("fluentIconToggleButton_2"));
        fluentIconToggleButton_2->setGeometry(QRect(170, 40, 81, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/dog.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentIconToggleButton_2->setIcon(icon);
        fluentIconToggleButton_2->setChecked(false);
        fluentIconToggleButton_2->setAutoExclusive(false);
        fluentIconToggleButton_2->setIconTextSpace(8);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/cat.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentIconToggleButton_2->setToggledIcon(icon1);
        fluentIconToggleButton_2->setTextIsOustside(true);
        fluentIconToggleButton = new FluentIconToggleButton(button);
        fluentIconToggleButton->setObjectName(QString::fromUtf8("fluentIconToggleButton"));
        fluentIconToggleButton->setGeometry(QRect(180, 140, 61, 61));
        fluentIconToggleButton->setIcon(icon);
        fluentIconToggleButton->setChecked(true);
        fluentIconToggleButton->setAutoExclusive(false);
        fluentIconToggleButton->setToggledIcon(icon1);
        fluentIconToggleButton->setTextIsOustside(false);
        fluentPushButton = new FluentPushButton(button);
        fluentPushButton->setObjectName(QString::fromUtf8("fluentPushButton"));
        fluentPushButton->setGeometry(QRect(320, 50, 81, 41));
        fluentPushButton->setIcon(icon);
        fluentPushButton->setIconSize(QSize(20, 20));
        fluentCheckBox = new FluentCheckBox(button);
        fluentCheckBox->setObjectName(QString::fromUtf8("fluentCheckBox"));
        fluentCheckBox->setGeometry(QRect(30, 140, 81, 31));
        fluentCheckBox->setTextSpacing(10);
        fluentTabWidget->addTab(widget, icon1, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        line_edit = new FluentGroupBox(tab_4);
        line_edit->setObjectName(QString::fromUtf8("line_edit"));
        line_edit->setGeometry(QRect(0, 0, 461, 421));
        line_edit->setFontSize(14);
        line_edit->setShowTitle(false);
        fluentComboBox = new FluentComboBox(line_edit);
        fluentComboBox->addItem(QString());
        fluentComboBox->addItem(QString());
        fluentComboBox->setObjectName(QString::fromUtf8("fluentComboBox"));
        fluentComboBox->setGeometry(QRect(40, 40, 141, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fluentComboBox->sizePolicy().hasHeightForWidth());
        fluentComboBox->setSizePolicy(sizePolicy);
        fluentComboBox->setEditable(false);
        fluentComboBox->setFrame(true);
        fluentComboBox->setModelColumn(0);
        fluentLineEdit = new FluentLineEdit(line_edit);
        fluentLineEdit->setObjectName(QString::fromUtf8("fluentLineEdit"));
        fluentLineEdit->setGeometry(QRect(230, 40, 161, 41));
        fluentSpinBox = new FluentSpinBox(line_edit);
        fluentSpinBox->setObjectName(QString::fromUtf8("fluentSpinBox"));
        fluentSpinBox->setGeometry(QRect(40, 110, 141, 41));
        fluentDoubleSpinBox = new FluentDoubleSpinBox(line_edit);
        fluentDoubleSpinBox->setObjectName(QString::fromUtf8("fluentDoubleSpinBox"));
        fluentDoubleSpinBox->setGeometry(QRect(230, 110, 151, 41));
        fluentDatePicker = new FluentDatePicker(line_edit);
        fluentDatePicker->setObjectName(QString::fromUtf8("fluentDatePicker"));
        fluentDatePicker->setGeometry(QRect(40, 170, 151, 41));
        fluentDatePicker->setFontSize(14);
        fluentTimePickerPlugin = new FluentTimePicker(line_edit);
        fluentTimePickerPlugin->setObjectName(QString::fromUtf8("fluentTimePickerPlugin"));
        fluentTimePickerPlugin->setGeometry(QRect(230, 170, 151, 41));
        fluentDateTimePicker = new FluentDateTimePicker(line_edit);
        fluentDateTimePicker->setObjectName(QString::fromUtf8("fluentDateTimePicker"));
        fluentDateTimePicker->setGeometry(QRect(40, 230, 201, 41));
        fluentTabWidget->addTab(tab_4, icon, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        spinx_box = new FluentGroupBox(tab);
        spinx_box->setObjectName(QString::fromUtf8("spinx_box"));
        spinx_box->setGeometry(QRect(0, 0, 461, 421));
        spinx_box->setFontSize(14);
        spinx_box->setShowTitle(false);
        fluentLineSpinBox_2 = new FluentLineSpinBox(spinx_box);
        fluentLineSpinBox_2->setObjectName(QString::fromUtf8("fluentLineSpinBox_2"));
        fluentLineSpinBox_2->setGeometry(QRect(20, 40, 331, 51));
        fluentLineSpinBox_2->setValue(88);
        fluentLineSpinBox_2->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_2->setLineWidth(12.000000000000000);
        fluentLineSpinBox = new FluentLineSpinBox(spinx_box);
        fluentLineSpinBox->setObjectName(QString::fromUtf8("fluentLineSpinBox"));
        fluentLineSpinBox->setGeometry(QRect(20, 140, 331, 51));
        fluentLineSpinBox->setMaximum(10);
        fluentLineSpinBox->setValue(3);
        fluentLineSpinBox->setThumbRadius(14.000000000000000);
        fluentLineSpinBox->setLineWidth(12.000000000000000);
        fluentLineSpinBox->setPaintStep(true);
        fluentLineSpinBox_3 = new FluentLineSpinBox(spinx_box);
        fluentLineSpinBox_3->setObjectName(QString::fromUtf8("fluentLineSpinBox_3"));
        fluentLineSpinBox_3->setGeometry(QRect(370, 90, 51, 271));
        fluentLineSpinBox_3->setMaximum(5);
        fluentLineSpinBox_3->setValue(3);
        fluentLineSpinBox_3->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_3->setLineWidth(12.000000000000000);
        fluentLineSpinBox_3->setDirectionState(Qt::Vertical);
        fluentLineSpinBox_3->setPaintStep(true);
        fluentCircleSpinBox = new FluentCircleSpinBox(spinx_box);
        fluentCircleSpinBox->setObjectName(QString::fromUtf8("fluentCircleSpinBox"));
        fluentCircleSpinBox->setGeometry(QRect(40, 250, 141, 121));
        fluentCircleSpinBox->setValue(50);
        fluentCircleSpinBox->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox->setArcWidth(12.000000000000000);
        fluentCircleSpinBox->setShowCursor(true);
        fluentCircleSpinBox->setMaxArcLen(300);
        fluentCircleSpinBox->setArcRectAdjust(15);
        fluentCircleSpinBox->setThumbIsPressed(false);
        fluentCircleSpinBox_2 = new FluentCircleSpinBox(spinx_box);
        fluentCircleSpinBox_2->setObjectName(QString::fromUtf8("fluentCircleSpinBox_2"));
        fluentCircleSpinBox_2->setGeometry(QRect(200, 240, 141, 121));
        fluentCircleSpinBox_2->setMaximum(9);
        fluentCircleSpinBox_2->setValue(2);
        fluentCircleSpinBox_2->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox_2->setArcWidth(12.000000000000000);
        fluentCircleSpinBox_2->setShowCursor(true);
        fluentCircleSpinBox_2->setMaxArcLen(300);
        fluentCircleSpinBox_2->setArcRectAdjust(15);
        fluentCircleSpinBox_2->setThumbIsPressed(false);
        fluentCircleSpinBox_2->setPaintStep(true);
        fluentTabWidget->addTab(tab, icon1, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        progress_bar_2 = new FluentGroupBox(tab_5);
        progress_bar_2->setObjectName(QString::fromUtf8("progress_bar_2"));
        progress_bar_2->setGeometry(QRect(0, 0, 461, 421));
        sizePolicy.setHeightForWidth(progress_bar_2->sizePolicy().hasHeightForWidth());
        progress_bar_2->setSizePolicy(sizePolicy);
        progress_bar_2->setAutoFillBackground(false);
        progress_bar_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progress_bar_2->setFlat(false);
        progress_bar_2->setCheckable(false);
        progress_bar_2->setFontSize(14);
        progress_bar_2->setShowTitle(false);
        progress_bar_2->setTitleIsOutside(true);
        fluentProgressBar_3 = new FluentProgressBar(progress_bar_2);
        fluentProgressBar_3->setObjectName(QString::fromUtf8("fluentProgressBar_3"));
        fluentProgressBar_3->setGeometry(QRect(30, 40, 381, 31));
        fluentProgressBar_3->setLineWidth(13.000000000000000);
        fluentProgressBar_3->setIsLoop(true);
        fluentProgressBar_3->setMoveSpeed(1.000000000000000);
        fluentProgressBar_3->setSliderLen(0.250000000000000);
        fluentProgressBar_4 = new FluentProgressBar(progress_bar_2);
        fluentProgressBar_4->setObjectName(QString::fromUtf8("fluentProgressBar_4"));
        fluentProgressBar_4->setGeometry(QRect(30, 90, 381, 31));
        fluentProgressBar_4->setValue(50);
        fluentProgressBar_4->setLineWidth(13.000000000000000);
        fluentProgressBar_4->setIsLoop(false);
        fluentProgressBar_4->setMoveSpeed(1.000000000000000);
        fluentProgressBar_4->setSliderLen(0.250000000000000);
        fluentTabWidget->addTab(tab_5, icon, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        progress_bar = new FluentGroupBox(tab_2);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
        progress_bar->setGeometry(QRect(0, 0, 461, 421));
        sizePolicy.setHeightForWidth(progress_bar->sizePolicy().hasHeightForWidth());
        progress_bar->setSizePolicy(sizePolicy);
        progress_bar->setAutoFillBackground(false);
        progress_bar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progress_bar->setFlat(false);
        progress_bar->setCheckable(false);
        progress_bar->setFontSize(14);
        progress_bar->setShowTitle(false);
        progress_bar->setTitleIsOutside(true);
        fluentTabWidget_2 = new FluentTabWidget(progress_bar);
        fluentTabWidget_2->setObjectName(QString::fromUtf8("fluentTabWidget_2"));
        fluentTabWidget_2->setGeometry(QRect(10, 10, 441, 401));
        fluentTabWidget_2->setTabPosition(QTabWidget::North);
        fluentTabWidget_2->setIconSize(QSize(0, 0));
        fluentTabWidget_2->setUsesScrollButtons(true);
        fluentTabWidget_2->setDocumentMode(true);
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        fluentPieChart = new FluentPieChart(tab_6);
        fluentPieChart->setObjectName(QString::fromUtf8("fluentPieChart"));
        fluentPieChart->setGeometry(QRect(0, 10, 441, 321));
        fluentTabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        fluentBarChart = new FluentBarChart(tab_7);
        fluentBarChart->setObjectName(QString::fromUtf8("fluentBarChart"));
        fluentBarChart->setGeometry(QRect(0, 10, 441, 321));
        fluentBarChart->setBarSpacing(5);
        fluentTabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        fluentLineChart = new FluentLineChart(tab_8);
        fluentLineChart->setObjectName(QString::fromUtf8("fluentLineChart"));
        fluentLineChart->setGeometry(QRect(0, 10, 441, 321));
        fluentLineChart->setPointRadius(5.000000000000000);
        fluentLineChart->setLineWidth(3.000000000000000);
        fluentTabWidget_2->addTab(tab_8, QString());
        fluentTabWidget->addTab(tab_2, icon1, QString());
        fluentTitleBar = new FluentTitleBar(centralwidget);
        fluentTitleBar->setObjectName(QString::fromUtf8("fluentTitleBar"));
        fluentTitleBar->setGeometry(QRect(0, 0, 561, 48));
        fluentTitleBar->setTitleFontSize(17);
        fluentTitleBar->setShowTitle(true);
        fluentTitleBar->setShowDateTime(true);
        fluentIconPushButton = new FluentIconPushButton(fluentTitleBar);
        fluentIconPushButton->setObjectName(QString::fromUtf8("fluentIconPushButton"));
        fluentIconPushButton->setGeometry(QRect(510, 3, 36, 36));
        fluentIconPushButton->setIcon(icon);
        fluentIconPushButton->setIconSize(QSize(25, 25));
        fluentIconPushButton->setFlat(false);
        fluentIconPushButton->setIconTopMargin(0);
        fluentIconPushButton->setIconTextSpace(0);
        fluentIconPushButton->setFontSize(14);
        fluentIconPushButton->setTextIsOustside(false);
        table = new FluentGroupBox(centralwidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(620, 50, 431, 761));
        sizePolicy.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy);
        table->setAutoFillBackground(false);
        table->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        table->setFlat(false);
        table->setCheckable(false);
        table->setFontSize(14);
        table->setShowTitle(false);
        table->setTitleIsOutside(true);
        fluentTableWidget = new FluentTableWidget(table);
        if (fluentTableWidget->columnCount() < 3)
            fluentTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        fluentTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        fluentTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        fluentTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (fluentTableWidget->rowCount() < 23)
            fluentTableWidget->setRowCount(23);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(12, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(13, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(14, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(15, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(16, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(17, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(18, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(19, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(20, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(21, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        fluentTableWidget->setVerticalHeaderItem(22, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        fluentTableWidget->setItem(0, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        fluentTableWidget->setItem(14, 2, __qtablewidgetitem27);
        fluentTableWidget->setObjectName(QString::fromUtf8("fluentTableWidget"));
        fluentTableWidget->setGeometry(QRect(20, 10, 371, 741));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        fluentTabWidget->setCurrentIndex(4);
        fluentTabWidget_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button->setTitle(QCoreApplication::translate("MainWindow", "Button", nullptr));
        fluentIconToggleButton_2->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton_2->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentIconToggleButton->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentPushButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentCheckBox->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentTabWidget->setTabText(fluentTabWidget->indexOf(widget), QCoreApplication::translate("MainWindow", "\346\214\211\351\222\256", nullptr));
        line_edit->setTitle(QCoreApplication::translate("MainWindow", "LineEdit&ComBox", nullptr));
        fluentComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "item1", nullptr));
        fluentComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "item2", nullptr));

        fluentLineEdit->setText(QCoreApplication::translate("MainWindow", "test\346\265\213\350\257\225", nullptr));
        fluentTabWidget->setTabText(fluentTabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245", nullptr));
        spinx_box->setTitle(QCoreApplication::translate("MainWindow", "SpinBox", nullptr));
        fluentTabWidget->setTabText(fluentTabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\346\235\241\345\275\242", nullptr));
        progress_bar_2->setTitle(QCoreApplication::translate("MainWindow", "ProgressBar", nullptr));
        fluentTabWidget->setTabText(fluentTabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\350\277\233\345\272\246", nullptr));
        progress_bar->setTitle(QCoreApplication::translate("MainWindow", "ProgressBar", nullptr));
        fluentTabWidget_2->setTabText(fluentTabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\346\211\207\345\275\242\345\233\276", nullptr));
        fluentTabWidget_2->setTabText(fluentTabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "\346\237\261\347\212\266\345\233\276", nullptr));
        fluentTabWidget_2->setTabText(fluentTabWidget_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "\346\212\230\347\272\277\345\233\276", nullptr));
        fluentTabWidget->setTabText(fluentTabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241", nullptr));
        fluentTitleBar->setTitle(QCoreApplication::translate("MainWindow", "\344\270\255\345\233\275\346\237\220\346\237\220\345\205\254\345\217\270", nullptr));
        table->setTitle(QCoreApplication::translate("MainWindow", "ProgressBar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = fluentTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = fluentTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = fluentTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = fluentTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = fluentTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = fluentTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = fluentTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = fluentTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = fluentTableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = fluentTableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = fluentTableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = fluentTableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = fluentTableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = fluentTableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = fluentTableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = fluentTableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = fluentTableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = fluentTableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = fluentTableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = fluentTableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = fluentTableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = fluentTableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = fluentTableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = fluentTableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = fluentTableWidget->verticalHeaderItem(21);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = fluentTableWidget->verticalHeaderItem(22);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));

        const bool __sortingEnabled = fluentTableWidget->isSortingEnabled();
        fluentTableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem26 = fluentTableWidget->item(0, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = fluentTableWidget->item(14, 2);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        fluentTableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
