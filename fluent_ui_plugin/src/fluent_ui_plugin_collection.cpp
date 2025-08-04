#include "fluent_ui_plugin_collection.h"
#include "fluent_toggle_button.h"
#include "fluent_push_button.h"
#include "fluent_icon_push_button.h"
#include "fluent_icon_toggle_button.h"
#include "fluent_line_edit.h"

#include <QtCore/qplugin.h>

/* FluentWidgetsPluginCollection */

FluentWidgetsPluginCollection::FluentWidgetsPluginCollection(QObject* parent)
    : QObject(parent)
{
    widget_list_.append(new FluentToggleButtonPlugin(this));
    widget_list_.append(new FluentPushButtonPlugin(this));
    widget_list_.append(new FluentIconPushButtonPlugin(this));
    widget_list_.append(new FluentIconToggleButtonPlugin(this));
    widget_list_.append(new FluentLineEditPlugin(this));
}

QList<QDesignerCustomWidgetInterface*> FluentWidgetsPluginCollection::customWidgets() const {
    return widget_list_;
}

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

/* FluentIconPushButtonPlugin */

FluentIconPushButtonPlugin::FluentIconPushButtonPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentIconPushButtonPlugin::isContainer() const {
    return false;
}

bool FluentIconPushButtonPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentIconPushButtonPlugin::icon() const {
    return QIcon();
}

QString FluentIconPushButtonPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentIconPushButton" name="fluentIconPushButton">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentIconPushButtonPlugin::includeFile() const {
    return "fluent_icon_push_button.h";
}

QString FluentIconPushButtonPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentIconPushButtonPlugin::name() const {
    return "FluentIconPushButton";
}

QString FluentIconPushButtonPlugin::toolTip() const {
    return "Fluent Design Icon Push Button";
}

QString FluentIconPushButtonPlugin::whatsThis() const {
    return {};
}

QWidget* FluentIconPushButtonPlugin::createWidget(QWidget* parent) {
    return new FluentIconPushButton(parent);
}

void FluentIconPushButtonPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentIconToggleButtonPlugin */

FluentIconToggleButtonPlugin::FluentIconToggleButtonPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentIconToggleButtonPlugin::isContainer() const {
    return false;
}

bool FluentIconToggleButtonPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentIconToggleButtonPlugin::icon() const {
    return QIcon();
}

QString FluentIconToggleButtonPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentIconToggleButton" name="fluentIconToggleButton">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentIconToggleButtonPlugin::includeFile() const {
    return "fluent_icon_toggle_button.h";
}

QString FluentIconToggleButtonPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentIconToggleButtonPlugin::name() const {
    return "FluentIconToggleButton";
}

QString FluentIconToggleButtonPlugin::toolTip() const {
    return "Fluent Design Icon Toggle Button";
}

QString FluentIconToggleButtonPlugin::whatsThis() const {
    return {};
}

QWidget* FluentIconToggleButtonPlugin::createWidget(QWidget* parent) {
    return new FluentIconToggleButton(parent);
}

void FluentIconToggleButtonPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentLineEditPlugin */

FluentLineEditPlugin::FluentLineEditPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentLineEditPlugin::isContainer() const {
    return false;
}

bool FluentLineEditPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentLineEditPlugin::icon() const {
    return QIcon();
}

QString FluentLineEditPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentLineEdit" name="fluentLineEdit">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentLineEditPlugin::includeFile() const {
    return "fluent_line_edit.h";
}

QString FluentLineEditPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentLineEditPlugin::name() const {
    return "FluentLineEdit";
}

QString FluentLineEditPlugin::toolTip() const {
    return "Fluent Design Line Edit";
}

QString FluentLineEditPlugin::whatsThis() const {
    return {};
}

QWidget* FluentLineEditPlugin::createWidget(QWidget* parent) {
    return new FluentLineEdit(parent);
}

void FluentLineEditPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}



