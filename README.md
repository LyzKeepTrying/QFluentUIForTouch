# QFluentUIForQtDesigner

一个基于Qt的Fluent Design风格控件库，专为Qt Designer设计的插件集合。

## 功能特点

- 提供Fluent Design风格的Qt控件
- 支持在Qt Designer中直接拖放使用
- 轻量级设计，易于集成
- 支持明暗主题切换
- 现代化的UI设计风格

## 当前支持的控件

- FluentToggleButton: Fluent风格的开关按钮

## 系统要求

- Qt 5 或更高版本
- MinGW 64-bit 或 MSVC 编译器
- Windows/Linux/macOS

## 安装方法

1. 克隆仓库：

```bash
git clone https://github.com/LeeGouDan1/QFluentUIForQtDesigner.git
```

2. 编译插件：

```bash
cd QFluentUIForQtDesigner
qmake QFluentUIForQtDesigner.pro
make (或 mingw32-make / nmake)
```

3. 安装插件：
   - 将生成的插件文件(fluent_ui_plugin.dll/libfluent_ui_plugin.so)复制到Qt Designer的插件目录：
     - Windows: `%QTDIR%\plugins\designer`
     - Linux: `$QTDIR/plugins/designer`
     - macOS: `$QTDIR/plugins/designer`

## 使用方法

1. 启动Qt Designer
2. 在控件面板中找到"Fluent UI Controls"分类
3. 直接拖放控件到设计界面使用

## 在项目中使用

1. 包含头文件：

```cpp
#include <fluent_toggle_button.h>
```

2. 在.pro文件中添加：

```qmake
INCLUDEPATH += path/to/QFluentUIForQtDesigner/include
LIBS += -L path/to/library -lfluent_ui_plugin
```

## 示例

请查看`example`目录下的示例项目，展示了控件的基本用法。

## 许可证

本项目采用MIT许可证。详情请查看[LICENSE](LICENSE)文件。

## 贡献指南

欢迎提交Issue和Pull Request来帮助改进这个项目。

## 联系方式

- GitHub Issues: [提交问题](https://github.com/LeeGouDan1/QFluentUIForQtDesigner/issues)

## 致谢

感谢所有为这个项目做出贡献的开发者。

