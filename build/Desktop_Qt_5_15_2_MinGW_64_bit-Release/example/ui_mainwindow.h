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
#include "fluent_toggle_button.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    FluentGroupBox *fluentGroupBox;
    FluentToggleButton *fluentToggleButton;
    FluentToggleButton *fluentToggleButton_2;
    FluentIconToggleButton *fluentIconToggleButton_2;
    FluentIconToggleButton *fluentIconToggleButton;
    FluentPushButton *fluentPushButton;
    FluentGroupBox *fluentGroupBox_8;
    FluentLineSpinBox *fluentLineSpinBox_2;
    FluentLineSpinBox *fluentLineSpinBox;
    FluentLineSpinBox *fluentLineSpinBox_3;
    FluentCircleSpinBox *fluentCircleSpinBox;
    FluentCircleSpinBox *fluentCircleSpinBox_2;
    FluentGroupBox *fluentGroupBox_9;
    FluentComboBox *fluentComboBox;
    FluentLineEdit *fluentLineEdit;
    FluentSpinBox *fluentSpinBox;
    FluentDoubleSpinBox *fluentDoubleSpinBox;
    FluentGroupBox *fluentGroupBox_10;
    FluentProgressBar *fluentProgressBar;
    FluentProgressBar *fluentProgressBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(485, 872);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fluentGroupBox = new FluentGroupBox(centralwidget);
        fluentGroupBox->setObjectName(QString::fromUtf8("fluentGroupBox"));
        fluentGroupBox->setGeometry(QRect(20, 10, 441, 141));
        fluentGroupBox->setFontSize(14);
        fluentGroupBox->setShowTitle(true);
        fluentToggleButton = new FluentToggleButton(fluentGroupBox);
        fluentToggleButton->setObjectName(QString::fromUtf8("fluentToggleButton"));
        fluentToggleButton->setGeometry(QRect(20, 60, 71, 31));
        fluentToggleButton->setCheckable(true);
        fluentToggleButton->setChecked(false);
        fluentToggleButton->setThumbRadius(12.000000000000000);
        fluentToggleButton_2 = new FluentToggleButton(fluentGroupBox);
        fluentToggleButton_2->setObjectName(QString::fromUtf8("fluentToggleButton_2"));
        fluentToggleButton_2->setGeometry(QRect(100, 60, 71, 31));
        fluentToggleButton_2->setCheckable(true);
        fluentToggleButton_2->setChecked(true);
        fluentToggleButton_2->setThumbRadius(12.000000000000000);
        fluentIconToggleButton_2 = new FluentIconToggleButton(fluentGroupBox);
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
        fluentIconToggleButton = new FluentIconToggleButton(fluentGroupBox);
        fluentIconToggleButton->setObjectName(QString::fromUtf8("fluentIconToggleButton"));
        fluentIconToggleButton->setGeometry(QRect(250, 50, 61, 61));
        fluentIconToggleButton->setIcon(icon);
        fluentIconToggleButton->setChecked(true);
        fluentIconToggleButton->setAutoExclusive(false);
        fluentIconToggleButton->setToggledIcon(icon1);
        fluentPushButton = new FluentPushButton(fluentGroupBox);
        fluentPushButton->setObjectName(QString::fromUtf8("fluentPushButton"));
        fluentPushButton->setGeometry(QRect(320, 50, 91, 41));
        fluentPushButton->setIcon(icon);
        fluentPushButton->setIconSize(QSize(20, 20));
        fluentGroupBox_8 = new FluentGroupBox(centralwidget);
        fluentGroupBox_8->setObjectName(QString::fromUtf8("fluentGroupBox_8"));
        fluentGroupBox_8->setGeometry(QRect(20, 390, 441, 311));
        fluentGroupBox_8->setFontSize(14);
        fluentGroupBox_8->setShowTitle(true);
        fluentLineSpinBox_2 = new FluentLineSpinBox(fluentGroupBox_8);
        fluentLineSpinBox_2->setObjectName(QString::fromUtf8("fluentLineSpinBox_2"));
        fluentLineSpinBox_2->setGeometry(QRect(20, 40, 321, 51));
        fluentLineSpinBox_2->setValue(88);
        fluentLineSpinBox_2->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_2->setLineWidth(12.000000000000000);
        fluentLineSpinBox_2->setDirectionState(Qt::Horizontal);
        fluentLineSpinBox = new FluentLineSpinBox(fluentGroupBox_8);
        fluentLineSpinBox->setObjectName(QString::fromUtf8("fluentLineSpinBox"));
        fluentLineSpinBox->setGeometry(QRect(20, 110, 331, 51));
        fluentLineSpinBox->setMaximum(10);
        fluentLineSpinBox->setValue(3);
        fluentLineSpinBox->setThumbRadius(14.000000000000000);
        fluentLineSpinBox->setLineWidth(12.000000000000000);
        fluentLineSpinBox->setPaintStep(true);
        fluentLineSpinBox_3 = new FluentLineSpinBox(fluentGroupBox_8);
        fluentLineSpinBox_3->setObjectName(QString::fromUtf8("fluentLineSpinBox_3"));
        fluentLineSpinBox_3->setGeometry(QRect(370, 30, 51, 271));
        fluentLineSpinBox_3->setMaximum(5);
        fluentLineSpinBox_3->setValue(3);
        fluentLineSpinBox_3->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_3->setLineWidth(12.000000000000000);
        fluentLineSpinBox_3->setDirectionState(Qt::Vertical);
        fluentLineSpinBox_3->setPaintStep(true);
        fluentCircleSpinBox = new FluentCircleSpinBox(fluentGroupBox_8);
        fluentCircleSpinBox->setObjectName(QString::fromUtf8("fluentCircleSpinBox"));
        fluentCircleSpinBox->setGeometry(QRect(30, 170, 141, 121));
        fluentCircleSpinBox->setValue(50);
        fluentCircleSpinBox->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox->setArcWidth(12.000000000000000);
        fluentCircleSpinBox->setShowCursor(true);
        fluentCircleSpinBox->setMaxArcLen(300);
        fluentCircleSpinBox->setArcRectAdjust(15);
        fluentCircleSpinBox->setThumbIsPressed(false);
        fluentCircleSpinBox_2 = new FluentCircleSpinBox(fluentGroupBox_8);
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
        fluentGroupBox_9 = new FluentGroupBox(centralwidget);
        fluentGroupBox_9->setObjectName(QString::fromUtf8("fluentGroupBox_9"));
        fluentGroupBox_9->setGeometry(QRect(20, 180, 441, 181));
        fluentGroupBox_9->setFontSize(14);
        fluentGroupBox_9->setShowTitle(true);
        fluentComboBox = new FluentComboBox(fluentGroupBox_9);
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
        fluentLineEdit = new FluentLineEdit(fluentGroupBox_9);
        fluentLineEdit->setObjectName(QString::fromUtf8("fluentLineEdit"));
        fluentLineEdit->setGeometry(QRect(230, 40, 161, 41));
        fluentSpinBox = new FluentSpinBox(fluentGroupBox_9);
        fluentSpinBox->setObjectName(QString::fromUtf8("fluentSpinBox"));
        fluentSpinBox->setGeometry(QRect(40, 110, 141, 41));
        fluentDoubleSpinBox = new FluentDoubleSpinBox(fluentGroupBox_9);
        fluentDoubleSpinBox->setObjectName(QString::fromUtf8("fluentDoubleSpinBox"));
        fluentDoubleSpinBox->setGeometry(QRect(230, 110, 151, 41));
        fluentGroupBox_10 = new FluentGroupBox(centralwidget);
        fluentGroupBox_10->setObjectName(QString::fromUtf8("fluentGroupBox_10"));
        fluentGroupBox_10->setGeometry(QRect(20, 730, 441, 121));
        fluentGroupBox_10->setFontSize(14);
        fluentGroupBox_10->setShowTitle(true);
        fluentProgressBar = new FluentProgressBar(fluentGroupBox_10);
        fluentProgressBar->setObjectName(QString::fromUtf8("fluentProgressBar"));
        fluentProgressBar->setGeometry(QRect(20, 30, 381, 31));
        fluentProgressBar->setLineWidth(13.000000000000000);
        fluentProgressBar->setIsLoop(true);
        fluentProgressBar->setMoveSpeed(1.000000000000000);
        fluentProgressBar->setSliderLen(0.250000000000000);
        fluentProgressBar_2 = new FluentProgressBar(fluentGroupBox_10);
        fluentProgressBar_2->setObjectName(QString::fromUtf8("fluentProgressBar_2"));
        fluentProgressBar_2->setGeometry(QRect(20, 80, 381, 31));
        fluentProgressBar_2->setValue(50);
        fluentProgressBar_2->setLineWidth(13.000000000000000);
        fluentProgressBar_2->setIsLoop(false);
        fluentProgressBar_2->setMoveSpeed(1.000000000000000);
        fluentProgressBar_2->setSliderLen(0.250000000000000);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        fluentGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Button", nullptr));
        fluentIconToggleButton_2->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton_2->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentIconToggleButton->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentPushButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentGroupBox_8->setTitle(QCoreApplication::translate("MainWindow", "SpinBox", nullptr));
        fluentGroupBox_9->setTitle(QCoreApplication::translate("MainWindow", "LineEdit&ComBox", nullptr));
        fluentLineEdit->setText(QCoreApplication::translate("MainWindow", "test\346\265\213\350\257\225", nullptr));
        fluentGroupBox_10->setTitle(QCoreApplication::translate("MainWindow", "ProgressBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
