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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "fluent_circle_spin_box.h"
#include "fluent_combo_box.h"
#include "fluent_double_spin_box.h"
#include "fluent_icon_push_button.h"
#include "fluent_icon_toggle_button.h"
#include "fluent_line_edit.h"
#include "fluent_line_spin_box.h"
#include "fluent_progress_bar.h"
#include "fluent_push_button.h"
#include "fluent_slider.h"
#include "fluent_spin_box.h"
#include "fluent_text.h"
#include "fluent_toggle_button.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    FluentToggleButton *fluentToggleButton;
    FluentPushButton *fluentPushButton;
    FluentIconPushButton *fluentIconPushButton;
    FluentIconToggleButton *fluentIconToggleButton;
    FluentLineEdit *fluentLineEdit;
    FluentSpinBox *fluentSpinBox;
    FluentDoubleSpinBox *fluentDoubleSpinBox;
    FluentCircleSpinBox *fluentCircleSpinBox;
    FluentLineSpinBox *fluentLineSpinBox;
    FluentSlider *fluentSlider;
    FluentSlider *fluentSlider_2;
    FluentLineSpinBox *fluentLineSpinBox_2;
    FluentProgressBar *fluentProgressBar;
    FluentIconPushButton *fluentIconPushButton_2;
    FluentIconToggleButton *fluentIconToggleButton_2;
    FluentCircleSpinBox *fluentCircleSpinBox_2;
    FluentComboBox *fluentComboBox;
    FluentProgressBar *fluentProgressBar_2;
    FluentText *fluentText;
    FluentToggleButton *fluentToggleButton_2;
    FluentText *fluentText_2;
    FluentText *fluentText_3;
    FluentText *fluentText_4;
    FluentText *fluentText_5;
    FluentText *fluentText_6;
    FluentText *fluentText_7;
    FluentText *fluentText_8;
    FluentText *fluentText_9;
    FluentLineSpinBox *fluentLineSpinBox_3;
    FluentText *fluentText_10;
    FluentText *fluentText_11;
    FluentText *fluentText_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(711, 1365);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fluentToggleButton = new FluentToggleButton(centralwidget);
        fluentToggleButton->setObjectName(QString::fromUtf8("fluentToggleButton"));
        fluentToggleButton->setGeometry(QRect(300, 50, 71, 31));
        fluentToggleButton->setCheckable(true);
        fluentToggleButton->setChecked(false);
        fluentToggleButton->setThumbRadius(12.000000000000000);
        fluentPushButton = new FluentPushButton(centralwidget);
        fluentPushButton->setObjectName(QString::fromUtf8("fluentPushButton"));
        fluentPushButton->setGeometry(QRect(300, 110, 91, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/dog.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentPushButton->setIcon(icon);
        fluentPushButton->setIconSize(QSize(20, 20));
        fluentIconPushButton = new FluentIconPushButton(centralwidget);
        fluentIconPushButton->setObjectName(QString::fromUtf8("fluentIconPushButton"));
        fluentIconPushButton->setGeometry(QRect(290, 170, 81, 81));
        fluentIconPushButton->setIcon(icon);
        fluentIconPushButton->setIconTopMargin(0);
        fluentIconPushButton->setIconTextSpace(8);
        fluentIconPushButton->setTextIsOustside(true);
        fluentIconToggleButton = new FluentIconToggleButton(centralwidget);
        fluentIconToggleButton->setObjectName(QString::fromUtf8("fluentIconToggleButton"));
        fluentIconToggleButton->setGeometry(QRect(420, 280, 61, 61));
        fluentIconToggleButton->setIcon(icon);
        fluentIconToggleButton->setChecked(true);
        fluentIconToggleButton->setAutoExclusive(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/cat.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentIconToggleButton->setToggledIcon(icon1);
        fluentLineEdit = new FluentLineEdit(centralwidget);
        fluentLineEdit->setObjectName(QString::fromUtf8("fluentLineEdit"));
        fluentLineEdit->setGeometry(QRect(300, 390, 161, 41));
        fluentSpinBox = new FluentSpinBox(centralwidget);
        fluentSpinBox->setObjectName(QString::fromUtf8("fluentSpinBox"));
        fluentSpinBox->setGeometry(QRect(300, 470, 141, 41));
        fluentDoubleSpinBox = new FluentDoubleSpinBox(centralwidget);
        fluentDoubleSpinBox->setObjectName(QString::fromUtf8("fluentDoubleSpinBox"));
        fluentDoubleSpinBox->setGeometry(QRect(300, 550, 141, 41));
        fluentCircleSpinBox = new FluentCircleSpinBox(centralwidget);
        fluentCircleSpinBox->setObjectName(QString::fromUtf8("fluentCircleSpinBox"));
        fluentCircleSpinBox->setGeometry(QRect(290, 630, 141, 121));
        fluentCircleSpinBox->setValue(50);
        fluentCircleSpinBox->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox->setArcWidth(12.000000000000000);
        fluentCircleSpinBox->setShowCursor(true);
        fluentCircleSpinBox->setMaxArcLen(300);
        fluentCircleSpinBox->setArcRectAdjust(15);
        fluentCircleSpinBox->setThumbIsPressed(false);
        fluentLineSpinBox = new FluentLineSpinBox(centralwidget);
        fluentLineSpinBox->setObjectName(QString::fromUtf8("fluentLineSpinBox"));
        fluentLineSpinBox->setGeometry(QRect(260, 860, 331, 51));
        fluentLineSpinBox->setMaximum(10);
        fluentLineSpinBox->setValue(3);
        fluentLineSpinBox->setThumbRadius(14.000000000000000);
        fluentLineSpinBox->setLineWidth(12.000000000000000);
        fluentLineSpinBox->setPaintStep(true);
        fluentSlider = new FluentSlider(centralwidget);
        fluentSlider->setObjectName(QString::fromUtf8("fluentSlider"));
        fluentSlider->setGeometry(QRect(230, 990, 341, 31));
        fluentSlider->setValue(15);
        fluentSlider->setOrientation(Qt::Horizontal);
        fluentSlider->setTickPosition(QSlider::NoTicks);
        fluentSlider->setThumbRadius(14.000000000000000);
        fluentSlider->setLineWidth(12.000000000000000);
        fluentSlider->setThumbIsPressed(false);
        fluentSlider_2 = new FluentSlider(centralwidget);
        fluentSlider_2->setObjectName(QString::fromUtf8("fluentSlider_2"));
        fluentSlider_2->setGeometry(QRect(620, 930, 71, 151));
        fluentSlider_2->setMaximum(5);
        fluentSlider_2->setValue(2);
        fluentSlider_2->setOrientation(Qt::Vertical);
        fluentSlider_2->setTickPosition(QSlider::NoTicks);
        fluentSlider_2->setThumbRadius(14.000000000000000);
        fluentSlider_2->setLineWidth(12.000000000000000);
        fluentSlider_2->setThumbIsPressed(false);
        fluentSlider_2->setPaintStep(true);
        fluentLineSpinBox_2 = new FluentLineSpinBox(centralwidget);
        fluentLineSpinBox_2->setObjectName(QString::fromUtf8("fluentLineSpinBox_2"));
        fluentLineSpinBox_2->setGeometry(QRect(260, 790, 331, 51));
        fluentLineSpinBox_2->setValue(88);
        fluentLineSpinBox_2->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_2->setLineWidth(12.000000000000000);
        fluentLineSpinBox_2->setDirectionState(Qt::Horizontal);
        fluentProgressBar = new FluentProgressBar(centralwidget);
        fluentProgressBar->setObjectName(QString::fromUtf8("fluentProgressBar"));
        fluentProgressBar->setGeometry(QRect(240, 1120, 331, 31));
        fluentProgressBar->setLineWidth(13.000000000000000);
        fluentProgressBar->setIsLoop(true);
        fluentProgressBar->setMoveSpeed(1.000000000000000);
        fluentProgressBar->setSliderLen(0.250000000000000);
        fluentIconPushButton_2 = new FluentIconPushButton(centralwidget);
        fluentIconPushButton_2->setObjectName(QString::fromUtf8("fluentIconPushButton_2"));
        fluentIconPushButton_2->setGeometry(QRect(420, 180, 61, 61));
        fluentIconPushButton_2->setIcon(icon);
        fluentIconPushButton_2->setIconTopMargin(-6);
        fluentIconPushButton_2->setIconTextSpace(0);
        fluentIconPushButton_2->setTextIsOustside(false);
        fluentIconToggleButton_2 = new FluentIconToggleButton(centralwidget);
        fluentIconToggleButton_2->setObjectName(QString::fromUtf8("fluentIconToggleButton_2"));
        fluentIconToggleButton_2->setGeometry(QRect(290, 270, 81, 81));
        fluentIconToggleButton_2->setIcon(icon);
        fluentIconToggleButton_2->setChecked(false);
        fluentIconToggleButton_2->setAutoExclusive(false);
        fluentIconToggleButton_2->setIconTextSpace(8);
        fluentIconToggleButton_2->setToggledIcon(icon1);
        fluentIconToggleButton_2->setTextIsOustside(true);
        fluentCircleSpinBox_2 = new FluentCircleSpinBox(centralwidget);
        fluentCircleSpinBox_2->setObjectName(QString::fromUtf8("fluentCircleSpinBox_2"));
        fluentCircleSpinBox_2->setGeometry(QRect(460, 630, 141, 121));
        fluentCircleSpinBox_2->setMaximum(9);
        fluentCircleSpinBox_2->setValue(2);
        fluentCircleSpinBox_2->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox_2->setArcWidth(12.000000000000000);
        fluentCircleSpinBox_2->setShowCursor(true);
        fluentCircleSpinBox_2->setMaxArcLen(300);
        fluentCircleSpinBox_2->setArcRectAdjust(15);
        fluentCircleSpinBox_2->setThumbIsPressed(false);
        fluentCircleSpinBox_2->setPaintStep(true);
        fluentComboBox = new FluentComboBox(centralwidget);
        fluentComboBox->setObjectName(QString::fromUtf8("fluentComboBox"));
        fluentComboBox->setGeometry(QRect(240, 1240, 141, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fluentComboBox->sizePolicy().hasHeightForWidth());
        fluentComboBox->setSizePolicy(sizePolicy);
        fluentComboBox->setEditable(false);
        fluentComboBox->setFrame(true);
        fluentComboBox->setModelColumn(0);
        fluentProgressBar_2 = new FluentProgressBar(centralwidget);
        fluentProgressBar_2->setObjectName(QString::fromUtf8("fluentProgressBar_2"));
        fluentProgressBar_2->setGeometry(QRect(240, 1170, 331, 31));
        fluentProgressBar_2->setValue(50);
        fluentProgressBar_2->setLineWidth(13.000000000000000);
        fluentProgressBar_2->setIsLoop(false);
        fluentProgressBar_2->setMoveSpeed(1.000000000000000);
        fluentProgressBar_2->setSliderLen(0.250000000000000);
        fluentText = new FluentText(centralwidget);
        fluentText->setObjectName(QString::fromUtf8("fluentText"));
        fluentText->setGeometry(QRect(80, 50, 171, 24));
        fluentText->setFontSize(16);
        fluentToggleButton_2 = new FluentToggleButton(centralwidget);
        fluentToggleButton_2->setObjectName(QString::fromUtf8("fluentToggleButton_2"));
        fluentToggleButton_2->setGeometry(QRect(410, 50, 71, 31));
        fluentToggleButton_2->setCheckable(true);
        fluentToggleButton_2->setChecked(true);
        fluentToggleButton_2->setThumbRadius(12.000000000000000);
        fluentText_2 = new FluentText(centralwidget);
        fluentText_2->setObjectName(QString::fromUtf8("fluentText_2"));
        fluentText_2->setGeometry(QRect(80, 120, 131, 24));
        fluentText_2->setFontSize(16);
        fluentText_3 = new FluentText(centralwidget);
        fluentText_3->setObjectName(QString::fromUtf8("fluentText_3"));
        fluentText_3->setGeometry(QRect(80, 200, 181, 24));
        fluentText_3->setFontSize(16);
        fluentText_4 = new FluentText(centralwidget);
        fluentText_4->setObjectName(QString::fromUtf8("fluentText_4"));
        fluentText_4->setGeometry(QRect(80, 290, 181, 24));
        fluentText_4->setFontSize(16);
        fluentText_5 = new FluentText(centralwidget);
        fluentText_5->setObjectName(QString::fromUtf8("fluentText_5"));
        fluentText_5->setGeometry(QRect(80, 400, 181, 24));
        fluentText_5->setFontSize(16);
        fluentText_6 = new FluentText(centralwidget);
        fluentText_6->setObjectName(QString::fromUtf8("fluentText_6"));
        fluentText_6->setGeometry(QRect(80, 480, 181, 24));
        fluentText_6->setFontSize(16);
        fluentText_7 = new FluentText(centralwidget);
        fluentText_7->setObjectName(QString::fromUtf8("fluentText_7"));
        fluentText_7->setGeometry(QRect(80, 560, 181, 24));
        fluentText_7->setFontSize(16);
        fluentText_8 = new FluentText(centralwidget);
        fluentText_8->setObjectName(QString::fromUtf8("fluentText_8"));
        fluentText_8->setGeometry(QRect(80, 660, 181, 24));
        fluentText_8->setFontSize(16);
        fluentText_9 = new FluentText(centralwidget);
        fluentText_9->setObjectName(QString::fromUtf8("fluentText_9"));
        fluentText_9->setGeometry(QRect(80, 800, 181, 24));
        fluentText_9->setFontSize(16);
        fluentLineSpinBox_3 = new FluentLineSpinBox(centralwidget);
        fluentLineSpinBox_3->setObjectName(QString::fromUtf8("fluentLineSpinBox_3"));
        fluentLineSpinBox_3->setGeometry(QRect(630, 680, 51, 221));
        fluentLineSpinBox_3->setMaximum(5);
        fluentLineSpinBox_3->setValue(3);
        fluentLineSpinBox_3->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_3->setLineWidth(12.000000000000000);
        fluentLineSpinBox_3->setDirectionState(Qt::Vertical);
        fluentLineSpinBox_3->setPaintStep(true);
        fluentText_10 = new FluentText(centralwidget);
        fluentText_10->setObjectName(QString::fromUtf8("fluentText_10"));
        fluentText_10->setGeometry(QRect(80, 990, 181, 24));
        fluentText_10->setFontSize(16);
        fluentText_11 = new FluentText(centralwidget);
        fluentText_11->setObjectName(QString::fromUtf8("fluentText_11"));
        fluentText_11->setGeometry(QRect(80, 1120, 181, 24));
        fluentText_11->setFontSize(16);
        fluentText_12 = new FluentText(centralwidget);
        fluentText_12->setObjectName(QString::fromUtf8("fluentText_12"));
        fluentText_12->setGeometry(QRect(80, 1240, 181, 24));
        fluentText_12->setFontSize(16);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 711, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        fluentPushButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentIconPushButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentIconToggleButton->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentLineEdit->setText(QCoreApplication::translate("MainWindow", "test\346\265\213\350\257\225", nullptr));
        fluentIconPushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentIconToggleButton_2->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton_2->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentText->setText(QCoreApplication::translate("MainWindow", "FluentToggleButton", nullptr));
        fluentText_2->setText(QCoreApplication::translate("MainWindow", "FluentPushButton", nullptr));
        fluentText_3->setText(QCoreApplication::translate("MainWindow", "FluentIconPushButton", nullptr));
        fluentText_4->setText(QCoreApplication::translate("MainWindow", "FluentIconToggleButton", nullptr));
        fluentText_5->setText(QCoreApplication::translate("MainWindow", "FluentLineEdit", nullptr));
        fluentText_6->setText(QCoreApplication::translate("MainWindow", "FluentSpinBox", nullptr));
        fluentText_7->setText(QCoreApplication::translate("MainWindow", "FluentDoubleSpinBox", nullptr));
        fluentText_8->setText(QCoreApplication::translate("MainWindow", "FluentCircleSpinBox", nullptr));
        fluentText_9->setText(QCoreApplication::translate("MainWindow", "FluentLineSpinBox", nullptr));
        fluentText_10->setText(QCoreApplication::translate("MainWindow", "FluentSlider", nullptr));
        fluentText_11->setText(QCoreApplication::translate("MainWindow", "FluentProgressBar", nullptr));
        fluentText_12->setText(QCoreApplication::translate("MainWindow", "FluentComboBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
