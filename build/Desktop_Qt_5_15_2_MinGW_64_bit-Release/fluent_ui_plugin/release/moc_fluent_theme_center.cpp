/****************************************************************************
** Meta object code from reading C++ file 'fluent_theme_center.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_theme_center.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_theme_center.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentThemeCenter_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentThemeCenter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentThemeCenter_t qt_meta_stringdata_FluentThemeCenter = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FluentThemeCenter"
QT_MOC_LITERAL(1, 18, 22), // "BackgroundColorChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "value"
QT_MOC_LITERAL(4, 48, 16), // "TextColorChanged"
QT_MOC_LITERAL(5, 65, 18), // "BorderColorChanged"
QT_MOC_LITERAL(6, 84, 14), // "OnColorChanged"
QT_MOC_LITERAL(7, 99, 12), // "themeChanged"
QT_MOC_LITERAL(8, 112, 15), // "BackgroundColor"
QT_MOC_LITERAL(9, 128, 9), // "TextColor"
QT_MOC_LITERAL(10, 138, 11), // "BorderColor"
QT_MOC_LITERAL(11, 150, 7) // "OnColor"

    },
    "FluentThemeCenter\0BackgroundColorChanged\0"
    "\0value\0TextColorChanged\0BorderColorChanged\0"
    "OnColorChanged\0themeChanged\0BackgroundColor\0"
    "TextColor\0BorderColor\0OnColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentThemeCenter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,
       7,    0,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QColor, 0x00495103,
       9, QMetaType::QColor, 0x00495103,
      10, QMetaType::QColor, 0x00495103,
      11, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void FluentThemeCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentThemeCenter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BackgroundColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->TextColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->BorderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->OnColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->themeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentThemeCenter::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentThemeCenter::BackgroundColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentThemeCenter::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentThemeCenter::TextColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentThemeCenter::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentThemeCenter::BorderColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluentThemeCenter::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentThemeCenter::OnColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FluentThemeCenter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentThemeCenter::themeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentThemeCenter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getOnColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentThemeCenter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setOnColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FluentThemeCenter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluentThemeCenter.data,
    qt_meta_data_FluentThemeCenter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentThemeCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentThemeCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentThemeCenter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluentThemeCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FluentThemeCenter::BackgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentThemeCenter::TextColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentThemeCenter::BorderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FluentThemeCenter::OnColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FluentThemeCenter::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
