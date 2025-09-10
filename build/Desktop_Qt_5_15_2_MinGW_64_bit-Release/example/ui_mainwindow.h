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
#include "fluent_group_box.h"
#include "fluent_icon_push_button.h"
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
    FluentGroupBox *fluentGroupBox_2;
    FluentPushButton *fluentPushButton;
    FluentGroupBox *fluentGroupBox_3;
    FluentIconPushButton *fluentIconPushButton_2;
    FluentGroupBox *fluentGroupBox_4;
    FluentIconToggleButton *fluentIconToggleButton_2;
    FluentIconToggleButton *fluentIconToggleButton;
    FluentGroupBox *fluentGroupBox_5;
    FluentLineEdit *fluentLineEdit;
    FluentGroupBox *fluentGroupBox_6;
    FluentSpinBox *fluentSpinBox;
    FluentGroupBox *fluentGroupBox_7;
    FluentCircleSpinBox *fluentCircleSpinBox;
    FluentCircleSpinBox *fluentCircleSpinBox_2;
    FluentGroupBox *fluentGroupBox_8;
    FluentLineSpinBox *fluentLineSpinBox_2;
    FluentLineSpinBox *fluentLineSpinBox;
    FluentLineSpinBox *fluentLineSpinBox_3;
    FluentGroupBox *fluentGroupBox_9;
    FluentComboBox *fluentComboBox;
    FluentGroupBox *fluentGroupBox_10;
    FluentProgressBar *fluentProgressBar;
    FluentProgressBar *fluentProgressBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(738, 901);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fluentGroupBox = new FluentGroupBox(centralwidget);
        fluentGroupBox->setObjectName(QString::fromUtf8("fluentGroupBox"));
        fluentGroupBox->setGeometry(QRect(10, 10, 241, 71));
        fluentGroupBox->setFontSize(14);
        fluentGroupBox->setShowTitle(true);
        fluentToggleButton = new FluentToggleButton(fluentGroupBox);
        fluentToggleButton->setObjectName(QString::fromUtf8("fluentToggleButton"));
        fluentToggleButton->setGeometry(QRect(40, 30, 71, 31));
        fluentToggleButton->setCheckable(true);
        fluentToggleButton->setChecked(false);
        fluentToggleButton->setThumbRadius(12.000000000000000);
        fluentToggleButton_2 = new FluentToggleButton(fluentGroupBox);
        fluentToggleButton_2->setObjectName(QString::fromUtf8("fluentToggleButton_2"));
        fluentToggleButton_2->setGeometry(QRect(140, 30, 71, 31));
        fluentToggleButton_2->setCheckable(true);
        fluentToggleButton_2->setChecked(true);
        fluentToggleButton_2->setThumbRadius(12.000000000000000);
        fluentGroupBox_2 = new FluentGroupBox(centralwidget);
        fluentGroupBox_2->setObjectName(QString::fromUtf8("fluentGroupBox_2"));
        fluentGroupBox_2->setGeometry(QRect(10, 140, 151, 81));
        fluentGroupBox_2->setFontSize(14);
        fluentGroupBox_2->setShowTitle(true);
        fluentPushButton = new FluentPushButton(fluentGroupBox_2);
        fluentPushButton->setObjectName(QString::fromUtf8("fluentPushButton"));
        fluentPushButton->setGeometry(QRect(20, 30, 91, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/dog.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentPushButton->setIcon(icon);
        fluentPushButton->setIconSize(QSize(20, 20));
        fluentGroupBox_3 = new FluentGroupBox(centralwidget);
        fluentGroupBox_3->setObjectName(QString::fromUtf8("fluentGroupBox_3"));
        fluentGroupBox_3->setGeometry(QRect(260, 130, 161, 101));
        fluentGroupBox_3->setFontSize(14);
        fluentGroupBox_3->setShowTitle(true);
        fluentIconPushButton_2 = new FluentIconPushButton(fluentGroupBox_3);
        fluentIconPushButton_2->setObjectName(QString::fromUtf8("fluentIconPushButton_2"));
        fluentIconPushButton_2->setGeometry(QRect(20, 30, 61, 61));
        fluentIconPushButton_2->setIcon(icon);
        fluentIconPushButton_2->setIconTopMargin(-6);
        fluentIconPushButton_2->setIconTextSpace(0);
        fluentIconPushButton_2->setTextIsOustside(false);
        fluentGroupBox_4 = new FluentGroupBox(centralwidget);
        fluentGroupBox_4->setObjectName(QString::fromUtf8("fluentGroupBox_4"));
        fluentGroupBox_4->setGeometry(QRect(490, 10, 231, 111));
        fluentGroupBox_4->setFontSize(14);
        fluentGroupBox_4->setShowTitle(true);
        fluentIconToggleButton_2 = new FluentIconToggleButton(fluentGroupBox_4);
        fluentIconToggleButton_2->setObjectName(QString::fromUtf8("fluentIconToggleButton_2"));
        fluentIconToggleButton_2->setGeometry(QRect(40, 20, 81, 81));
        fluentIconToggleButton_2->setIcon(icon);
        fluentIconToggleButton_2->setChecked(false);
        fluentIconToggleButton_2->setAutoExclusive(false);
        fluentIconToggleButton_2->setIconTextSpace(8);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/cat.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentIconToggleButton_2->setToggledIcon(icon1);
        fluentIconToggleButton_2->setTextIsOustside(true);
        fluentIconToggleButton = new FluentIconToggleButton(fluentGroupBox_4);
        fluentIconToggleButton->setObjectName(QString::fromUtf8("fluentIconToggleButton"));
        fluentIconToggleButton->setGeometry(QRect(130, 30, 61, 61));
        fluentIconToggleButton->setIcon(icon);
        fluentIconToggleButton->setChecked(true);
        fluentIconToggleButton->setAutoExclusive(false);
        fluentIconToggleButton->setToggledIcon(icon1);
        fluentGroupBox_5 = new FluentGroupBox(centralwidget);
        fluentGroupBox_5->setObjectName(QString::fromUtf8("fluentGroupBox_5"));
        fluentGroupBox_5->setGeometry(QRect(270, 10, 211, 111));
        fluentGroupBox_5->setFontSize(14);
        fluentGroupBox_5->setShowTitle(true);
        fluentLineEdit = new FluentLineEdit(fluentGroupBox_5);
        fluentLineEdit->setObjectName(QString::fromUtf8("fluentLineEdit"));
        fluentLineEdit->setGeometry(QRect(20, 50, 161, 41));
        fluentGroupBox_6 = new FluentGroupBox(centralwidget);
        fluentGroupBox_6->setObjectName(QString::fromUtf8("fluentGroupBox_6"));
        fluentGroupBox_6->setGeometry(QRect(490, 240, 191, 101));
        fluentGroupBox_6->setFontSize(14);
        fluentGroupBox_6->setShowTitle(true);
        fluentSpinBox = new FluentSpinBox(fluentGroupBox_6);
        fluentSpinBox->setObjectName(QString::fromUtf8("fluentSpinBox"));
        fluentSpinBox->setGeometry(QRect(20, 40, 141, 41));
        fluentGroupBox_7 = new FluentGroupBox(centralwidget);
        fluentGroupBox_7->setObjectName(QString::fromUtf8("fluentGroupBox_7"));
        fluentGroupBox_7->setGeometry(QRect(10, 250, 281, 151));
        fluentGroupBox_7->setFontSize(14);
        fluentGroupBox_7->setShowTitle(true);
        fluentCircleSpinBox = new FluentCircleSpinBox(fluentGroupBox_7);
        fluentCircleSpinBox->setObjectName(QString::fromUtf8("fluentCircleSpinBox"));
        fluentCircleSpinBox->setGeometry(QRect(0, 30, 141, 121));
        fluentCircleSpinBox->setValue(50);
        fluentCircleSpinBox->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox->setArcWidth(12.000000000000000);
        fluentCircleSpinBox->setShowCursor(true);
        fluentCircleSpinBox->setMaxArcLen(300);
        fluentCircleSpinBox->setArcRectAdjust(15);
        fluentCircleSpinBox->setThumbIsPressed(false);
        fluentCircleSpinBox_2 = new FluentCircleSpinBox(fluentGroupBox_7);
        fluentCircleSpinBox_2->setObjectName(QString::fromUtf8("fluentCircleSpinBox_2"));
        fluentCircleSpinBox_2->setGeometry(QRect(130, 30, 141, 121));
        fluentCircleSpinBox_2->setMaximum(9);
        fluentCircleSpinBox_2->setValue(2);
        fluentCircleSpinBox_2->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox_2->setArcWidth(12.000000000000000);
        fluentCircleSpinBox_2->setShowCursor(true);
        fluentCircleSpinBox_2->setMaxArcLen(300);
        fluentCircleSpinBox_2->setArcRectAdjust(15);
        fluentCircleSpinBox_2->setThumbIsPressed(false);
        fluentCircleSpinBox_2->setPaintStep(true);
        fluentGroupBox_8 = new FluentGroupBox(centralwidget);
        fluentGroupBox_8->setObjectName(QString::fromUtf8("fluentGroupBox_8"));
        fluentGroupBox_8->setGeometry(QRect(10, 420, 441, 221));
        fluentGroupBox_8->setFontSize(14);
        fluentGroupBox_8->setShowTitle(true);
        fluentLineSpinBox_2 = new FluentLineSpinBox(fluentGroupBox_8);
        fluentLineSpinBox_2->setObjectName(QString::fromUtf8("fluentLineSpinBox_2"));
        fluentLineSpinBox_2->setGeometry(QRect(10, 40, 331, 51));
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
        fluentLineSpinBox_3->setGeometry(QRect(370, 30, 51, 191));
        fluentLineSpinBox_3->setMaximum(5);
        fluentLineSpinBox_3->setValue(3);
        fluentLineSpinBox_3->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_3->setLineWidth(12.000000000000000);
        fluentLineSpinBox_3->setDirectionState(Qt::Vertical);
        fluentLineSpinBox_3->setPaintStep(true);
        fluentGroupBox_9 = new FluentGroupBox(centralwidget);
        fluentGroupBox_9->setObjectName(QString::fromUtf8("fluentGroupBox_9"));
        fluentGroupBox_9->setGeometry(QRect(490, 130, 181, 81));
        fluentGroupBox_9->setFontSize(14);
        fluentGroupBox_9->setShowTitle(true);
        fluentComboBox = new FluentComboBox(fluentGroupBox_9);
        fluentComboBox->setObjectName(QString::fromUtf8("fluentComboBox"));
        fluentComboBox->setGeometry(QRect(20, 30, 141, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fluentComboBox->sizePolicy().hasHeightForWidth());
        fluentComboBox->setSizePolicy(sizePolicy);
        fluentComboBox->setEditable(false);
        fluentComboBox->setFrame(true);
        fluentComboBox->setModelColumn(0);
        fluentGroupBox_10 = new FluentGroupBox(centralwidget);
        fluentGroupBox_10->setObjectName(QString::fromUtf8("fluentGroupBox_10"));
        fluentGroupBox_10->setGeometry(QRect(10, 660, 371, 121));
        fluentGroupBox_10->setFontSize(14);
        fluentGroupBox_10->setShowTitle(true);
        fluentProgressBar = new FluentProgressBar(fluentGroupBox_10);
        fluentProgressBar->setObjectName(QString::fromUtf8("fluentProgressBar"));
        fluentProgressBar->setGeometry(QRect(20, 30, 331, 31));
        fluentProgressBar->setLineWidth(13.000000000000000);
        fluentProgressBar->setIsLoop(true);
        fluentProgressBar->setMoveSpeed(1.000000000000000);
        fluentProgressBar->setSliderLen(0.250000000000000);
        fluentProgressBar_2 = new FluentProgressBar(fluentGroupBox_10);
        fluentProgressBar_2->setObjectName(QString::fromUtf8("fluentProgressBar_2"));
        fluentProgressBar_2->setGeometry(QRect(20, 80, 331, 31));
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
        fluentGroupBox->setTitle(QCoreApplication::translate("MainWindow", "FluentToggleButton", nullptr));
        fluentGroupBox_2->setTitle(QCoreApplication::translate("MainWindow", "FluentPushButton", nullptr));
        fluentPushButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentGroupBox_3->setTitle(QCoreApplication::translate("MainWindow", "FluentIconPushButton", nullptr));
        fluentIconPushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentGroupBox_4->setTitle(QCoreApplication::translate("MainWindow", "FluentIconToggleButton", nullptr));
        fluentIconToggleButton_2->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton_2->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentIconToggleButton->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentGroupBox_5->setTitle(QCoreApplication::translate("MainWindow", "FluentLineEdit", nullptr));
        fluentLineEdit->setText(QCoreApplication::translate("MainWindow", "test\346\265\213\350\257\225", nullptr));
        fluentGroupBox_6->setTitle(QCoreApplication::translate("MainWindow", "FluentSpinBox", nullptr));
        fluentGroupBox_7->setTitle(QCoreApplication::translate("MainWindow", "FluentCircleSpinBox", nullptr));
        fluentGroupBox_8->setTitle(QCoreApplication::translate("MainWindow", "FluentLineSpinBox", nullptr));
        fluentGroupBox_9->setTitle(QCoreApplication::translate("MainWindow", "FluentComboBox", nullptr));
        fluentGroupBox_10->setTitle(QCoreApplication::translate("MainWindow", "FluentProgressBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
