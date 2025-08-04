#ifndef THEME_H
#define THEME_H

#include <QColor>
#include <QFont>

namespace QFluentUI {

namespace ThemeColor {

namespace Light {

const QColor area_color = Qt::white;
const QColor text_color = Qt::black;
const QColor border_color = QColor(128, 128, 128, 100);
const QColor off_color = QColor(204, 204, 204);
const QColor on_color = QColor(0, 144, 0);

}

}

namespace Font {

const QFont default_text_font = QFont("SimHei");
const int default_font_size = 14;

}

}

#endif // THEME_H
