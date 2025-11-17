QT       += core gui widgets designer

CONFIG   += plugin c++11 debug_and_release
TEMPLATE = lib

DEFINES += FLUENTUI_PLUGIN_LIBRARY

# 头文件和源文件布局
INCLUDEPATH += $$PWD/include
SOURCES     += src/fluent_toggle_button.cpp \
               src/fluent_title_bar.cpp \
               src/fluent_check_box.cpp \
               src/fluent_scroll_area.cpp \
               src/fluent_scroll_bar.cpp \
               src/fluent_tab_bar.cpp \
               src/fluent_tab_widget.cpp \
               src/fluent_group_box.cpp \
               src/fluent_combo_box.cpp \
               src/fluent_progress_bar.cpp \
               src/fluent_slider.cpp \
               src/fluent_spin_box.cpp \
               src/fluent_double_spin_box.cpp \
               src/fluent_circle_spin_box.cpp \
               src/fluent_line_spin_box.cpp \
               src/fluent_icon_push_button.cpp \
               src/fluent_icon_toggle_button.cpp \
               src/fluent_line_edit.cpp \
               src/fluent_push_button.cpp \
               src/fluent_text.cpp \
               src/fluent_ui_plugin_collection.cpp

HEADERS     += include/fluent_toggle_button.h \
               include/fluent_check_box.h \
               include/fluent_combo_box.h \
               include/fluent_group_box.h \
               include/fluent_icon_push_button.h \
               include/fluent_icon_toggle_button.h \
               include/fluent_push_button.h \
               include/fluent_scroll_bar.h \
               include/fluent_slider.h \
               include/fluent_spin_box.h \
               include/fluent_double_spin_box.h \
               include/fluent_circle_spin_box.h \
               include/fluent_line_spin_box.h \
               include/fluent_tab_bar.h \
               include/fluent_tab_widget.h \
               include/fluent_title_bar.h \
               include/fluent_ui_plugin_collection.h \
               include/fluent_line_edit.h \
               include/fluent_progress_bar.h \
               include/fluent_text.h \
               include/fluent_scroll_area.h \
               include/define.h \
               include/theme.h

TARGET = fluent_ui_plugin

# 安装到 Qt Designer 插件目录（可选）
target.path = $$[QT_INSTALL_PLUGINS]/designer
#DESTDIR = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target

