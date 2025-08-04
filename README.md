# QFluentUIForTouch

QFluentUIForTouch 是一个基于 Qt 的 Fluent Design UI 插件集合，专为触摸屏设备优化设计。该项目为 Qt 应用程序提供现代化、流畅且触控友好的界面组件。

## 项目结构

- `fluent_ui_plugin/`：Fluent UI 插件源码，包含主要控件实现（如 FluentPushButton、FluentToggleButton 等）
- `example/`：示例程序，演示控件的实际效果和用法
- `build/`：编译生成的文件和插件

## 主要特性

- 基于 C++ 和 Qt 开发，性能优异，易于集成
- 支持 Fluent Design 风格的按钮、开关等控件
- 适配嵌入式触摸屏操作，交互体验更佳
- 可集成至 Qt Designer，支持可视化拖拽设计
- 易于扩展和自定义

## 当前支持控件

- **FluentPushButton**：Fluent风格按钮
- **FluentToggleButton**：Fluent风格开关按钮
- **FluentIconToggleButton**：Fluent风格方形开关
- **FluentIconPushButton**：Fluent风格方形按钮

## 快速开始

1. 克隆仓库：
   ```bash
   git clone https://github.com/LeeGouDan1/QFluentUIForTouch.git
   ```
2. 使用 Qt Creator 打开 `QFluentUIForTouch.pro` 项目文件
3. 选择合适的 Qt 版本（建议 Qt 5.15.2 及以上）
4. 构建项目，插件文件会生成在 `build/` 目录下
5. （可选）将插件复制到 Qt Designer 的插件目录，实现可视化集成

## 示例程序

`example/` 目录下包含一个演示程序，展示了各类 Fluent UI 控件的实际效果和用法。可直接在 Qt Creator 中编译运行。

## 贡献方式

欢迎提交 Issue 或 Pull Request，完善控件功能或修复问题。

## 许可证

本项目采用 MIT 许可证，详情请见 [LICENSE](LICENSE)。

