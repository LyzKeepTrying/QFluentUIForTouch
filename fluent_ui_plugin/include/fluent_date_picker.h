#ifndef FLUENT_DATE_PICKER_H
#define FLUENT_DATE_PICKER_H

#include <QWidget>
#include <QDate>
#include <QPushButton>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFocusEvent>

#include "fluent_calendar_picker.h"
#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentDatePickerPopup : public QDialog {
    Q_OBJECT

public:
    explicit FluentDatePickerPopup(QWidget* parent = nullptr);
    ~FluentDatePickerPopup() override = default;

    FluentCalendarPicker* calendar() const { return m_calendar; }

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void closeEvent(QCloseEvent* event) override;

signals:
    void aboutToClose();

private:
    FluentCalendarPicker* m_calendar;
};

class FLUENTUI_PLUGIN_EXPORT FluentDatePicker : public QWidget {
    Q_OBJECT

    DECLARE_PROPERTY(QString, PlaceholderText, "请选择一个日期")
    DECLARE_PROPERTY(QString, DateFormat, "yyyy-MM-dd")
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, PressedColor, QFluentUI::ThemeColor::Light::area_color.darker(110))
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

public:
    explicit FluentDatePicker(QWidget* parent = nullptr);
    ~FluentDatePicker() override = default;

    QDate date() const { return m_selectedDate; }
    void setDate(const QDate& date);

    void setMinimumDate(const QDate& minDate);
    void setMaximumDate(const QDate& maxDate);
    QDate minimumDate() const;
    QDate maximumDate() const;

    QSize sizeHint() const override;

signals:
    void dateChanged(const QDate& date);

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    void updateDisplayText();
    void showCalendarPopup();
    void closeCalendarPopup();

private:
    QDate m_selectedDate;
    QDate m_minDate;
    QDate m_maxDate;
    QString m_displayText;

    QScopedPointer<FluentDatePickerPopup> m_popup;
    bool m_isPressed = false;
};
#endif // FLUENT_DATE_PICKER_H
