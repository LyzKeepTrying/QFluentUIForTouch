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
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentScrollBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentScrollBar_t qt_meta_stringdata_FluentScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FluentScrollBar"
QT_MOC_LITERAL(1, 16, 10), // "ThumbColor"
QT_MOC_LITERAL(2, 27, 16), // "ThumbBorderColor"
QT_MOC_LITERAL(3, 44, 10), // "TrackColor"
QT_MOC_LITERAL(4, 55, 11), // "ThumbRadius"
QT_MOC_LITERAL(5, 67, 10), // "TrackWidth"
QT_MOC_LITERAL(6, 78, 12) // "ThumbPressed"

    },
    "FluentScrollBar\0ThumbColor\0ThumbBorderColor\0"
    "TrackColor\0ThumbRadius\0TrackWidth\0"
    "ThumbPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentScrollBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::Bool, 0x00094103,

       0        // eod
};

void FluentScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
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
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
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
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
