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
    QByteArrayData data[12];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentToggleButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentToggleButton_t qt_meta_stringdata_FluentToggleButton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FluentToggleButton"
QT_MOC_LITERAL(1, 19, 18), // "ThumbRadiusChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 13), // "ThumbPosition"
QT_MOC_LITERAL(5, 59, 11), // "ThumbRadius"
QT_MOC_LITERAL(6, 71, 11), // "ThumbXStart"
QT_MOC_LITERAL(7, 83, 9), // "ThumbXEnd"
QT_MOC_LITERAL(8, 93, 10), // "ThumbColor"
QT_MOC_LITERAL(9, 104, 18), // "BackgroundOffColor"
QT_MOC_LITERAL(10, 123, 17), // "BackgroundOnColor"
QT_MOC_LITERAL(11, 141, 11) // "BorderColor"

    },
    "FluentToggleButton\0ThumbRadiusChanged\0"
    "\0value\0ThumbPosition\0ThumbRadius\0"
    "ThumbXStart\0ThumbXEnd\0ThumbColor\0"
    "BackgroundOffColor\0BackgroundOnColor\0"
    "BorderColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentToggleButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       8,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00495103,
       6, QMetaType::QReal, 0x00095103,
       7, QMetaType::QReal, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QColor, 0x00095103,
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::QColor, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void FluentToggleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentToggleButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ThumbRadiusChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentToggleButton::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentToggleButton::ThumbRadiusChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
        case 7: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
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
        case 7: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
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
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FluentToggleButton::ThumbRadiusChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
