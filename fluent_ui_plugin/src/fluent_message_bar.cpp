#include "fluent_message_bar.h"

#include <QPainter>
#include <QApplication>
#include <QScreen>
#include <QGraphicsOpacityEffect>
#include <QMouseEvent>

static constexpr int kMargin = 16;
static constexpr int kSpacing = 8;
static constexpr int kCloseSize = 16;

QMap<QString, QList<FluentMessageBar*>> FluentMessageBar::s_instances_;

static QString makeKey(const QRect& rect, FluentMessageBar::Position pos) {
    return QString("%1_%2_%3_%4_%5")
    .arg(rect.x()).arg(rect.y())
        .arg(rect.width()).arg(rect.height())
        .arg(int(pos));
}

FluentMessageBar::FluentMessageBar(QWidget* parent)
    : QWidget(parent)
{
    setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setAttribute(Qt::WA_ShowWithoutActivating);
    setFixedHeight(getHeight());

    connect(&m_close_timer_, &QTimer::timeout,
            this, &FluentMessageBar::startHideAnimation);

    auto* opacity = new QGraphicsOpacityEffect(this);
    opacity->setOpacity(0.0);
    setGraphicsEffect(opacity);

    m_opacity_anim_ = new QPropertyAnimation(opacity, "opacity", this);
    m_opacity_anim_->setDuration(200);

    m_pos_anim_ = new QPropertyAnimation(this, "pos", this);
    m_pos_anim_->setDuration(250);
    m_pos_anim_->setEasingCurve(QEasingCurve::OutCubic);
}

/* ----------- 无 anchor 版本 ----------- */
void FluentMessageBar::showMessage(
    const QString& text,
    MessageType type,
    int durationMs,
    Position pos
    ) {
    QScreen* screen = QGuiApplication::primaryScreen();
    m_ref_rect_ = screen->availableGeometry();

    showMessage(text, type, durationMs, pos, nullptr);
}

/* ----------- anchor 版本（核心） ----------- */
void FluentMessageBar::showMessage(
    const QString& text,
    MessageType type,
    int durationMs,
    Position pos,
    QWidget* anchor
    ) {
    m_text_ = text;
    m_type_ = type;
    m_position_ = pos;

    updateStyleByType();

    if (anchor && anchor->isVisible()) {
        QPoint tl = anchor->mapToGlobal(QPoint(0, 0));
        m_ref_rect_ = QRect(tl, anchor->size());
    } else {
        QScreen* screen = QGuiApplication::primaryScreen();
        m_ref_rect_ = screen->availableGeometry();
    }

    int w = qMin(300, m_ref_rect_.width() - 2 * kMargin);
    setFixedWidth(w);

    QString key = makeKey(m_ref_rect_, pos);
    auto& list = s_instances_[key];

    int index = list.size();
    list.append(this);

    m_target_rect_ = calcTargetRect(index);
    move(m_target_rect_.topLeft() + QPoint(0, -height() - 10));

    show();
    raise();
    startShowAnimation();

    if (durationMs > 0)
        m_close_timer_.start(durationMs);
}

QRect FluentMessageBar::calcTargetRect(int index) const {
    int x = kMargin;
    int y = kMargin + index * (height() + kSpacing);

    switch (m_position_) {
    case Position::LeftBottom:
        y = m_ref_rect_.height() - kMargin - height()
            - index * (height() + kSpacing);
        break;
    case Position::RightTop:
        x = m_ref_rect_.width() - width() - kMargin;
        break;
    case Position::RightBottom:
        x = m_ref_rect_.width() - width() - kMargin;
        y = m_ref_rect_.height() - kMargin - height()
            - index * (height() + kSpacing);
        break;
    case Position::TopCenter:
        x = (m_ref_rect_.width() - width()) / 2;
        break;
    default:
        break;
    }

    QPoint global = m_ref_rect_.topLeft() + QPoint(x, y);
    return QRect(global, size());
}

void FluentMessageBar::startShowAnimation() {
    m_pos_anim_->setStartValue(pos());
    m_pos_anim_->setEndValue(m_target_rect_.topLeft());
    m_opacity_anim_->setStartValue(0.0);
    m_opacity_anim_->setEndValue(1.0);
    m_pos_anim_->start();
    m_opacity_anim_->start();
}

void FluentMessageBar::startHideAnimation() {
    m_close_timer_.stop();
    removeFromStack();

    m_pos_anim_->setEndValue(pos() + QPoint(0, -10));
    m_opacity_anim_->setEndValue(0.0);

    connect(m_opacity_anim_, &QPropertyAnimation::finished,
            this, &QWidget::deleteLater);

    m_pos_anim_->start();
    m_opacity_anim_->start();
}

void FluentMessageBar::removeFromStack() {
    QString key = makeKey(m_ref_rect_, m_position_);
    auto& list = s_instances_[key];

    int idx = list.indexOf(this);
    if (idx < 0) return;

    list.removeAt(idx);

    for (int i = idx; i < list.size(); ++i) {
        QRect r = list[i]->calcTargetRect(i);
        list[i]->m_pos_anim_->setEndValue(r.topLeft());
        list[i]->m_pos_anim_->start();
    }
}

void FluentMessageBar::updateStyleByType() {
    switch (m_type_) {
    case MessageType::Info:
        m_emoji_ = "ℹ";
        break;
    case MessageType::Warning:
        setBackgroundColor(QColor(255, 243, 205));
        setBorderColor(QColor(255, 193, 7));
        m_emoji_ = "⚠";
        break;
    case MessageType::Error:
        setBackgroundColor(QColor(253, 236, 234));
        setBorderColor(QColor(220, 53, 69));
        m_emoji_ = "⛔";
        break;
    }
}

void FluentMessageBar::mousePressEvent(QMouseEvent* event) {
    if (m_close_rect_.contains(event->pos())) {
        startHideAnimation();
        return;
    }
    QWidget::mousePressEvent(event);
}

void FluentMessageBar::paintEvent(QPaintEvent*) {
    QPainter p(this);
    p.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    p.setBrush(getBackgroundColor());
    p.setPen(getBorderColor());
    p.drawRoundedRect(rect().adjusted(1, 1, -1, -1),
                      getRadius(), getRadius());

    QFont font(QFluentUI::Font::default_text_font);
    font.setPixelSize(getFontSize());
    p.setFont(font);
    p.setPen(getTextColor());

    int x = 16;
    p.drawText(QRect(x, 0, 24, height()),
               Qt::AlignVCenter, m_emoji_);
    x += 28;

    p.drawText(QRect(x, 0, width() - x - 32, height()),
               Qt::AlignVCenter | Qt::AlignLeft, m_text_);

    m_close_rect_ = QRect(width() - 24,
                          (height() - kCloseSize) / 2,
                          kCloseSize, kCloseSize);
    p.drawText(m_close_rect_, Qt::AlignCenter, "×");
}
