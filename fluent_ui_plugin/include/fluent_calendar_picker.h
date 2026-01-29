#ifndef FLUENT_CALENDAR_PICKER_H
#define FLUENT_CALENDAR_PICKER_H

#include <QWidget>
#include <QDate>
#include <QPointer>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class Q_DECL_EXPORT FluentCalendarPicker : public QWidget {
    Q_OBJECT

    // 视觉/布局属性（与您项目的 DECLARE_PROPERTY 习惯保持一致）
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, HeaderColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, SelectedColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(int, HeaderHeight, 35)
    DECLARE_PROPERTY(int, WeekdayHeight, 35)
    DECLARE_PROPERTY(int, CellSpacing, 6)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

public:
    explicit FluentCalendarPicker(QWidget* parent = nullptr);
    ~FluentCalendarPicker() override = default;

    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;

    // 日期接口
    QDate date() const { return m_selectedDate; }
    void setDate(const QDate& d);

    QDate currentMonth() const { return m_currentMonth; } // its day is ignored; used for display
    void setCurrentMonth(const QDate& monthShown);       // monthShown: any day in month

    void setMinimumDate(const QDate& d) { m_minDate = d; update(); }
    void setMaximumDate(const QDate& d) { m_maxDate = d; update(); }
    QDate minimumDate() const { return m_minDate; }
    QDate maximumDate() const { return m_maxDate; }

    void showNextMonth();
    void showPreviousMonth();

signals:
    void dateChanged(const QDate& date);

protected:
    void paintEvent(QPaintEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;
    void leaveEvent(QEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    // painting helpers
    QRect headerRect() const;
    QRect weekdaysRect() const;
    QRect gridRect() const;
    QRect cellRect(int row, int col) const; // row:0..5 col:0..6
    bool isDateEnabled(const QDate& d) const;
    QPoint cellAtPos(const QPoint& pos) const; // returns (-1,-1) if none

    void updateGrid(); // recompute cached calendar grid
    void selectDate(const QDate& d, bool emitSignal = true);

private:
    QDate m_currentMonth;   // used for display; day part ignored
    QDate m_selectedDate;   // selected date (or invalid)
    QDate m_hoverDate;      // date under mouse hover (or invalid)
    QDate m_today;          // cached today
    QDate m_minDate;
    QDate m_maxDate;

    // calendar grid cache: m_grid[row][col] = QDate
    QDate m_grid[6][7];

    // layout caching
    QRect m_headerRect;
    QRect m_weekdaysRect;
    QRect m_gridRect;

    // interaction
    bool m_mouseDownOnPrev = false;
    bool m_mouseDownOnNext = false;

    // constants
    const int k_leftRightButtonWidth = 36;
    const int k_margin = 10;
};

#endif // FLUENT_CALENDAR_PICKER_H
