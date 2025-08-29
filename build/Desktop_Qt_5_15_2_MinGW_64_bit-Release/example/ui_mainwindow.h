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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(486, 899);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fluentToggleButton = new FluentToggleButton(centralwidget);
        fluentToggleButton->setObjectName(QString::fromUtf8("fluentToggleButton"));
        fluentToggleButton->setGeometry(QRect(90, 50, 71, 31));
        fluentToggleButton->setCheckable(true);
        fluentToggleButton->setChecked(false);
        fluentToggleButton->setThumbRadius(12.000000000000000);
        fluentPushButton = new FluentPushButton(centralwidget);
        fluentPushButton->setObjectName(QString::fromUtf8("fluentPushButton"));
        fluentPushButton->setGeometry(QRect(90, 110, 91, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/dog.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentPushButton->setIcon(icon);
        fluentPushButton->setIconSize(QSize(20, 20));
        fluentIconPushButton = new FluentIconPushButton(centralwidget);
        fluentIconPushButton->setObjectName(QString::fromUtf8("fluentIconPushButton"));
        fluentIconPushButton->setGeometry(QRect(80, 160, 81, 81));
        fluentIconPushButton->setIcon(icon);
        fluentIconPushButton->setIconTopMargin(0);
        fluentIconPushButton->setIconTextSpace(8);
        fluentIconPushButton->setTextIsOustside(true);
        fluentIconToggleButton = new FluentIconToggleButton(centralwidget);
        fluentIconToggleButton->setObjectName(QString::fromUtf8("fluentIconToggleButton"));
        fluentIconToggleButton->setGeometry(QRect(180, 280, 61, 61));
        fluentIconToggleButton->setIcon(icon);
        fluentIconToggleButton->setChecked(true);
        fluentIconToggleButton->setAutoExclusive(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/cat.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentIconToggleButton->setToggledIcon(icon1);
        fluentLineEdit = new FluentLineEdit(centralwidget);
        fluentLineEdit->setObjectName(QString::fromUtf8("fluentLineEdit"));
        fluentLineEdit->setGeometry(QRect(90, 380, 161, 41));
        fluentSpinBox = new FluentSpinBox(centralwidget);
        fluentSpinBox->setObjectName(QString::fromUtf8("fluentSpinBox"));
        fluentSpinBox->setGeometry(QRect(90, 450, 141, 41));
        fluentDoubleSpinBox = new FluentDoubleSpinBox(centralwidget);
        fluentDoubleSpinBox->setObjectName(QString::fromUtf8("fluentDoubleSpinBox"));
        fluentDoubleSpinBox->setGeometry(QRect(260, 450, 141, 41));
        fluentCircleSpinBox = new FluentCircleSpinBox(centralwidget);
        fluentCircleSpinBox->setObjectName(QString::fromUtf8("fluentCircleSpinBox"));
        fluentCircleSpinBox->setGeometry(QRect(90, 520, 141, 121));
        fluentCircleSpinBox->setValue(50);
        fluentCircleSpinBox->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox->setArcWidth(12.000000000000000);
        fluentCircleSpinBox->setShowCursor(true);
        fluentCircleSpinBox->setMaxArcLen(300);
        fluentCircleSpinBox->setArcRectAdjust(15);
        fluentCircleSpinBox->setThumbIsPressed(false);
        fluentLineSpinBox = new FluentLineSpinBox(centralwidget);
        fluentLineSpinBox->setObjectName(QString::fromUtf8("fluentLineSpinBox"));
        fluentLineSpinBox->setGeometry(QRect(90, 660, 301, 51));
        fluentLineSpinBox->setMaximum(10);
        fluentLineSpinBox->setThumbRadius(14.000000000000000);
        fluentLineSpinBox->setLineWidth(12.000000000000000);
        fluentLineSpinBox->setPaintStep(true);
        fluentSlider = new FluentSlider(centralwidget);
        fluentSlider->setObjectName(QString::fromUtf8("fluentSlider"));
        fluentSlider->setGeometry(QRect(90, 740, 301, 31));
        fluentSlider->setTickPosition(QSlider::NoTicks);
        fluentSlider->setThumbRadius(14.000000000000000);
        fluentSlider->setLineWidth(12.000000000000000);
        fluentSlider->setThumbIsPressed(false);
        fluentSlider_2 = new FluentSlider(centralwidget);
        fluentSlider_2->setObjectName(QString::fromUtf8("fluentSlider_2"));
        fluentSlider_2->setGeometry(QRect(360, 40, 71, 291));
        fluentSlider_2->setMaximum(5);
        fluentSlider_2->setOrientation(Qt::Vertical);
        fluentSlider_2->setTickPosition(QSlider::NoTicks);
        fluentSlider_2->setThumbRadius(14.000000000000000);
        fluentSlider_2->setLineWidth(12.000000000000000);
        fluentSlider_2->setThumbIsPressed(false);
        fluentSlider_2->setPaintStep(true);
        fluentLineSpinBox_2 = new FluentLineSpinBox(centralwidget);
        fluentLineSpinBox_2->setObjectName(QString::fromUtf8("fluentLineSpinBox_2"));
        fluentLineSpinBox_2->setGeometry(QRect(280, 40, 51, 291));
        fluentLineSpinBox_2->setThumbRadius(14.000000000000000);
        fluentLineSpinBox_2->setLineWidth(12.000000000000000);
        fluentLineSpinBox_2->setDirectionState(Qt::Vertical);
        fluentProgressBar = new FluentProgressBar(centralwidget);
        fluentProgressBar->setObjectName(QString::fromUtf8("fluentProgressBar"));
        fluentProgressBar->setGeometry(QRect(100, 800, 321, 31));
        fluentProgressBar->setLineWidth(13.000000000000000);
        fluentProgressBar->setIsLoop(true);
        fluentProgressBar->setMoveSpeed(1.000000000000000);
        fluentProgressBar->setSliderLen(0.250000000000000);
        fluentIconPushButton_2 = new FluentIconPushButton(centralwidget);
        fluentIconPushButton_2->setObjectName(QString::fromUtf8("fluentIconPushButton_2"));
        fluentIconPushButton_2->setGeometry(QRect(180, 170, 61, 61));
        fluentIconPushButton_2->setIcon(icon);
        fluentIconPushButton_2->setIconTopMargin(-6);
        fluentIconPushButton_2->setIconTextSpace(0);
        fluentIconPushButton_2->setTextIsOustside(false);
        fluentIconToggleButton_2 = new FluentIconToggleButton(centralwidget);
        fluentIconToggleButton_2->setObjectName(QString::fromUtf8("fluentIconToggleButton_2"));
        fluentIconToggleButton_2->setGeometry(QRect(80, 270, 81, 81));
        fluentIconToggleButton_2->setIcon(icon);
        fluentIconToggleButton_2->setChecked(false);
        fluentIconToggleButton_2->setAutoExclusive(false);
        fluentIconToggleButton_2->setIconTextSpace(8);
        fluentIconToggleButton_2->setToggledIcon(icon1);
        fluentIconToggleButton_2->setTextIsOustside(true);
        fluentCircleSpinBox_2 = new FluentCircleSpinBox(centralwidget);
        fluentCircleSpinBox_2->setObjectName(QString::fromUtf8("fluentCircleSpinBox_2"));
        fluentCircleSpinBox_2->setGeometry(QRect(250, 520, 141, 121));
        fluentCircleSpinBox_2->setMaximum(9);
        fluentCircleSpinBox_2->setValue(0);
        fluentCircleSpinBox_2->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox_2->setArcWidth(12.000000000000000);
        fluentCircleSpinBox_2->setShowCursor(true);
        fluentCircleSpinBox_2->setMaxArcLen(300);
        fluentCircleSpinBox_2->setArcRectAdjust(15);
        fluentCircleSpinBox_2->setThumbIsPressed(false);
        fluentCircleSpinBox_2->setPaintStep(true);
        fluentComboBox = new FluentComboBox(centralwidget);
        fluentComboBox->setObjectName(QString::fromUtf8("fluentComboBox"));
        fluentComboBox->setGeometry(QRect(290, 380, 141, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fluentComboBox->sizePolicy().hasHeightForWidth());
        fluentComboBox->setSizePolicy(sizePolicy);
        fluentComboBox->setEditable(false);
        fluentComboBox->setFrame(true);
        fluentComboBox->setModelColumn(0);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 486, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        fluentComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        fluentPushButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentIconPushButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentIconToggleButton->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentLineEdit->setText(QString());
        fluentIconPushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        fluentIconToggleButton_2->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\213\227", nullptr));
        fluentIconToggleButton_2->setToggledText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\214\253", nullptr));
        fluentComboBox->setCurrentText(QString());
        fluentComboBox->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
