QT       += core gui widgets designer

CONFIG   += plugin c++11 debug_and_release
TEMPLATE = lib

DEFINES += FLUENTUI_PLUGIN_LIBRARY

# 头文件和源文件布局
INCLUDEPATH += $$PWD/include
SOURCES     += src/fluent_toggle_button.cpp \
               src/fluent_spin_box.cpp \
               src/fluent_double_spin_box.cpp \
               src/fluent_circle_spin_box.cpp \
               src/fluent_icon_push_button.cpp \
               src/fluent_icon_toggle_button.cpp \
               src/fluent_line_edit.cpp \
               src/fluent_push_button.cpp \
               src/fluent_ui_plugin_collection.cpp
HEADERS     += include/fluent_toggle_button.h \
               include/fluent_icon_push_button.h \
               include/fluent_icon_toggle_button.h \
               include/fluent_push_button.h \
               include/fluent_spin_box.h \
               include/fluent_double_spin_box.h \
               include/fluent_circle_spin_box.h \
               include/fluent_ui_plugin_collection.h \
               include/fluent_line_edit.h \
               include/define.h \
               include/theme.h

TARGET = fluent_ui_plugin

# 安装到 Qt Designer 插件目录（可选）
target.path = $$[QT_INSTALL_PLUGINS]/designer
#DESTDIR = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target

