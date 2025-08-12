#include "fluent_ui_plugin_collection.h"
#include "fluent_toggle_button.h"
#include "fluent_push_button.h"
#include "fluent_icon_push_button.h"
#include "fluent_icon_toggle_button.h"
#include "fluent_line_edit.h"
#include "fluent_spin_box.h"
#include "fluent_double_spin_box.h"
#include "fluent_circle_spin_box.h"
#include "fluent_line_spin_box.h"

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
    widget_list_.append(new FluentSpinBoxPlugin(this));
    widget_list_.append(new FluentDoubleSpinBoxPlugin(this));
    widget_list_.append(new FluentCircleSpinBoxPlugin(this));
    widget_list_.append(new FluentLineSpinBoxPlugin(this));
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

/* FluentSpinBoxPlugin */

FluentSpinBoxPlugin::FluentSpinBoxPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentSpinBoxPlugin::isContainer() const {
    return false;
}

bool FluentSpinBoxPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentSpinBoxPlugin::icon() const {
    return QIcon();
}

QString FluentSpinBoxPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentSpinBox" name="fluentSpinBox">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentSpinBoxPlugin::includeFile() const {
    return "fluent_spin_box.h";
}

QString FluentSpinBoxPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentSpinBoxPlugin::name() const {
    return "FluentSpinBox";
}

QString FluentSpinBoxPlugin::toolTip() const {
    return "Fluent Design SpinBox";
}

QString FluentSpinBoxPlugin::whatsThis() const {
    return {};
}

QWidget* FluentSpinBoxPlugin::createWidget(QWidget* parent) {
    return new FluentSpinBox(parent);
}

void FluentSpinBoxPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentDoubleSpinBoxPlugin */

FluentDoubleSpinBoxPlugin::FluentDoubleSpinBoxPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentDoubleSpinBoxPlugin::isContainer() const {
    return false;
}

bool FluentDoubleSpinBoxPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentDoubleSpinBoxPlugin::icon() const {
    return QIcon();
}

QString FluentDoubleSpinBoxPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentDoubleSpinBox" name="fluentDoubleSpinBox">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentDoubleSpinBoxPlugin::includeFile() const {
    return "fluent_double_spin_box.h";
}

QString FluentDoubleSpinBoxPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentDoubleSpinBoxPlugin::name() const {
    return "FluentDoubleSpinBox";
}

QString FluentDoubleSpinBoxPlugin::toolTip() const {
    return "Fluent Design DoubleSpinBox";
}

QString FluentDoubleSpinBoxPlugin::whatsThis() const {
    return {};
}

QWidget* FluentDoubleSpinBoxPlugin::createWidget(QWidget* parent) {
    return new FluentDoubleSpinBox(parent);
}

void FluentDoubleSpinBoxPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentCircleSpinBoxPlugin */

FluentCircleSpinBoxPlugin::FluentCircleSpinBoxPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentCircleSpinBoxPlugin::isContainer() const {
    return false;
}

bool FluentCircleSpinBoxPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentCircleSpinBoxPlugin::icon() const {
    return QIcon();
}

QString FluentCircleSpinBoxPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentCircleSpinBox" name="fluentCircleSpinBox">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentCircleSpinBoxPlugin::includeFile() const {
    return "fluent_circle_spin_box.h";
}

QString FluentCircleSpinBoxPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentCircleSpinBoxPlugin::name() const {
    return "FluentCircleSpinBox";
}

QString FluentCircleSpinBoxPlugin::toolTip() const {
    return "Fluent Design CircleSpinBox";
}

QString FluentCircleSpinBoxPlugin::whatsThis() const {
    return {};
}

QWidget* FluentCircleSpinBoxPlugin::createWidget(QWidget* parent) {
    return new FluentCircleSpinBox(parent);
}

void FluentCircleSpinBoxPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentLineSpinBoxPlugin */

FluentLineSpinBoxPlugin::FluentLineSpinBoxPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentLineSpinBoxPlugin::isContainer() const {
    return false;
}

bool FluentLineSpinBoxPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentLineSpinBoxPlugin::icon() const {
    return QIcon();
}

QString FluentLineSpinBoxPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentLineSpinBox" name="fluentLineSpinBox">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentLineSpinBoxPlugin::includeFile() const {
    return "fluent_line_spin_box.h";
}

QString FluentLineSpinBoxPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentLineSpinBoxPlugin::name() const {
    return "FluentLineSpinBox";
}

QString FluentLineSpinBoxPlugin::toolTip() const {
    return "Fluent Design LineSpinBox";
}

QString FluentLineSpinBoxPlugin::whatsThis() const {
    return {};
}

QWidget* FluentLineSpinBoxPlugin::createWidget(QWidget* parent) {
    return new FluentLineSpinBox(parent);
}

void FluentLineSpinBoxPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}


