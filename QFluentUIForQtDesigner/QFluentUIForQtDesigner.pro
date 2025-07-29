QT       += core gui widgets designer

CONFIG   += plugin c++11 debug_and_release
TEMPLATE = lib

# 当编译本插件时，定义 FLUENTUI_PLUGIN_LIBRARY
DEFINES += FLUENTUI_PLUGIN_LIBRARY

INCLUDEPATH += $$PWD/include
SOURCES     += src/fluent_toggle_button.cpp \
               src/fluent_toggle_button_plugin.cpp
HEADERS     += include/fluent_toggle_button.h \
               include/define.h \
               include/fluent_toggle_button_plugin.h \
               include/theme.h

TARGET = fluent_ui_plugin

#DESTDIR = $$[QT_INSTALL_PLUGINS]/designer
target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target
