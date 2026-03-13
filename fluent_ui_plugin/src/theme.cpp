#include "theme.h"

namespace QFluentUI {

Theme& Theme::instance() {
    static Theme instance;
    return instance;
}

Theme::Theme() : QObject(nullptr) {
    // Initialize with default values
}

void Theme::setAreaColor(const QColor& color) {
    if (m_areaColor != color) {
        m_areaColor = color;
        emit themeChanged();
    }
}

void Theme::setTextColor(const QColor& color) {
    if (m_textColor != color) {
        m_textColor = color;
        emit themeChanged();
    }
}

void Theme::setBorderColor(const QColor& color) {
    if (m_borderColor != color) {
        m_borderColor = color;
        emit themeChanged();
    }
}

void Theme::setOffColor(const QColor& color) {
    if (m_offColor != color) {
        m_offColor = color;
        emit themeChanged();
    }
}

void Theme::setOnColor(const QColor& color) {
    if (m_onColor != color) {
        m_onColor = color;
        emit themeChanged();
    }
}

void Theme::setDefaultTextFont(const QFont& font) {
    if (m_defaultTextFont != font) {
        m_defaultTextFont = font;
        emit themeChanged();
    }
}

void Theme::setDefaultFontSize(int size) {
    if (m_defaultFontSize != size) {
        m_defaultFontSize = size;
        emit themeChanged();
    }
}

}