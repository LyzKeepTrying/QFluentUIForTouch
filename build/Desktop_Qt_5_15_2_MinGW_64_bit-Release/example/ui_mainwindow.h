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
#include "fluent_double_spin_box.h"
#include "fluent_icon_push_button.h"
#include "fluent_icon_toggle_button.h"
#include "fluent_line_edit.h"
#include "fluent_push_button.h"
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(486, 871);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fluentToggleButton = new FluentToggleButton(centralwidget);
        fluentToggleButton->setObjectName(QString::fromUtf8("fluentToggleButton"));
        fluentToggleButton->setGeometry(QRect(90, 50, 71, 31));
        fluentPushButton = new FluentPushButton(centralwidget);
        fluentPushButton->setObjectName(QString::fromUtf8("fluentPushButton"));
        fluentPushButton->setGeometry(QRect(90, 110, 91, 41));
        QFont font;
        font.setPointSize(11);
        fluentPushButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/dog.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentPushButton->setIcon(icon);
        fluentPushButton->setIconSize(QSize(20, 20));
        fluentIconPushButton = new FluentIconPushButton(centralwidget);
        fluentIconPushButton->setObjectName(QString::fromUtf8("fluentIconPushButton"));
        fluentIconPushButton->setGeometry(QRect(90, 180, 71, 71));
        fluentIconPushButton->setIcon(icon);
        fluentIconToggleButton = new FluentIconToggleButton(centralwidget);
        fluentIconToggleButton->setObjectName(QString::fromUtf8("fluentIconToggleButton"));
        fluentIconToggleButton->setGeometry(QRect(90, 280, 71, 71));
        fluentIconToggleButton->setIcon(icon);
        fluentIconToggleButton->setChecked(false);
        fluentIconToggleButton->setAutoExclusive(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/cat.png"), QSize(), QIcon::Normal, QIcon::Off);
        fluentIconToggleButton->setToggledIcon(icon1);
        fluentLineEdit = new FluentLineEdit(centralwidget);
        fluentLineEdit->setObjectName(QString::fromUtf8("fluentLineEdit"));
        fluentLineEdit->setGeometry(QRect(90, 380, 261, 41));
        fluentSpinBox = new FluentSpinBox(centralwidget);
        fluentSpinBox->setObjectName(QString::fromUtf8("fluentSpinBox"));
        fluentSpinBox->setGeometry(QRect(90, 450, 141, 41));
        fluentDoubleSpinBox = new FluentDoubleSpinBox(centralwidget);
        fluentDoubleSpinBox->setObjectName(QString::fromUtf8("fluentDoubleSpinBox"));
        fluentDoubleSpinBox->setGeometry(QRect(260, 450, 141, 41));
        fluentCircleSpinBox = new FluentCircleSpinBox(centralwidget);
        fluentCircleSpinBox->setObjectName(QString::fromUtf8("fluentCircleSpinBox"));
        fluentCircleSpinBox->setGeometry(QRect(90, 520, 141, 121));
        fluentCircleSpinBox->setThumbRadius(14.000000000000000);
        fluentCircleSpinBox->setArcWidth(12.000000000000000);
        fluentCircleSpinBox->setShowCursor(true);
        fluentCircleSpinBox->setMaxArcLen(300);
        fluentCircleSpinBox->setArcRectAdjust(15);
        fluentCircleSpinBox->setThumbIsPressed(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 486, 23));
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
        fluentLineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
