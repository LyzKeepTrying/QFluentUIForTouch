#ifndef THEME_H
#define THEME_H

#include <QColor>
#include <QFont>

namespace QFluentUI {

namespace ThemeColor {

namespace Light {

const QColor area_color = Qt::white;
const QColor text_color = Qt::black;
const QColor border_color = QColor(114, 114, 114, 114);
const QColor off_color = QColor(204, 204, 204);
const QColor on_color = QColor(0, 120, 215);

}

}

namespace Font {

const QFont default_text_font = QFont("SimHei");

}

}

#endif // THEME_H
