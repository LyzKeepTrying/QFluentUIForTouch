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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "fluent_circle_spin_box.h"
#include "fluent_combo_box.h"
#include "fluent_double_spin_box.h"
#include "fluent_group_box.h"
#include "fluent_icon_toggle_button.h"
#include "fluent_line_edit.h"
#include "fluent_line_spin_box.h"
#include "fluent_progress_bar.h"
#include "fluent_push_button.h"
#include "fluent_spin_box.h"
#include "fluent_tab_widget.h"
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
    FluentGroupBox *progress_bar;
    FluentProgressBar *fluentProgressBar;
    FluentProgressBar *fluentProgressBar_2;
    FluentTabWidget *fluentTabWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1133, 872);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button = new FluentGroupBox(centralwidget);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(20, 10, 441, 141));
        button->setFontSize(14);
        button->setShowTitle(true);
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
        spinx_box = new FluentGroupBox(centralwidget);
        spinx_box->setObjectName(QString::fromUtf8("spinx_box"));
        spinx_box->setGeometry(QRect(20, 390, 441, 311));
        spinx_box->setFontSize(14);
        spinx_box->setShowTitle(true);
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
        line_edit->setGeometry(QRect(20, 180, 441, 181));
        line_edit->setFontSize(14);
        line_edit->setShowTitle(true);
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
        progress_bar = new FluentGroupBox(centralwidget);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
        progress_bar->setGeometry(QRect(20, 730, 441, 141));
        progress_bar->setFontSize(14);
        progress_bar->setShowTitle(true);
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
        fluentTabWidget->setGeometry(QRect(530, 30, 561, 301));
        fluentTabWidget->setTabsClosable(false);
        fluentTabWidget->setTabBarAutoHide(false);
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
        spinx_box->setTitle(QCoreApplication::translate("MainWindow", "SpinBox", nullptr));
        line_edit->setTitle(QCoreApplication::translate("MainWindow", "LineEdit&ComBox", nullptr));
        fluentLineEdit->setText(QCoreApplication::translate("MainWindow", "test\346\265\213\350\257\225", nullptr));
        progress_bar->setTitle(QCoreApplication::translate("MainWindow", "ProgressBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
