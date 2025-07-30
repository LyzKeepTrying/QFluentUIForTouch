#include "fluent_ui_plugin_collection.h"
#include "fluent_toggle_button.h"
#include "fluent_push_button.h"

#include <QtCore/qplugin.h>


/* FluentToggleButtonPlugin */

FluentToggleButtonPlugin::FluentToggleButtonPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentToggleButtonPlugin::isContainer() const {
    return false;
}

bool FluentToggleButtonPlugin::isInitialized() const {
    return is_initialized_;
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
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentPushButtonPlugin */

FluentPushButtonPlugin::FluentPushButtonPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentPushButtonPlugin::isContainer() const {
    return false;
}

bool FluentPushButtonPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentPushButtonPlugin::icon() const {
    return QIcon();
}

QString FluentPushButtonPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentPushButton" name="fluentPushButton">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentPushButtonPlugin::includeFile() const {
    return "fluent_push_button.h";
}

QString FluentPushButtonPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentPushButtonPlugin::name() const {
    return "FluentPushButton";
}

QString FluentPushButtonPlugin::toolTip() const {
    return "Fluent Design Push Button";
}

QString FluentPushButtonPlugin::whatsThis() const {
    return {};
}

QWidget* FluentPushButtonPlugin::createWidget(QWidget* parent) {
    return new FluentPushButton(parent);
}

void FluentPushButtonPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}


