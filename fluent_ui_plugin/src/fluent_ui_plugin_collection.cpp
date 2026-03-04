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
#include "fluent_slider.h"
#include "fluent_progress_bar.h"
#include "fluent_combo_box.h"
#include "fluent_text.h"
#include "fluent_group_box.h"
#include "fluent_tab_widget.h"
#include "fluent_check_box.h"
#include "fluent_title_bar.h"
#include "fluent_table_widget.h"
#include "fluent_calendar_picker.h"
#include "fluent_date_picker.h"
#include "fluent_clock_picker.h"
#include "fluent_time_picker.h"
#include "fluent_datetime_picker.h"
#include "fluent_pie_chart.h"
#include "fluent_bar_chart.h"
#include "fluent_line_chart.h"

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
    widget_list_.append(new FluentSliderPlugin(this));
    widget_list_.append(new FluentProgressBarPlugin(this));
    widget_list_.append(new FluentComboBoxPlugin(this));
    widget_list_.append(new FluentTextPlugin(this));
    widget_list_.append(new FluentGroupBoxPlugin(this));
    widget_list_.append(new FluentTabWidgetPlugin(this));
    widget_list_.append(new FluentTabBarPlugin(this));
    widget_list_.append(new FluentCheckBoxPlugin(this));
    widget_list_.append(new FluentTitleBarPlugin(this));
    widget_list_.append(new FluentTableWidgetPlugin(this));
    widget_list_.append(new FluentCalendarPickerPlugin(this));
    widget_list_.append(new FluentDatePickerPlugin(this));
    widget_list_.append(new FluentClockPickerPlugin(this));
    widget_list_.append(new FluentTimePickerPlugin(this));
    widget_list_.append(new FluentDateTimePickerPlugin(this));
    widget_list_.append(new FluentPieChartPlugin(this));
    widget_list_.append(new FluentBarChartPlugin(this));
    widget_list_.append(new FluentLineChartPlugin(this));
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

/* FluentSliderPlugin */

FluentSliderPlugin::FluentSliderPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentSliderPlugin::isContainer() const {
    return false;
}

bool FluentSliderPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentSliderPlugin::icon() const {
    return QIcon();
}

QString FluentSliderPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentSlider" name="fluentSlider">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentSliderPlugin::includeFile() const {
    return "fluent_slider.h";
}

QString FluentSliderPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentSliderPlugin::name() const {
    return "FluentSlider";
}

QString FluentSliderPlugin::toolTip() const {
    return "Fluent Design Slider";
}

QString FluentSliderPlugin::whatsThis() const {
    return {};
}

QWidget* FluentSliderPlugin::createWidget(QWidget* parent) {
    return new FluentSlider(parent);
}

void FluentSliderPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentProgressBarPlugin */

FluentProgressBarPlugin::FluentProgressBarPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentProgressBarPlugin::isContainer() const {
    return false;
}

bool FluentProgressBarPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentProgressBarPlugin::icon() const {
    return QIcon();
}

QString FluentProgressBarPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentProgressBar" name="fluentProgressBar">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentProgressBarPlugin::includeFile() const {
    return "fluent_progress_bar.h";
}

QString FluentProgressBarPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentProgressBarPlugin::name() const {
    return "FluentProgressBar";
}

QString FluentProgressBarPlugin::toolTip() const {
    return "Fluent Design Fluent Progress Bar";
}

QString FluentProgressBarPlugin::whatsThis() const {
    return {};
}

QWidget* FluentProgressBarPlugin::createWidget(QWidget* parent) {
    return new FluentProgressBar(parent);
}

void FluentProgressBarPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentComboBoxPlugin */

FluentComboBoxPlugin::FluentComboBoxPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentComboBoxPlugin::isContainer() const {
    return false;
}

bool FluentComboBoxPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentComboBoxPlugin::icon() const {
    return QIcon();
}

QString FluentComboBoxPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentComboBox" name="fluentComboBox">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentComboBoxPlugin::includeFile() const {
    return "fluent_combo_box.h";
}

QString FluentComboBoxPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentComboBoxPlugin::name() const {
    return "FluentComboBox";
}

QString FluentComboBoxPlugin::toolTip() const {
    return "Fluent Design Fluent Combo Box";
}

QString FluentComboBoxPlugin::whatsThis() const {
    return {};
}

QWidget* FluentComboBoxPlugin::createWidget(QWidget* parent) {
    return new FluentComboBox(parent);
}

void FluentComboBoxPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentTextPlugin */

FluentTextPlugin::FluentTextPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentTextPlugin::isContainer() const {
    return false;
}

bool FluentTextPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentTextPlugin::icon() const {
    return QIcon();
}

QString FluentTextPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentText" name="fluentText">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentTextPlugin::includeFile() const {
    return "fluent_text.h";
}

QString FluentTextPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentTextPlugin::name() const {
    return "FluentText";
}

QString FluentTextPlugin::toolTip() const {
    return "Fluent Design Fluent Text";
}

QString FluentTextPlugin::whatsThis() const {
    return {};
}

QWidget* FluentTextPlugin::createWidget(QWidget* parent) {
    return new FluentText(parent);
}

void FluentTextPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentGroupBoxPlugin */

FluentGroupBoxPlugin::FluentGroupBoxPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentGroupBoxPlugin::isContainer() const {
    return true;
}

bool FluentGroupBoxPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentGroupBoxPlugin::icon() const {
    return QIcon();
}

QString FluentGroupBoxPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentGroupBox" name="fluentGroupBox">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentGroupBoxPlugin::includeFile() const {
    return "fluent_group_box.h";
}

QString FluentGroupBoxPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentGroupBoxPlugin::name() const {
    return "FluentGroupBox";
}

QString FluentGroupBoxPlugin::toolTip() const {
    return "Fluent Design Fluent Group Box";
}

QString FluentGroupBoxPlugin::whatsThis() const {
    return {};
}

QWidget* FluentGroupBoxPlugin::createWidget(QWidget* parent) {
    return new FluentGroupBox(parent);
}

void FluentGroupBoxPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentTabWidgetPlugin */

FluentTabWidgetPlugin::FluentTabWidgetPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentTabWidgetPlugin::isContainer() const {
    return true;
}

bool FluentTabWidgetPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentTabWidgetPlugin::icon() const {
    return QIcon();
}

QString FluentTabWidgetPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentTabWidget" name="fluentTabWidget">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentTabWidgetPlugin::includeFile() const {
    return "fluent_tab_widget.h";
}

QString FluentTabWidgetPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentTabWidgetPlugin::name() const {
    return "FluentTabWidget";
}

QString FluentTabWidgetPlugin::toolTip() const {
    return "Fluent Design Fluent Tab Widget";
}

QString FluentTabWidgetPlugin::whatsThis() const {
    return {};
}

QWidget* FluentTabWidgetPlugin::createWidget(QWidget* parent) {
    return new FluentTabWidget(parent);
}

void FluentTabWidgetPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentTabBarPlugin */

FluentTabBarPlugin::FluentTabBarPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentTabBarPlugin::isContainer() const {
    return false;
}

bool FluentTabBarPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentTabBarPlugin::icon() const {
    return QIcon();
}

QString FluentTabBarPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentTabBar" name="fluentTabBar">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentTabBarPlugin::includeFile() const {
    return "fluent_tab_bar.h";
}

QString FluentTabBarPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentTabBarPlugin::name() const {
    return "FluentTabBar";
}

QString FluentTabBarPlugin::toolTip() const {
    return "Fluent Design Fluent Tab Bar";
}

QString FluentTabBarPlugin::whatsThis() const {
    return {};
}

QWidget* FluentTabBarPlugin::createWidget(QWidget* parent) {
    return new FluentTabBar(parent);
}

void FluentTabBarPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentCheckBoxPlugin */

FluentCheckBoxPlugin::FluentCheckBoxPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentCheckBoxPlugin::isContainer() const {
    return false;
}

bool FluentCheckBoxPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentCheckBoxPlugin::icon() const {
    return QIcon();
}

QString FluentCheckBoxPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentCheckBox" name="fluentCheckBox">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentCheckBoxPlugin::includeFile() const {
    return "fluent_check_box.h";
}

QString FluentCheckBoxPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentCheckBoxPlugin::name() const {
    return "FluentCheckBox";
}

QString FluentCheckBoxPlugin::toolTip() const {
    return "Fluent Design Fluent Check Box";
}

QString FluentCheckBoxPlugin::whatsThis() const {
    return {};
}

QWidget* FluentCheckBoxPlugin::createWidget(QWidget* parent) {
    return new FluentCheckBox(parent);
}

void FluentCheckBoxPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentTitleBarPlugin */

FluentTitleBarPlugin::FluentTitleBarPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentTitleBarPlugin::isContainer() const {
    return true;
}

bool FluentTitleBarPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentTitleBarPlugin::icon() const {
    return QIcon();
}

QString FluentTitleBarPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentTitleBar" name="fluentTitleBar">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentTitleBarPlugin::includeFile() const {
    return "fluent_title_bar.h";
}

QString FluentTitleBarPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentTitleBarPlugin::name() const {
    return "FluentTitleBar";
}

QString FluentTitleBarPlugin::toolTip() const {
    return "Fluent Design Fluent Title Bar";
}

QString FluentTitleBarPlugin::whatsThis() const {
    return {};
}

QWidget* FluentTitleBarPlugin::createWidget(QWidget* parent) {
    return new FluentTitleBar(parent);
}

void FluentTitleBarPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentTableWidgetPlugin */

FluentTableWidgetPlugin::FluentTableWidgetPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentTableWidgetPlugin::isContainer() const {
    return false;
}

bool FluentTableWidgetPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentTableWidgetPlugin::icon() const {
    return QIcon();
}

QString FluentTableWidgetPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentTableWidget" name="fluentTableWidget">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentTableWidgetPlugin::includeFile() const {
    return "fluent_table_widget.h";
}

QString FluentTableWidgetPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentTableWidgetPlugin::name() const {
    return "FluentTableWidget";
}

QString FluentTableWidgetPlugin::toolTip() const {
    return "Fluent Design Fluent Table Widget";
}

QString FluentTableWidgetPlugin::whatsThis() const {
    return {};
}

QWidget* FluentTableWidgetPlugin::createWidget(QWidget* parent) {
    return new FluentTableWidget(parent);
}

void FluentTableWidgetPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentCalendarPickerPlugin */

FluentCalendarPickerPlugin::FluentCalendarPickerPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentCalendarPickerPlugin::isContainer() const {
    return false;
}

bool FluentCalendarPickerPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentCalendarPickerPlugin::icon() const {
    return QIcon();
}

QString FluentCalendarPickerPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentCalendarPicker" name="fluentCalendarPicker">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentCalendarPickerPlugin::includeFile() const {
    return "fluent_calendar_picker.h";
}

QString FluentCalendarPickerPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentCalendarPickerPlugin::name() const {
    return "FluentCalendarPicker";
}

QString FluentCalendarPickerPlugin::toolTip() const {
    return "Fluent Design Fluent Calendar Picker";
}

QString FluentCalendarPickerPlugin::whatsThis() const {
    return {};
}

QWidget* FluentCalendarPickerPlugin::createWidget(QWidget* parent) {
    return new FluentCalendarPicker(parent);
}

void FluentCalendarPickerPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentDatePickerPlugin */

FluentDatePickerPlugin::FluentDatePickerPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentDatePickerPlugin::isContainer() const {
    return false;
}

bool FluentDatePickerPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentDatePickerPlugin::icon() const {
    return QIcon();
}

QString FluentDatePickerPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentDatePicker" name="fluentDatePicker">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentDatePickerPlugin::includeFile() const {
    return "fluent_date_picker.h";
}

QString FluentDatePickerPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentDatePickerPlugin::name() const {
    return "FluentDatePicker";
}

QString FluentDatePickerPlugin::toolTip() const {
    return "Fluent Design Fluent Date Picker";
}

QString FluentDatePickerPlugin::whatsThis() const {
    return {};
}

QWidget* FluentDatePickerPlugin::createWidget(QWidget* parent) {
    return new FluentDatePicker(parent);
}

void FluentDatePickerPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentClockPickerPlugin */

FluentClockPickerPlugin::FluentClockPickerPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentClockPickerPlugin::isContainer() const {
    return false;
}

bool FluentClockPickerPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentClockPickerPlugin::icon() const {
    return QIcon();
}

QString FluentClockPickerPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentClockPicker" name="fluentClockPicker">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentClockPickerPlugin::includeFile() const {
    return "fluent_clock_picker.h";
}

QString FluentClockPickerPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentClockPickerPlugin::name() const {
    return "FluentClockPicker";
}

QString FluentClockPickerPlugin::toolTip() const {
    return "Fluent Design Fluent Clock Picker";
}

QString FluentClockPickerPlugin::whatsThis() const {
    return {};
}

QWidget* FluentClockPickerPlugin::createWidget(QWidget* parent) {
    return new FluentClockPicker(parent);
}

void FluentClockPickerPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentTimePickerPlugin */

FluentTimePickerPlugin::FluentTimePickerPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentTimePickerPlugin::isContainer() const {
    return false;
}

bool FluentTimePickerPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentTimePickerPlugin::icon() const {
    return QIcon();
}

QString FluentTimePickerPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentTimePicker" name="fluentTimePickerPlugin">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentTimePickerPlugin::includeFile() const {
    return "fluent_time_picker.h";
}

QString FluentTimePickerPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentTimePickerPlugin::name() const {
    return "FluentTimePicker";
}

QString FluentTimePickerPlugin::toolTip() const {
    return "Fluent Design Fluent Time Picker";
}

QString FluentTimePickerPlugin::whatsThis() const {
    return {};
}

QWidget* FluentTimePickerPlugin::createWidget(QWidget* parent) {
    return new FluentTimePicker(parent);
}

void FluentTimePickerPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentDateTimePickerPlugin */

FluentDateTimePickerPlugin::FluentDateTimePickerPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentDateTimePickerPlugin::isContainer() const {
    return false;
}

bool FluentDateTimePickerPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentDateTimePickerPlugin::icon() const {
    return QIcon();
}

QString FluentDateTimePickerPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentDateTimePicker" name="fluentDateTimePicker">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentDateTimePickerPlugin::includeFile() const {
    return "fluent_datetime_picker.h";
}

QString FluentDateTimePickerPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentDateTimePickerPlugin::name() const {
    return "FluentDateTimePicker";
}

QString FluentDateTimePickerPlugin::toolTip() const {
    return "Fluent Design Fluent DateTime Picker";
}

QString FluentDateTimePickerPlugin::whatsThis() const {
    return {};
}

QWidget* FluentDateTimePickerPlugin::createWidget(QWidget* parent) {
    return new FluentDateTimePicker(parent);
}

void FluentDateTimePickerPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentPieChartPlugin */

FluentPieChartPlugin::FluentPieChartPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentPieChartPlugin::isContainer() const {
    return false;
}

bool FluentPieChartPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentPieChartPlugin::icon() const {
    return QIcon();
}

QString FluentPieChartPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentPieChart" name="fluentPieChart">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentPieChartPlugin::includeFile() const {
    return "fluent_pie_chart.h";
}

QString FluentPieChartPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentPieChartPlugin::name() const {
    return "FluentPieChart";
}

QString FluentPieChartPlugin::toolTip() const {
    return "Fluent Design Fluent Pie Chart";
}

QString FluentPieChartPlugin::whatsThis() const {
    return {};
}

QWidget* FluentPieChartPlugin::createWidget(QWidget* parent) {
    return new FluentPieChart(parent);
}

void FluentPieChartPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentBarChartPlugin */

FluentBarChartPlugin::FluentBarChartPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentBarChartPlugin::isContainer() const {
    return false;
}

bool FluentBarChartPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentBarChartPlugin::icon() const {
    return QIcon();
}

QString FluentBarChartPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentBarChart" name="fluentBarChart">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentBarChartPlugin::includeFile() const {
    return "fluent_bar_chart.h";
}

QString FluentBarChartPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentBarChartPlugin::name() const {
    return "FluentBarChart";
}

QString FluentBarChartPlugin::toolTip() const {
    return "Fluent Design Fluent Bar Chart";
}

QString FluentBarChartPlugin::whatsThis() const {
    return {};
}

QWidget* FluentBarChartPlugin::createWidget(QWidget* parent) {
    return new FluentBarChart(parent);
}

void FluentBarChartPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}

/* FluentLineChartPlugin */

FluentLineChartPlugin::FluentLineChartPlugin(QObject* parent)
    : QObject(parent), is_initialized_(false)
{}

bool FluentLineChartPlugin::isContainer() const {
    return false;
}

bool FluentLineChartPlugin::isInitialized() const {
    return is_initialized_;
}

QIcon FluentLineChartPlugin::icon() const {
    return QIcon();
}

QString FluentLineChartPlugin::domXml() const {
    return R"(
        <ui language="c++" version="4.0">
          <widget class="FluentLineChart" name="fluentLineChart">
            <property name="geometry">
              <rect>
                <x>0</x><y>0</y><width>48</width><height>24</height>
              </rect>
            </property>
          </widget>
        </ui>
    )";
}

QString FluentLineChartPlugin::includeFile() const {
    return "fluent_line_chart.h";
}

QString FluentLineChartPlugin::group() const {
    return "Fluent UI Controls";
}

QString FluentLineChartPlugin::name() const {
    return "FluentLineChart";
}

QString FluentLineChartPlugin::toolTip() const {
    return "Fluent Design Fluent Line Chart";
}

QString FluentLineChartPlugin::whatsThis() const {
    return {};
}

QWidget* FluentLineChartPlugin::createWidget(QWidget* parent) {
    return new FluentLineChart(parent);
}

void FluentLineChartPlugin::initialize(QDesignerFormEditorInterface* core) {
    Q_UNUSED(core);
    if (is_initialized_)
        return;
    is_initialized_ = true;
}
