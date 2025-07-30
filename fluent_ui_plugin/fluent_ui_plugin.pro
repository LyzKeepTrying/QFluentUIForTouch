QT       += core gui widgets designer

CONFIG   += plugin c++11 debug_and_release
TEMPLATE = lib

DEFINES += FLUENTUI_PLUGIN_LIBRARY

# 头文件和源文件布局
INCLUDEPATH += $$PWD/include
SOURCES     += src/fluent_toggle_button.cpp \
               src/fluent_push_button.cpp \
               src/fluent_ui_plugin_collection.cpp
HEADERS     += include/fluent_toggle_button.h \
               include/fluent_push_button.h \
               include/fluent_ui_plugin_collection.h \
               include/define.h \
               include/theme.h

TARGET = fluent_ui_plugin

# 安装到 Qt Designer 插件目录（可选）
target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target

