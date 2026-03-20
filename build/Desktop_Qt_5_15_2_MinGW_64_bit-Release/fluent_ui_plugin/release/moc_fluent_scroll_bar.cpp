/****************************************************************************
** Meta object code from reading C++ file 'fluent_scroll_bar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_scroll_bar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_scroll_bar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentScrollBar_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentScrollBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentScrollBar_t qt_meta_stringdata_FluentScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FluentScrollBar"
QT_MOC_LITERAL(1, 16, 17), // "ThumbColorChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 23), // "ThumbBorderColorChanged"
QT_MOC_LITERAL(5, 65, 17), // "TrackColorChanged"
QT_MOC_LITERAL(6, 83, 10), // "ThumbColor"
QT_MOC_LITERAL(7, 94, 16), // "ThumbBorderColor"
QT_MOC_LITERAL(8, 111, 10), // "TrackColor"
QT_MOC_LITERAL(9, 122, 11), // "ThumbRadius"
QT_MOC_LITERAL(10, 134, 10), // "TrackWidth"
QT_MOC_LITERAL(11, 145, 12) // "ThumbPressed"

    },
    "FluentScrollBar\0ThumbColorChanged\0\0"
    "value\0ThumbBorderColorChanged\0"
    "TrackColorChanged\0ThumbColor\0"
    "ThumbBorderColor\0TrackColor\0ThumbRadius\0"
    "TrackWidth\0ThumbPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentScrollBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

 // properties: name, type, flags
       6, QMetaType::QColor, 0x00495103,
       7, QMetaType::QColor, 0x00495103,
       8, QMetaType::QColor, 0x00495103,
       9, QMetaType::QReal, 0x00095103,
      10, QMetaType::QReal, 0x00095103,
      11, QMetaType::Bool, 0x00094103,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       0,
       0,

       0        // eod
};

void FluentScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentScrollBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ThumbColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->ThumbBorderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->TrackColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentScrollBar::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentScrollBar::ThumbColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentScrollBar::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentScrollBar::ThumbBorderColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentScrollBar::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentScrollBar::TrackColorChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentScrollBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getThumbColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getThumbBorderColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getTrackColor(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->getThumbRadius(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->getTrackWidth(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getThumbPressed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentScrollBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThumbColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setThumbBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setTrackColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setThumbRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setTrackWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setThumbPressed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FluentScrollBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollBar::staticMetaObject>(),
    qt_meta_stringdata_FluentScrollBar.data,
    qt_meta_data_FluentScrollBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentScrollBar.stringdata0))
        return static_cast<void*>(this);
    return QScrollBar::qt_metacast(_clname);
}

int FluentScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FluentScrollBar::ThumbColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentScrollBar::ThumbBorderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentScrollBar::TrackColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
