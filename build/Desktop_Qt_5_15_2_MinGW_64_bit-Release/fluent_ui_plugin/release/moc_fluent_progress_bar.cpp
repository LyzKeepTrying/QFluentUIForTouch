/****************************************************************************
** Meta object code from reading C++ file 'fluent_progress_bar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_progress_bar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_progress_bar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentProgressBar_t {
    QByteArrayData data[14];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentProgressBar_t qt_meta_stringdata_FluentProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FluentProgressBar"
QT_MOC_LITERAL(1, 18, 21), // "SliderOffColorChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "value"
QT_MOC_LITERAL(4, 47, 20), // "SliderOnColorChanged"
QT_MOC_LITERAL(5, 68, 13), // "IsLoopChanged"
QT_MOC_LITERAL(6, 82, 9), // "LineWidth"
QT_MOC_LITERAL(7, 92, 14), // "SliderOffColor"
QT_MOC_LITERAL(8, 107, 13), // "SliderOnColor"
QT_MOC_LITERAL(9, 121, 12), // "CurSliderPos"
QT_MOC_LITERAL(10, 134, 15), // "MoveAnamination"
QT_MOC_LITERAL(11, 150, 6), // "IsLoop"
QT_MOC_LITERAL(12, 157, 9), // "MoveSpeed"
QT_MOC_LITERAL(13, 167, 9) // "SliderLen"

    },
    "FluentProgressBar\0SliderOffColorChanged\0"
    "\0value\0SliderOnColorChanged\0IsLoopChanged\0"
    "LineWidth\0SliderOffColor\0SliderOnColor\0"
    "CurSliderPos\0MoveAnamination\0IsLoop\0"
    "MoveSpeed\0SliderLen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentProgressBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   38, // properties
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
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       6, QMetaType::QReal, 0x00095103,
       7, QMetaType::QColor, 0x00495103,
       8, QMetaType::QColor, 0x00495103,
       9, QMetaType::Int, 0x00094103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::QReal, 0x00095103,
      13, QMetaType::QReal, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       1,
       0,
       0,
       2,
       0,
       0,

       0        // eod
};

void FluentProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentProgressBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SliderOffColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->SliderOnColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->IsLoopChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentProgressBar::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentProgressBar::SliderOffColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentProgressBar::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentProgressBar::SliderOnColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentProgressBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentProgressBar::IsLoopChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getLineWidth(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getSliderOffColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getSliderOnColor(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getCurSliderPos(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getMoveAnamination(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getIsLoop(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->getMoveSpeed(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->getSliderLen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLineWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setSliderOffColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setSliderOnColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setCurSliderPos(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setMoveAnamination(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setIsLoop(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setMoveSpeed(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setSliderLen(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FluentProgressBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QProgressBar::staticMetaObject>(),
    qt_meta_stringdata_FluentProgressBar.data,
    qt_meta_data_FluentProgressBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentProgressBar.stringdata0))
        return static_cast<void*>(this);
    return QProgressBar::qt_metacast(_clname);
}

int FluentProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressBar::qt_metacall(_c, _id, _a);
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
void FluentProgressBar::SliderOffColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentProgressBar::SliderOnColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentProgressBar::IsLoopChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
