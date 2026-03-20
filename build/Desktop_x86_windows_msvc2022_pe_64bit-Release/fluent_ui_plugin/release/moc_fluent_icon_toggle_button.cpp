/****************************************************************************
** Meta object code from reading C++ file 'fluent_icon_toggle_button.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_icon_toggle_button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_icon_toggle_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentIconToggleButton_t {
    QByteArrayData data[11];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentIconToggleButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentIconToggleButton_t qt_meta_stringdata_FluentIconToggleButton = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FluentIconToggleButton"
QT_MOC_LITERAL(1, 23, 15), // "BackgroundColor"
QT_MOC_LITERAL(2, 39, 22), // "ToggledBackgroundColor"
QT_MOC_LITERAL(3, 62, 9), // "TextColor"
QT_MOC_LITERAL(4, 72, 11), // "BorderColor"
QT_MOC_LITERAL(5, 84, 13), // "IconTopMargin"
QT_MOC_LITERAL(6, 98, 13), // "IconTextSpace"
QT_MOC_LITERAL(7, 112, 8), // "FontSize"
QT_MOC_LITERAL(8, 121, 11), // "ToggledIcon"
QT_MOC_LITERAL(9, 133, 11), // "ToggledText"
QT_MOC_LITERAL(10, 145, 14) // "TextIsOustside"

    },
    "FluentIconToggleButton\0BackgroundColor\0"
    "ToggledBackgroundColor\0TextColor\0"
    "BorderColor\0IconTopMargin\0IconTextSpace\0"
    "FontSize\0ToggledIcon\0ToggledText\0"
    "TextIsOustside"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentIconToggleButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::QIcon, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::Bool, 0x00095103,

       0        // eod
};

void FluentIconToggleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentIconToggleButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getToggledBackgroundColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getIconTopMargin(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getIconTextSpace(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 7: *reinterpret_cast< QIcon*>(_v) = _t->getToggledIcon(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getToggledText(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getTextIsOustside(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentIconToggleButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setToggledBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setIconTopMargin(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setIconTextSpace(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setToggledIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 8: _t->setToggledText(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setTextIsOustside(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FluentIconToggleButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_meta_stringdata_FluentIconToggleButton.data,
    qt_meta_data_FluentIconToggleButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentIconToggleButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentIconToggleButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentIconToggleButton.stringdata0))
        return static_cast<void*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int FluentIconToggleButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
