#ifndef FLUENT_CLOCK_PICKER_H
#define FLUENT_CLOCK_PICKER_H

#include <QWidget>
#include <QTime>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENT_CLOCK_PICKER_EXPORT Q_DECL_IMPORT
#endif

class Q_DECL_EXPORT FluentClockPicker : public QWidget {
    Q_OBJECT

    // visual properties (match your DECLARE_PROPERTY convention)
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(QColor, SelectedColor, QFluentUI::ThemeColor::Light::on_color)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)
    DECLARE_PROPERTY(int, Spacing, 0)
    DECLARE_PROPERTY(int, ButtonSize, 30) // arrow button size

public:
    explicit FluentClockPicker(QWidget* parent = nullptr);
    ~FluentClockPicker() override = default;

    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;

    QTime time() const { return m_time; }
    void setTime(const QTime& t); // seconds supported

signals:
    void timeChanged(const QTime& t);

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
private:
    enum class Column { Hour = 0, Minute = 1, Second = 2, None = -1 };
    enum class Arrow { Up, Down, None };

    QRect columnRect(Column col) const;
    QRect upButtonRect(Column col) const;
    QRect downButtonRect(Column col) const;
    QRect valueRect(Column col) const;

    Column hitColumnAt(const QPoint& p) const;
    Arrow hitArrowAt(const QPoint& p, Column& outCol) const;

    void changeValue(Column col, int delta);

private:
    // model
    QTime m_time;

    // pressed state
    Column m_pressedCol = Column::None;
    Arrow m_pressedArrow = Arrow::None;

    // constants
    const int k_margin = 8;
};

#endif // FLUENT_CLOCK_PICKER_H
