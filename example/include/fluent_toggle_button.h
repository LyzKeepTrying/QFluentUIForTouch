#pragma once
#include <QAbstractButton>
#include <QPropertyAnimation>

class FluentToggleButton : public QAbstractButton {
    Q_OBJECT
    Q_PROPERTY(double thumbPosition READ thumbPosition WRITE setThumbPosition)
    Q_PROPERTY(QColor thumbColor READ thumbColor WRITE setThumbColor)

public:
    explicit FluentToggleButton(QWidget* parent = nullptr);
    QSize sizeHint() const override;

    // FluentUI特有属性
    void setAccentColor(const QColor& color);
    double thumbPosition() const;
    QColor thumbColor() const;

protected:
    void paintEvent(QPaintEvent* event) override;
    void enterEvent(QEvent* event) override;
    void leaveEvent(QEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;

public slots:
    void setThumbPosition(double pos);
    void setThumbColor(const QColor& color);
    void animateToggle(bool checked);

private:
    void updateThumbPosition();

    // Fluent设计参数
    bool m_hovered = false;
    QColor m_accentColor = QColor(0, 120, 215); // 默认强调色
    QColor m_backgroundOff = QColor(0xCCCCCC);
    QColor m_backgroundOn = QColor(0, 120, 215, 128);
    QColor m_thumbColor = Qt::white;

    double m_thumbPosition = 0;
    QPropertyAnimation* m_thumbAnim;
};
