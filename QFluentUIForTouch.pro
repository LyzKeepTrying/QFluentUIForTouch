TEMPLATE   = subdirs
CONFIG    += ordered

# 子项目顺序：先插件再 example
SUBDIRS    = fluent_ui_plugin \
             example

# 保证 example 在插件编译完成后再编译
example.depends = fluent_ui_plugin
