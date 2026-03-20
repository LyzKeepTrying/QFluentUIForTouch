/****************************************************************************
** Meta object code from reading C++ file 'fluent_table_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_table_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_table_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentTableWidget_t {
    QByteArrayData data[14];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentTableWidget_t qt_meta_stringdata_FluentTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FluentTableWidget"
QT_MOC_LITERAL(1, 18, 15), // "FontSizeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 16), // "TextColorChanged"
QT_MOC_LITERAL(5, 58, 21), // "HighLightColorChanged"
QT_MOC_LITERAL(6, 80, 22), // "BackGroundColorChanged"
QT_MOC_LITERAL(7, 103, 23), // "AlternativeColorChanged"
QT_MOC_LITERAL(8, 127, 8), // "FontSize"
QT_MOC_LITERAL(9, 136, 9), // "TextColor"
QT_MOC_LITERAL(10, 146, 14), // "HighLightColor"
QT_MOC_LITERAL(11, 161, 15), // "BackGroundColor"
QT_MOC_LITERAL(12, 177, 16), // "AlternativeColor"
QT_MOC_LITERAL(13, 194, 11) // "BorderColor"

    },
    "FluentTableWidget\0FontSizeChanged\0\0"
    "value\0TextColorChanged\0HighLightColorChanged\0"
    "BackGroundColorChanged\0AlternativeColorChanged\0"
    "FontSize\0TextColor\0HighLightColor\0"
    "BackGroundColor\0AlternativeColor\0"
    "BorderColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentTableWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,
       7,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::QColor, 0x00495103,
      10, QMetaType::QColor, 0x00495103,
      11, QMetaType::QColor, 0x00495103,
      12, QMetaType::QColor, 0x00495103,
      13, QMetaType::QColor, 0x00095103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       0,

       0        // eod
};

void FluentTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentTableWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FontSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->TextColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->HighLightColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->BackGroundColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->AlternativeColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentTableWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentTableWidget::FontSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentTableWidget::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentTableWidget::TextColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentTableWidget::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentTableWidget::HighLightColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluentTableWidget::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentTableWidget::BackGroundColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FluentTableWidget::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentTableWidget::AlternativeColorChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentTableWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getHighLightColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBackGroundColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getAlternativeColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentTableWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setHighLightColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBackGroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setAlternativeColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FluentTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_FluentTableWidget.data,
    qt_meta_data_FluentTableWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int FluentTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
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
void FluentTableWidget::FontSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentTableWidget::TextColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentTableWidget::HighLightColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FluentTableWidget::BackGroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FluentTableWidget::AlternativeColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
