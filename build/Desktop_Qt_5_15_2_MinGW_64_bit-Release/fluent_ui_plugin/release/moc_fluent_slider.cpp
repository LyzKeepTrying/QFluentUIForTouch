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
    QByteArrayData data[16];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentSlider_t qt_meta_stringdata_FluentSlider = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FluentSlider"
QT_MOC_LITERAL(1, 13, 17), // "ThumbColorChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "value"
QT_MOC_LITERAL(4, 38, 20), // "SliderOnColorChanged"
QT_MOC_LITERAL(5, 59, 21), // "SliderOffColorChanged"
QT_MOC_LITERAL(6, 81, 23), // "ThumbBorderColorChanged"
QT_MOC_LITERAL(7, 105, 11), // "ThumbRadius"
QT_MOC_LITERAL(8, 117, 9), // "LineWidth"
QT_MOC_LITERAL(9, 127, 14), // "ThumbIsPressed"
QT_MOC_LITERAL(10, 142, 10), // "ThumbColor"
QT_MOC_LITERAL(11, 153, 13), // "SliderOnColor"
QT_MOC_LITERAL(12, 167, 14), // "SliderOffColor"
QT_MOC_LITERAL(13, 182, 16), // "ThumbBorderColor"
QT_MOC_LITERAL(14, 199, 9), // "PaintStep"
QT_MOC_LITERAL(15, 209, 11) // "SliderPress"

    },
    "FluentSlider\0ThumbColorChanged\0\0value\0"
    "SliderOnColorChanged\0SliderOffColorChanged\0"
    "ThumbBorderColorChanged\0ThumbRadius\0"
    "LineWidth\0ThumbIsPressed\0ThumbColor\0"
    "SliderOnColor\0SliderOffColor\0"
    "ThumbBorderColor\0PaintStep\0SliderPress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentSlider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       9,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00095103,
       8, QMetaType::QReal, 0x00095103,
       9, QMetaType::Bool, 0x00094103,
      10, QMetaType::QColor, 0x00495103,
      11, QMetaType::QColor, 0x00495103,
      12, QMetaType::QColor, 0x00495103,
      13, QMetaType::QColor, 0x00495103,
      14, QMetaType::Bool, 0x00095103,
      15, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       2,
       3,
       0,
       0,

       0        // eod
};

void FluentSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ThumbColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->SliderOnColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->SliderOffColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->ThumbBorderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentSlider::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentSlider::ThumbColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentSlider::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentSlider::SliderOnColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentSlider::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentSlider::SliderOffColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluentSlider::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentSlider::ThumbBorderColorChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getThumbRadius(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->getLineWidth(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getThumbIsPressed(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getThumbColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getSliderOnColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getSliderOffColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getThumbBorderColor(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getPaintStep(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getSliderPress(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThumbRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setLineWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setThumbIsPressed(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setThumbColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setSliderOnColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setSliderOffColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setThumbBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setPaintStep(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setSliderPress(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
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
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FluentSlider::ThumbColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentSlider::SliderOnColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentSlider::SliderOffColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FluentSlider::ThumbBorderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
