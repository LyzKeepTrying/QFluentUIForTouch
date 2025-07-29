#include "fluent_toggle_button_plugin.h"
#include "fluent_toggle_button.h"
#include <QtCore/qplugin.h>

FluentToggleButtonPlugin::FluentToggleButtonPlugin(QObject* parent)
    : QObject(parent), m_initialized(false)
{}

bool FluentToggleButtonPlugin::isContainer() const {
    return false;
}

bool FluentToggleButtonPlugin::isInitialized() const {
    return m_initialized;
}

QIcon FluentToggleButtonPlugin::icon() const {
    return QIcon();
}

QString FluentToggleButtonPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentToggleButton" name="fluentToggleButton">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentToggleButtonPlugin::includeFile() const {
    return "fluent_toggle_button.h";
}

QString FluentToggleButtonPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentToggleButtonPlugin::name() const {
    return "FluentToggleButton";
}

QString FluentToggleButtonPlugin::toolTip() const {
    return "Fluent Design Toggle Button";
}

QString FluentToggleButtonPlugin::whatsThis() const {
    return {};
}

QWidget* FluentToggleButtonPlugin::createWidget(QWidget* parent) {
    return new FluentToggleButton(parent);
}

void FluentToggleButtonPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (m_initialized) return;
    m_initialized = true;
}
