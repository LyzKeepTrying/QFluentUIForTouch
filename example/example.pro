QT       += core gui widgets
CONFIG   += c++17

TEMPLATE = app
TARGET   = example

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

CONFIG(release, debug|release): LIBS += -L$$PWD/../build/Desktop_Qt_5_15_2_MinGW_64_bit-Release/fluent_ui_plugin/release/ -lfluent_ui_plugin
CONFIG(debug, debug|release): LIBS += -L$$PWD/../build/Desktop_Qt_5_15_2_MinGW_64_bit-Debug/fluent_ui_plugin/debug/ -lfluent_ui_plugin

INCLUDEPATH += $$PWD/../fluent_ui_plugin/include
DEPENDPATH += $$PWD/../fluent_ui_plugin/include

RESOURCES += \
    res.qrc
