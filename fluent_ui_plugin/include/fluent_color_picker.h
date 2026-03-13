#ifndef FLUENT_COLOR_PICKER_H
#define FLUENT_COLOR_PICKER_H

#include <QWidget>
#include <QDialog>
#include <QColor>
#include <QImage>
#include <QScopedPointer>
#include <fluent_push_button.h>
#include <fluent_line_edit.h>
#include <QVector>

#include "define.h"
#include "theme.h"

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentColorPickerPopup : public QDialog {
    Q_OBJECT
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
public:
    explicit FluentColorPickerPopup(const QColor &initial = QColor(Qt::white), QWidget *parent = nullptr);
    ~FluentColorPickerPopup() override = default;

    QColor color() const { return m_color; }
    void setColor(const QColor &c);

signals:
    void colorSelected(const QColor &c);
    void colorChanged(const QColor &c);
    void aboutToClose();

protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void closeEvent(QCloseEvent *event) override;

private slots:
    void onHexEdited();

private:
    void rebuildHueWheel();
    void updateColorFromWheel(const QPoint &pos);
    void updateColorFromSV(const QPoint &pos);
    bool pointInHueRing(const QPoint &p, qreal &outAngle) const;
    bool pointInSVSquare(const QPoint &p, QPoint &outLocal) const;
    QPointF centerF() const;

    QColor m_color;
    QImage m_hueWheel; // cached hue wheel image
    QRect m_wheelRect; // where wheel is drawn
    QRect m_svRect;    // where SV square is drawn
    int m_wheelThickness;
    bool m_mouseDownOnWheel = false;
    bool m_mouseDownOnSV = false;

    FluentLineEdit *m_hexEdit;
    QColor m_previewColor;

    // helpers
    float m_h; // 0..1
    float m_s; // 0..1
    float m_v; // 0..1
};

class FLUENTUI_PLUGIN_EXPORT FluentColorPicker : public QWidget {
    Q_OBJECT

    DECLARE_PROPERTY(QColor, BackgroundColor, QFluentUI::ThemeColor::Light::area_color)
    DECLARE_PROPERTY(QColor, BorderColor, QFluentUI::ThemeColor::Light::border_color)
    DECLARE_PROPERTY(QColor, TextColor, QFluentUI::ThemeColor::Light::text_color)
    DECLARE_PROPERTY(int, FontSize, QFluentUI::Font::default_font_size)

public:
    explicit FluentColorPicker(QWidget *parent = nullptr);
    ~FluentColorPicker() override = default;

    QColor color() const { return m_color; }
    void setColor(const QColor &c);

signals:
    void colorChanged(const QColor &c);
    void colorSelected(const QColor &c);

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    QSize sizeHint() const override;

private:
    void showPopup();
    void closePopup();

private:
    QColor m_color;
    QScopedPointer<FluentColorPickerPopup> m_popup;
    bool m_isPressed = false;
};

#endif // FLUENT_COLOR_PICKER_H
