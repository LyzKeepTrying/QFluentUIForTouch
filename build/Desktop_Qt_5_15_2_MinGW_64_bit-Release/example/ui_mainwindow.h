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
#include "fluent_check_box.h"
#include "fluent_circle_spin_box.h"
#include "fluent_combo_box.h"
#include "fluent_date_picker.h"
#include "fluent_datetime_picker.h"
#include "fluent_double_spin_box.h"
#include "fluent_group_box.h"
#include "fluent_icon_push_button.h"
#include "fluent_icon_toggle_button.h"
#include "fluent_line_edit.h"
#include "fluent_line_spin_box.h"
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
    FluentGroupBox *button;
    FluentToggleButton *fluentToggleButton;
    FluentToggleButton *fluentToggleButton_2;
    FluentIconToggleButton *fluentIconToggleButton_2;
    FluentIconToggleButton *fluentIconToggleButton;
    FluentPushButton *fluentPushButton;
    FluentCheckBox *fluentCheckBox;
    FluentGroupBox *spinx_box;
    FluentLineSpinBox *fluentLineSpinBox_2;
    FluentLineSpinBox *fluentLineSpinBox;
    FluentLineSpinBox *fluentLineSpinBox_3;
    FluentCircleSpinBox *fluentCircleSpinBox;
    FluentCircleSpinBox *fluentCircleSpinBox_2;
    FluentGroupBox *line_edit;
    FluentComboBox *fluentComboBox;
    FluentLineEdit *fluentLineEdit;
    FluentSpinBox *fluentSpinBox;
    FluentDoubleSpinBox *fluentDoubleSpinBox;
    FluentDatePicker *fluentDatePicker;
    FluentTimePicker *fluentTimePickerPlugin;
    FluentDateTimePicker *fluentDateTimePicker;
    FluentGroupBox *progress_bar;
    FluentProgressBar *fluentProgressBar;
    FluentProgressBar *fluentProgressBar_2;
    FluentTabWidget *fluentTabWidget;
    FluentTitleBar *fluentTitleBar;
    FluentIconPushButton *fluentIconPushButton;
    FluentGroupBox *table;
    FluentTableWidget *fluentTableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1133, 902);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button = new FluentGroupBox(centralwidget);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(20, 10, 441, 171));
        button->setFontSize(14);
        button->setShowTitle(false);
        fluentToggleButton = new FluentToggleButton(button);
        fluentToggleButton->setObjectName(QString::fromUtf8("fluentToggleButton"));
        fluentToggleButton->setGeometry(QRect(20, 60, 71, 31));
        fluentToggleButton->setCheckable(true);
        fluentToggleButton->setChecked(false);
        fluentToggleButton->setThumbRadius(12.000000000000000);
        fluentToggleButton_2 = new FluentToggleButton(button);
        fluentToggleButton_2->setObjectName(QString::fromUtf8("fluentToggleButton_2"));
        fluentToggleButton_2->setGeometry(QRect(100, 60, 71, 31));
        fluentToggleButton_2->setCheckable(true);
        fluentToggleButton_2->setChecked(true);
        fluentToggleButton_2->setThumbRadius(12.000000000000000);
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
        fluentIconToggleButton->setGeometry(QRect(250, 50, 61, 61));
        fluentIconToggleButton->setIcon(icon);
        fluentIconToggleButton->setChecked(true);
        fluentIconToggleButton->setAutoExclusive(false);
        fluentIconToggleButton->setToggledIcon(icon1);
        fluentPushButton = new FluentPushButton(button);
        fluentPushButton->setObjectName(QString::fromUtf8("fluentPushButton"));
        fluentPushButton->setGeometry(QRect(320, 50, 91, 41));
        fluentPushButton->setIcon(icon);
        fluentPushButton->setIconSize(QSize(20, 20));
        fluentCheckBox = new FluentCheckBox(button);
        fluentCheckBox->setObjectName(QString::fromUtf8("fluentCheckBox"));
        fluentCheckBox->setGeometry(QRect(20, 120, 81, 31));
        fluentCheckBox->setTextSpacing(10);
        spinx_box = new FluentGroupBox(centralwidget);
        spinx_box->setObjectName(QString::fromUtf8("spinx_box"));
        spinx_box->setGeometry(QRect(20, 390, 441, 311));
        spinx_box->setFontSize(14);
        spinx_box->setShowTitle(false);
        fluentLineSpinBox_2 = new FluentLineSpinBox(spinx_box);
        fluentLineSpinBox_2->setObjectName(QString::fromUtf8("fluentLineSpinBox_2"));
        fluentLineSpinBox_2->setGeometry(QRect(20, 40, 321, 51));
        fluentLineSpinBox_2->setValue(88);
        fluentLineSpinBox_2->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_2->setLineWidth(12.000000000000000);
        fluentLineSpinBox = new FluentLineSpinBox(spinx_box);
        fluentLineSpinBox->setObjectName(QString::fromUtf8("fluentLineSpinBox"));
        fluentLineSpinBox->setGeometry(QRect(20, 110, 331, 51));
        fluentLineSpinBox->setMaximum(10);
        fluentLineSpinBox->setValue(3);
        fluentLineSpinBox->setThumbRadius(14.000000000000000);
        fluentLineSpinBox->setLineWidth(12.000000000000000);
        fluentLineSpinBox->setPaintStep(true);
        fluentLineSpinBox_3 = new FluentLineSpinBox(spinx_box);
        fluentLineSpinBox_3->setObjectName(QString::fromUtf8("fluentLineSpinBox_3"));
        fluentLineSpinBox_3->setGeometry(QRect(370, 30, 51, 271));
        fluentLineSpinBox_3->setMaximum(5);
        fluentLineSpinBox_3->setValue(3);
        fluentLineSpinBox_3->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_3->setLineWidth(12.000000000000000);
        fluentLineSpinBox_3->setDirectionState(Qt::Vertical);
        fluentLineSpinBox_3->setPaintStep(true);
        fluentCircleSpinBox = new FluentCircleSpinBox(spinx_box);
        fluentCircleSpinBox->setObjectName(QString::fromUtf8("fluentCircleSpinBox"));
        fluentCircleSpinBox->setGeometry(QRect(30, 170, 141, 121));
        fluentCircleSpinBox->setValue(50);
        fluentCircleSpinBox->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox->setArcWidth(12.000000000000000);
        fluentCircleSpinBox->setShowCursor(true);
        fluentCircleSpinBox->setMaxArcLen(300);
        fluentCircleSpinBox->setArcRectAdjust(15);
        fluentCircleSpinBox->setThumbIsPressed(false);
        fluentCircleSpinBox_2 = new FluentCircleSpinBox(spinx_box);
        fluentCircleSpinBox_2->setObjectName(QString::fromUtf8("fluentCircleSpinBox_2"));
        fluentCircleSpinBox_2->setGeometry(QRect(170, 170, 141, 121));
        fluentCircleSpinBox_2->setMaximum(9);
        fluentCircleSpinBox_2->setValue(2);
        fluentCircleSpinBox_2->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox_2->setArcWidth(12.000000000000000);
        fluentCircleSpinBox_2->setShowCursor(true);
        fluentCircleSpinBox_2->setMaxArcLen(300);
        fluentCircleSpinBox_2->setArcRectAdjust(15);
        fluentCircleSpinBox_2->setThumbIsPressed(false);
        fluentCircleSpinBox_2->setPaintStep(true);
        line_edit = new FluentGroupBox(centralwidget);
        line_edit->setObjectName(QString::fromUtf8("line_edit"));
        line_edit->setGeometry(QRect(560, 390, 441, 281));
        line_edit->setFontSize(14);
        line_edit->setShowTitle(false);
        fluentComboBox = new FluentComboBox(line_edit);
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
        progress_bar = new FluentGroupBox(centralwidget);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
        progress_bar->setGeometry(QRect(20, 730, 441, 141));
        progress_bar->setFontSize(14);
        progress_bar->setShowTitle(false);
        fluentProgressBar = new FluentProgressBar(progress_bar);
        fluentProgressBar->setObjectName(QString::fromUtf8("fluentProgressBar"));
        fluentProgressBar->setGeometry(QRect(30, 40, 381, 31));
        fluentProgressBar->setLineWidth(13.000000000000000);
        fluentProgressBar->setIsLoop(true);
        fluentProgressBar->setMoveSpeed(1.000000000000000);
        fluentProgressBar->setSliderLen(0.250000000000000);
        fluentProgressBar_2 = new FluentProgressBar(progress_bar);
        fluentProgressBar_2->setObjectName(QString::fromUtf8("fluentProgressBar_2"));
        fluentProgressBar_2->setGeometry(QRect(30, 90, 381, 31));
        fluentProgressBar_2->setValue(50);
        fluentProgressBar_2->setLineWidth(13.000000000000000);
        fluentProgressBar_2->setIsLoop(false);
        fluentProgressBar_2->setMoveSpeed(1.000000000000000);
        fluentProgressBar_2->setSliderLen(0.250000000000000);
        fluentTabWidget = new FluentTabWidget(centralwidget);
        fluentTabWidget->setObjectName(QString::fromUtf8("fluentTabWidget"));
        fluentTabWidget->setGeometry(QRect(510, 70, 561, 301));
        fluentTabWidget->setTabPosition(QTabWidget::West);
        fluentTabWidget->setIconSize(QSize(30, 20));
        fluentTabWidget->setTabsClosable(false);
        fluentTabWidget->setTabBarAutoHide(false);
        fluentTitleBar = new FluentTitleBar(centralwidget);
        fluentTitleBar->setObjectName(QString::fromUtf8("fluentTitleBar"));
        fluentTitleBar->setGeometry(QRect(510, 20, 561, 48));
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
        table->setGeometry(QRect(540, 680, 511, 291));
        table->setFontSize(14);
        table->setShowTitle(false);
        fluentTableWidget = new FluentTableWidget(table);
        if (fluentTableWidget->columnCount() < 3)
            fluentTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        fluentTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        fluentTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        fluentTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (fluentTableWidget->rowCount() < 10)
            fluentTableWidget->setRowCount(10);
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
        fluentTableWidget->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        fluentTableWidget->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        fluentTableWidget->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        fluentTableWidget->setItem(1, 2, __qtablewidgetitem16);
        fluentTableWidget->setObjectName(QString::fromUtf8("fluentTableWidget"));
        fluentTableWidget->setGeometry(QRect(10, 10, 451, 281));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

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
        spinx_box->setTitle(QCoreApplication::translate("MainWindow", "SpinBox", nullptr));
        line_edit->setTitle(QCoreApplication::translate("MainWindow", "LineEdit&ComBox", nullptr));
        fluentLineEdit->setText(QCoreApplication::translate("MainWindow", "test\346\265\213\350\257\225", nullptr));
        progress_bar->setTitle(QCoreApplication::translate("MainWindow", "ProgressBar", nullptr));
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

        const bool __sortingEnabled = fluentTableWidget->isSortingEnabled();
        fluentTableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem13 = fluentTableWidget->item(0, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = fluentTableWidget->item(0, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = fluentTableWidget->item(1, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = fluentTableWidget->item(1, 2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        fluentTableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
