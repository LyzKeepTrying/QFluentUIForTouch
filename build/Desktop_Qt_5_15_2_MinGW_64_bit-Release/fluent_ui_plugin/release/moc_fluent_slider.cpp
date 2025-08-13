/****************************************************************************
** Meta object code from reading C++ file 'fluent_slider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_slider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_slider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentSlider_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentSlider_t qt_meta_stringdata_FluentSlider = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FluentSlider"
QT_MOC_LITERAL(1, 13, 10), // "ThumbColor"
QT_MOC_LITERAL(2, 24, 11), // "ThumbRadius"
QT_MOC_LITERAL(3, 36, 9), // "LineWidth"
QT_MOC_LITERAL(4, 46, 14), // "ThumbIsPressed"
QT_MOC_LITERAL(5, 61, 13), // "SliderOnColor"
QT_MOC_LITERAL(6, 75, 14), // "SliderOffColor"
QT_MOC_LITERAL(7, 90, 16) // "ThumbBorderColor"

    },
    "FluentSlider\0ThumbColor\0ThumbRadius\0"
    "LineWidth\0ThumbIsPressed\0SliderOnColor\0"
    "SliderOffColor\0ThumbBorderColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentSlider[] = {

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
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QReal, 0x00095103,
       3, QMetaType::QReal, 0x00095103,
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,

       0        // eod
};

void FluentSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getThumbColor(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->getThumbRadius(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->getLineWidth(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getThumbIsPressed(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getSliderOnColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getSliderOffColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getThumbBorderColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThumbColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setThumbRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setLineWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setThumbIsPressed(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setSliderOnColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setSliderOffColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setThumbBorderColor(*reinterpret_cast< QColor*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QSlider::staticMetaObject>(),
    qt_meta_stringdata_FluentSlider.data,
    qt_meta_data_FluentSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentSlider.stringdata0))
        return static_cast<void*>(this);
    return QSlider::qt_metacast(_clname);
}

int FluentSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
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
