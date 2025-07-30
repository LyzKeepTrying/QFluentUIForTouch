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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "fluent_push_button.h"
#include "fluent_toggle_button.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    FluentToggleButton *fluentToggleButton;
    FluentToggleButton *fluentToggleButton_2;
    FluentPushButton *fluentPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fluentToggleButton = new FluentToggleButton(centralwidget);
        fluentToggleButton->setObjectName(QString::fromUtf8("fluentToggleButton"));
        fluentToggleButton->setGeometry(QRect(190, 260, 181, 101));
        fluentToggleButton->setProperty("checkable", QVariant(true));
        fluentToggleButton->setProperty("checked", QVariant(false));
        fluentToggleButton_2 = new FluentToggleButton(centralwidget);
        fluentToggleButton_2->setObjectName(QString::fromUtf8("fluentToggleButton_2"));
        fluentToggleButton_2->setGeometry(QRect(480, 370, 71, 31));
        fluentPushButton = new FluentPushButton(centralwidget);
        fluentPushButton->setObjectName(QString::fromUtf8("fluentPushButton"));
        fluentPushButton->setGeometry(QRect(210, 420, 80, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
