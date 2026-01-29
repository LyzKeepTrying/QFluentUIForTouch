#ifndef FLUENT_DATETIME_PICKER_H
#define FLUENT_DATETIME_PICKER_H

#include <QWidget>
#include <QDateTime>
#include <QDialog>
#include <QVBoxLayout>
#include <QScopedPointer>

#include "fluent_calendar_picker.h"
#include "fluent_clock_picker.h"
#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentDateTimePickerPopup : public QDialog {
    Q_OBJECT
public:
    explicit FluentDateTimePickerPopup(QWidget* parent = nullptr);
    ~FluentDateTimePickerPopup() override = default;

    FluentCalendarPicker* calendar() const { return m_calendar; }
    FluentClockPicker* clock() const { return m_clock; }

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void closeEvent(QCloseEvent* event) override;

signals:
    void aboutToClose();

private:
    FluentCalendarPicker* m_calendar;
    FluentClockPicker* m_clock;
};

class FLUENTUI_PLUGIN_EXPORT FluentDateTimePicker : public QWidget {
    Q_OBJECT

    DECLARE_PROPERTY(QString, PlaceholderText, "请选择日期时间")
    DECLARE_PROPERTY(QString, DateTimeFormat, "yyyy-MM-dd HH:mm:ss")
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, PressedColor, QFluentUI::ThemeColor::Light::area_color.darker(110))
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

public:
    explicit FluentDateTimePicker(QWidget* parent = nullptr);
    ~FluentDateTimePicker() override = default;

    QDateTime dateTime() const { return m_dateTime; }
    void setDateTime(const QDateTime& dt);

    QSize sizeHint() const override;

signals:
    void dateTimeChanged(const QDateTime& dt);

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    void updateDisplayText();
    void showPopup();
    void closePopup();

private:
    QDateTime m_dateTime;
    QString m_displayText;

    QScopedPointer<FluentDateTimePickerPopup> m_popup;
    bool m_isPressed = false;
};

#endif // FLUENT_DATETIME_PICKER_H
