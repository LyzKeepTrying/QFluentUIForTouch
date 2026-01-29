#include "fluent_calendar_picker.h"

#include <QPainter>
#include <QMouseEvent>
#include <QDate>
#include <QFontMetrics>
#include <QKeyEvent>
#include <QApplication>
#include <QLocale>
#include <QStyleOption>
#include <QPainterPath>

FluentCalendarPicker::FluentCalendarPicker(QWidget* parent)
    : QWidget(parent)
{
    //setAttribute(Qt::WA_OpaquePaintEvent);


    m_today = QDate::currentDate();
    m_currentMonth = QDate(m_today.year(), m_today.month(), 1);
    m_selectedDate = QDate(); // none by default

    // sensible min/max default
    m_minDate = QDate(1900, 1, 1);
    m_maxDate = QDate(2999, 12, 31);

    setContentsMargins(k_margin, k_margin, k_margin, k_margin);

    updateGrid();
}

QSize FluentCalendarPicker::sizeHint() const {
    // default reasonable size
    return QSize(360, 320);
}

QSize FluentCalendarPicker::minimumSizeHint() const {
    return QSize(240, 200);
}

void FluentCalendarPicker::setDate(const QDate& d) {
    if (!d.isValid() || !isDateEnabled(d)) return;
    if (m_selectedDate == d) return;
    m_selectedDate = d;
    // ensure displayed month fits selected
    setCurrentMonth(QDate(d.year(), d.month(), 1));
    update();
    emit dateChanged(m_selectedDate);
}

void FluentCalendarPicker::setCurrentMonth(const QDate& monthShown) {
    if (!monthShown.isValid()) return;
    QDate newMonth(monthShown.year(), monthShown.month(), 1);
    if (m_currentMonth == newMonth) return;
    m_currentMonth = newMonth;
    updateGrid();
    update();
}

void FluentCalendarPicker::showNextMonth() {
    setCurrentMonth(m_currentMonth.addMonths(1));
}

void FluentCalendarPicker::showPreviousMonth() {
    setCurrentMonth(m_currentMonth.addMonths(-1));
}

void FluentCalendarPicker::resizeEvent(QResizeEvent* /*event*/) {
    m_headerRect = headerRect();
    m_weekdaysRect = weekdaysRect();
    m_gridRect = gridRect();
}

QRect FluentCalendarPicker::headerRect() const {
    return QRect(k_margin, k_margin, width() - 2*k_margin, getHeaderHeight());
}

QRect FluentCalendarPicker::weekdaysRect() const {
    QRect hr = headerRect();
    return QRect(hr.left(), hr.bottom(), hr.width(), getWeekdayHeight());
}

QRect FluentCalendarPicker::gridRect() const {
    QRect wr = weekdaysRect();
    int top = wr.bottom();
    int h = height() - top - k_margin;
    return QRect(k_margin, top, width() - 2*k_margin, h);
}

void FluentCalendarPicker::updateGrid() {
    // Fill m_grid with QDate for displayed month; leading/trailing from adjacent months as typical calendar
    const int firstDow = 1; // Qt::DayOfWeek int
    QDate firstOfMonth(m_currentMonth.year(), m_currentMonth.month(), 1);
    int startDayOfWeek = firstOfMonth.dayOfWeek(); // 1=Mon ..7=Sun

    // index of first cell for day 1
    // compute offset from firstDow
    int offset = (startDayOfWeek - firstDow);
    if (offset < 0) offset += 7;

    // date for cell (0,0)
    QDate cell0 = firstOfMonth.addDays(-offset);
    for (int r = 0; r < 6; ++r) {
        for (int c = 0; c < 7; ++c) {
            m_grid[r][c] = cell0.addDays(r*7 + c);
        }
    }
}

bool FluentCalendarPicker::isDateEnabled(const QDate& d) const {
    if (!d.isValid()) return false;
    return (d >= m_minDate && d <= m_maxDate);
}

QRect FluentCalendarPicker::cellRect(int row, int col) const {
    QRect g = m_gridRect;
    int spacing = getCellSpacing();
    int cols = 7;
    int rows = 6;

    int totalHSpacing = spacing * (cols + 1);
    int totalVSpacing = spacing * (rows + 1);

    int cellW = qMax(10, (g.width() - totalHSpacing) / cols);
    int cellH = qMax(10, (g.height() - totalVSpacing) / rows);

    int x = g.left() + spacing + col * (cellW + spacing);
    int y = g.top() + spacing + row * (cellH + spacing);

    return QRect(x, y, cellW, cellH);
}

QPoint FluentCalendarPicker::cellAtPos(const QPoint& pos) const {
    for (int r = 0; r < 6; ++r) {
        for (int c = 0; c < 7; ++c) {
            if (cellRect(r,c).contains(pos)) return QPoint(c, r);
        }
    }
    return QPoint(-1, -1);
}

void FluentCalendarPicker::paintEvent(QPaintEvent* /*event*/) {
    QPainter p(this);
    p.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing | QPainter::SmoothPixmapTransform);

    p.setPen(getBorderColor());
    p.setBrush(getBackgroundColor());
    p.drawRoundedRect(rect().adjusted(1,1,-1,-1), 8, 8);

    // header
    QRect hr = headerRect();
    p.setPen(Qt::NoPen);
    p.setBrush(getHeaderColor());
    p.drawRoundedRect(hr, 8, 8);

    // month text and nav buttons
    QFont headerFont(QFluentUI::Font::default_text_font);
    headerFont.setPixelSize(getFontSize());
    headerFont.setBold(true);
    p.setFont(headerFont);

    QString monthText = QLocale().standaloneMonthName(m_currentMonth.month()) + " " + QString::number(m_currentMonth.year());
    p.setPen(Qt::white);
    p.drawText(hr.adjusted(k_margin, 0, -k_margin, 0), Qt::AlignCenter, monthText);

    // prev/next clickable areas (draw simple chevrons)
    QRect prevRect(hr.left() + 8, hr.top() + (hr.height() - k_leftRightButtonWidth)/2, k_leftRightButtonWidth, k_leftRightButtonWidth);
    QRect nextRect(hr.right() - 8 - k_leftRightButtonWidth + 1, prevRect.top(), k_leftRightButtonWidth, k_leftRightButtonWidth);

    auto drawChevron = [&](const QRect& r, bool left) {
        QPainterPath path;
        QPointF center = r.center();
        qreal s = r.width() * 0.15;
        if (left) {
            path.moveTo(center.x() + s, center.y() - s);
            path.lineTo(center.x() - s, center.y());
            path.lineTo(center.x() + s, center.y() + s);
        } else {
            path.moveTo(center.x() - s, center.y() - s);
            path.lineTo(center.x() + s, center.y());
            path.lineTo(center.x() - s, center.y() + s);
        }
        p.setPen(QPen(Qt::white, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        p.drawPath(path);
    };

    // draw chevrons disabled state if month out of range
    bool prevEnabled = isDateEnabled(m_currentMonth.addMonths(-1).addDays(0));
    bool nextEnabled = isDateEnabled(m_currentMonth.addMonths(1).addDays(0));

    // 绘制按钮背景
    auto drawButtonBackground = [&](const QRect& r, bool isPressed, bool isEnabled) {
        if (isEnabled) {
            QPainterPath path;
            path.addEllipse(r.center(), r.width()/2 - 2, r.height()/2 - 2);

            if (isPressed) {
                // 按下状态 - 深色阴影
                p.setPen(QPen(QColor(0, 0, 0, 60), 1));
                p.setBrush(QColor(0, 0, 0, 40));
                p.drawPath(path);

                // 内部高光
                QPainterPath innerPath;
                innerPath.addEllipse(r.center(), r.width()/2 - 4, r.height()/2 - 4);
                p.setPen(Qt::NoPen);
                p.setBrush(QColor(255, 255, 255, 20));
                p.drawPath(innerPath);
            } else {
                // 正常状态 - 轻微阴影
                p.setPen(QPen(QColor(0, 0, 0, 30), 1));
                p.setBrush(QColor(0, 0, 0, 20));
                p.drawPath(path);

                // 内部高光
                QPainterPath innerPath;
                innerPath.addEllipse(r.center(), r.width()/2 - 3, r.height()/2 - 3);
                p.setPen(Qt::NoPen);
                p.setBrush(QColor(255, 255, 255, 30));
                p.drawPath(innerPath);
            }
        }
    };

    // 绘制左箭头按钮
    p.setOpacity(prevEnabled ? 1.0 : 0.4);
    if (prevEnabled) {
        drawButtonBackground(prevRect, m_mouseDownOnPrev, prevEnabled);
    }
    drawChevron(prevRect, true);

    // 绘制右箭头按钮
    p.setOpacity(nextEnabled ? 1.0 : 0.4);
    if (nextEnabled) {
        drawButtonBackground(nextRect, m_mouseDownOnNext, nextEnabled);
    }
    drawChevron(nextRect, false);

    p.setOpacity(1.0);

    // Weekdays row
    QRect wr = weekdaysRect();
    QFont weekdayFont(QFluentUI::Font::default_text_font);
    weekdayFont.setPixelSize(getFontSize());
    p.setFont(weekdayFont);
    p.setPen(getTextColor());

    // compute weekday labels based on first day of week
    for (int c = 0; c < 7; ++c) {
        int dow = 1 + c;
        if (dow > 7) dow -= 7;
        QString name = QLocale().standaloneDayName(dow, QLocale::ShortFormat);
        QRect cr = cellRect(0, c); // use cell width for positioning (top rows may be outside grid but widths match)
        QRect labelRect(cr.left(), wr.top(), cr.width(), wr.height());
        p.drawText(labelRect, Qt::AlignCenter, name);
    }

    // Draw grid cells
    QFont cellFont(QFluentUI::Font::default_text_font);
    cellFont.setPixelSize(getFontSize());
    p.setFont(cellFont);

    for (int r = 0; r < 6; ++r) {
        for (int c = 0; c < 7; ++c) {
            QDate d = m_grid[r][c];
            QRect cr = cellRect(r, c);

            bool inCurrentMonth = (d.month() == m_currentMonth.month() && d.year() == m_currentMonth.year());
            bool enabled = isDateEnabled(d);
            bool isToday = (d == m_today);
            bool isSelected = (d == m_selectedDate);

            // background for selected or hover or today
            if (isSelected) {
                p.setBrush(getSelectedColor());
                p.setPen(Qt::NoPen);
                p.drawRoundedRect(cr.adjusted(1,1,-1,-1), 8, 8);
            }
            else if (isToday) {
                // subtle outline for today
                p.setPen(QPen(getSelectedColor(), 1.5));
                p.setBrush(Qt::NoBrush);
                p.drawRoundedRect(cr.adjusted(3,3,-3,-3), 8, 8);
            }

            // day number text
            QString txt = QString::number(d.day());
            if (!enabled) {
                p.setPen(getTextColor().lighter());
            } else if (!inCurrentMonth) {
                // de-emphasize days not in month
                QColor de = getTextColor();
                de.setAlpha(110);
                p.setPen(de);
            } else if (isSelected) {
                // if selected, contrast text
                QColor fc = Qt::white;
                p.setPen(fc);
            } else {
                p.setPen(getTextColor());
            }

            p.drawText(cr, Qt::AlignCenter, txt);
        }
    }

    // store for event handling
    m_headerRect = hr;
    m_weekdaysRect = wr;
    m_gridRect = gridRect();
}

void FluentCalendarPicker::leaveEvent(QEvent* /*e*/) {
    if (m_hoverDate.isValid()) {
        m_hoverDate = QDate();
        update();
    }
}

void FluentCalendarPicker::mousePressEvent(QMouseEvent* event) {
    QPoint pos = event->pos();

    QRect hr = headerRect();
    QRect prevRect(hr.left() + 8, hr.top() + (hr.height() - k_leftRightButtonWidth)/2, k_leftRightButtonWidth, k_leftRightButtonWidth);
    QRect nextRect(hr.right() - 8 - k_leftRightButtonWidth + 1, prevRect.top(), k_leftRightButtonWidth, k_leftRightButtonWidth);

    if (prevRect.contains(pos)) {
        m_mouseDownOnPrev = true;
        update();
        return;
    }
    if (nextRect.contains(pos)) {
        m_mouseDownOnNext = true;
        update();
        return;
    }

    QPoint cell = cellAtPos(pos);
    if (cell.x() >= 0) {
        QDate d = m_grid[cell.y()][cell.x()];
        if (isDateEnabled(d)) {
            selectDate(d, true);
        }
    }
}

void FluentCalendarPicker::selectDate(const QDate& d, bool emitSignal) {
    if (!d.isValid() || !isDateEnabled(d)) return;
    m_selectedDate = d;
    // if selected month differs, update m_currentMonth
    if (m_currentMonth.month() != d.month() || m_currentMonth.year() != d.year()) {
        m_currentMonth = QDate(d.year(), d.month(), 1);
        updateGrid();
    }
    update();
    if (emitSignal) emit dateChanged(m_selectedDate);
}

void FluentCalendarPicker::mouseReleaseEvent(QMouseEvent* event) {
    QPoint pos = event->pos();
    QRect hr = headerRect();
    QRect prevRect(hr.left() + 8, hr.top() + (hr.height() - k_leftRightButtonWidth)/2, k_leftRightButtonWidth, k_leftRightButtonWidth);
    QRect nextRect(hr.right() - 8 - k_leftRightButtonWidth + 1, prevRect.top(), k_leftRightButtonWidth, k_leftRightButtonWidth);

    if (m_mouseDownOnPrev) {
        m_mouseDownOnPrev = false;
        if (prevRect.contains(pos)) {
            // click prev
            QDate candidate = m_currentMonth.addMonths(-1);
            if (isDateEnabled(candidate)) showPreviousMonth();
        }
        update();
        return;
    }
    if (m_mouseDownOnNext) {
        m_mouseDownOnNext = false;
        if (nextRect.contains(pos)) {
            QDate candidate = m_currentMonth.addMonths(1);
            if (isDateEnabled(candidate)) showNextMonth();
        }
        update();
        return;
    }
    QWidget::mouseReleaseEvent(event);
}
