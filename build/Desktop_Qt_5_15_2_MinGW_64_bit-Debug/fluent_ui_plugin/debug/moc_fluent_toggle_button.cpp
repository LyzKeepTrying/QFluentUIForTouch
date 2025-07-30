/****************************************************************************
** Meta object code from reading C++ file 'fluent_toggle_button.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_toggle_button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_toggle_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentToggleButton_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentToggleButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentToggleButton_t qt_meta_stringdata_FluentToggleButton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FluentToggleButton"
QT_MOC_LITERAL(1, 19, 13), // "ThumbPosition"
QT_MOC_LITERAL(2, 33, 11), // "ThumbRadius"
QT_MOC_LITERAL(3, 45, 11), // "ThumbXStart"
QT_MOC_LITERAL(4, 57, 9), // "ThumbXEnd"
QT_MOC_LITERAL(5, 67, 10), // "ThumbColor"
QT_MOC_LITERAL(6, 78, 18), // "BackgroundOffColor"
QT_MOC_LITERAL(7, 97, 17) // "BackgroundOnColor"

    },
    "FluentToggleButton\0ThumbPosition\0"
    "ThumbRadius\0ThumbXStart\0ThumbXEnd\0"
    "ThumbColor\0BackgroundOffColor\0"
    "BackgroundOnColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentToggleButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095103,
       2, QMetaType::QReal, 0x00095103,
       3, QMetaType::QReal, 0x00095103,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,

       0        // eod
};

void FluentToggleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentToggleButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getThumbPosition(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->getThumbRadius(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->getThumbXStart(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->getThumbXEnd(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getThumbColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundOffColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundOnColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentToggleButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThumbPosition(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setThumbRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setThumbXStart(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setThumbXEnd(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setThumbColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setBackgroundOffColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setBackgroundOnColor(*reinterpret_cast< QColor*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentToggleButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_meta_stringdata_FluentToggleButton.data,
    qt_meta_data_FluentToggleButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentToggleButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentToggleButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentToggleButton.stringdata0))
        return static_cast<void*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int FluentToggleButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
