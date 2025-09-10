#pragma once
#include <QtUiPlugin/QDesignerCustomWidgetInterface>
#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtCore/qglobal.h>
#include <QtGui/QIcon>
#include <QtWidgets/QWidget>

#if defined(FLUENTUI_PLUGIN_LIBRARY)
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#define FLUENTUI_PLUGIN_EXPORT Q_DECL_IMPORT
#endif

class FLUENTUI_PLUGIN_EXPORT FluentWidgetsPluginCollection
    : public QObject
    , public QDesignerCustomWidgetCollectionInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetCollectionInterface")
    Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)

public:
    explicit FluentWidgetsPluginCollection(QObject* parent = nullptr);
    QList<QDesignerCustomWidgetInterface*> customWidgets() const override;

private:
    QList<QDesignerCustomWidgetInterface*> widget_list_;
};

class FLUENTUI_PLUGIN_EXPORT FluentToggleButtonPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentToggleButtonPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentPushButtonPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentPushButtonPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentIconPushButtonPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentIconPushButtonPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentIconToggleButtonPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentIconToggleButtonPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentLineEditPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentLineEditPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentSpinBoxPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentSpinBoxPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentDoubleSpinBoxPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentDoubleSpinBoxPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentCircleSpinBoxPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentCircleSpinBoxPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentLineSpinBoxPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentLineSpinBoxPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentSliderPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentSliderPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentProgressBarPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentProgressBarPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentComboBoxPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentComboBoxPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentTextPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentTextPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

class FLUENTUI_PLUGIN_EXPORT FluentGroupBoxPlugin
    : public QObject
    , public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit FluentGroupBoxPlugin(QObject* parent = nullptr);

    // 只声明，不写函数体
    bool isContainer() const override;
    bool isInitialized() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString includeFile() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget* createWidget(QWidget* parent) override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool is_initialized_ = false;
};

