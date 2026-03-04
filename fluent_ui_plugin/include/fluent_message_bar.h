#ifndef FLUENT_MESSAGE_BAR_H
#define FLUENT_MESSAGE_BAR_H

#include <QWidget>
#include <QTimer>
#include <QPropertyAnimation>
#include <QMap>
#include <QList>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentMessageBar : public QWidget {
    Q_OBJECT

    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BorderColor,     QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, TextColor,       QFluentUI::ThemeColor::Light::text_color)

    DECLARE_PROPERTY(int, Radius, 8)
    DECLARE_PROPERTY(int, Height, 48)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

public:
    enum class MessageType {
        Info,
        Warning,
        Error
    };
    Q_ENUM(MessageType)

    enum class Position {
        LeftTop,
        LeftBottom,
        RightTop,
        RightBottom,
        TopCenter
    };
    Q_ENUM(Position)

    explicit FluentMessageBar(QWidget* parent = nullptr);

    void showMessage(
        const QString& text,
        MessageType type = MessageType::Info,
        int durationMs = 3000,
        Position pos = Position::TopCenter
        );

    void showMessage(
        const QString& text,
        MessageType type,
        int durationMs,
        Position pos,
        QWidget* anchor
        );

protected:
    void paintEvent(QPaintEvent*) override;
    void mousePressEvent(QMouseEvent* event) override;

private:
    void updateStyleByType();
    void startShowAnimation();
    void startHideAnimation();

    QRect calcTargetRect(int index) const;
    void removeFromStack();

private:
    QString     m_text_;
    QString     m_emoji_;
    MessageType m_type_{MessageType::Info};
    Position    m_position_{Position::TopCenter};

    QRect m_ref_rect_;   // ⭐ 新增：参考区域（屏幕或 anchor）

    QTimer m_close_timer_;
    QPropertyAnimation* m_pos_anim_{nullptr};
    QPropertyAnimation* m_opacity_anim_{nullptr};

    QRect m_target_rect_;
    QRect m_close_rect_;

private:
    // ⭐ 关键：按 referenceRect + Position 管理
    static QMap<QString, QList<FluentMessageBar*>> s_instances_;
};

#endif // FLUENT_MESSAGE_BAR_H
