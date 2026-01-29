#ifndef FLUENT_TIME_PICKER_H
#define FLUENT_TIME_PICKER_H

#include <QWidget>
#include <QTime>
#include <QPushButton>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFocusEvent>
#include <QScopedPointer>

#include "fluent_clock_picker.h"
#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentTimePickerPopup : public QDialog {
    Q_OBJECT
public:
    explicit FluentTimePickerPopup(QWidget* parent = nullptr);
    ~FluentTimePickerPopup() override = default;

    FluentClockPicker* clock() const { return m_clock; }

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void closeEvent(QCloseEvent* event) override;

signals:
    void aboutToClose();

private:
    FluentClockPicker* m_clock;
};

class FLUENTUI_PLUGIN_EXPORT FluentTimePicker : public QWidget {
    Q_OBJECT

    // 属性（仿照 DatePicker）
    DECLARE_PROPERTY(QString, PlaceholderText, "请选择一个时间")
    DECLARE_PROPERTY(QString, TimeFormat, "HH:mm:ss")
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, PressedColor, QFluentUI::ThemeColor::Light::area_color.darker(110))
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

public:
    explicit FluentTimePicker(QWidget* parent = nullptr);
    ~FluentTimePicker() override = default;

    QTime time() const { return m_selectedTime; }
    void setTime(const QTime& t);

    void setMinimumTime(const QTime& t);
    void setMaximumTime(const QTime& t);
    QTime minimumTime() const;
    QTime maximumTime() const;

    QSize sizeHint() const override;

signals:
    void timeChanged(const QTime& t);

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    void updateDisplayText();
    void showClockPopup();
    void closeClockPopup();

private:
    QTime m_selectedTime;
    QTime m_minTime;
    QTime m_maxTime;
    QString m_displayText;

    QScopedPointer<FluentTimePickerPopup> m_popup;
    bool m_isPressed = false;
};

#endif // FLUENT_TIME_PICKER_H
