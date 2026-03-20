/****************************************************************************
** Meta object code from reading C++ file 'fluent_tab_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_tab_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_tab_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentTabWidget_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentTabWidget_t qt_meta_stringdata_FluentTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FluentTabWidget"
QT_MOC_LITERAL(1, 16, 17), // "AnimationDuration"
QT_MOC_LITERAL(2, 34, 15), // "AnimationEasing"
QT_MOC_LITERAL(3, 50, 18), // "QEasingCurve::Type"
QT_MOC_LITERAL(4, 69, 16), // "AnimationEnabled"
QT_MOC_LITERAL(5, 86, 9), // "LastIndex"
QT_MOC_LITERAL(6, 96, 9) // "FirstShow"

    },
    "FluentTabWidget\0AnimationDuration\0"
    "AnimationEasing\0QEasingCurve::Type\0"
    "AnimationEnabled\0LastIndex\0FirstShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentTabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, 0x80000000 | 3, 0x0009510b,
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::Int, 0x00094103,
       6, QMetaType::Bool, 0x00094103,

       0        // eod
};

void FluentTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentTabWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getAnimationDuration(); break;
        case 1: *reinterpret_cast< QEasingCurve::Type*>(_v) = _t->getAnimationEasing(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getAnimationEnabled(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getLastIndex(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getFirstShow(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentTabWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimationDuration(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setAnimationEasing(*reinterpret_cast< QEasingCurve::Type*>(_v)); break;
        case 2: _t->setAnimationEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setLastIndex(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFirstShow(*reinterpret_cast< bool*>(_v)); break;
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

static const QMetaObject::SuperData qt_meta_extradata_FluentTabWidget[] = {
    QMetaObject::SuperData::link<QEasingCurve::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject FluentTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_FluentTabWidget.data,
    qt_meta_data_FluentTabWidget,
    qt_static_metacall,
    qt_meta_extradata_FluentTabWidget,
    nullptr
} };


const QMetaObject *FluentTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int FluentTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
