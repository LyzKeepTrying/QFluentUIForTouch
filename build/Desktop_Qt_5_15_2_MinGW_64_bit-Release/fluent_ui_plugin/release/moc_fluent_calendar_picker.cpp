/****************************************************************************
** Meta object code from reading C++ file 'fluent_calendar_picker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_calendar_picker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_calendar_picker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentCalendarPicker_t {
    QByteArrayData data[19];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentCalendarPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentCalendarPicker_t qt_meta_stringdata_FluentCalendarPicker = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FluentCalendarPicker"
QT_MOC_LITERAL(1, 21, 22), // "BackgroundColorChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "value"
QT_MOC_LITERAL(4, 51, 18), // "BorderColorChanged"
QT_MOC_LITERAL(5, 70, 16), // "TextColorChanged"
QT_MOC_LITERAL(6, 87, 18), // "HeaderColorChanged"
QT_MOC_LITERAL(7, 106, 20), // "SelectedColorChanged"
QT_MOC_LITERAL(8, 127, 11), // "dateChanged"
QT_MOC_LITERAL(9, 139, 4), // "date"
QT_MOC_LITERAL(10, 144, 15), // "BackgroundColor"
QT_MOC_LITERAL(11, 160, 11), // "BorderColor"
QT_MOC_LITERAL(12, 172, 9), // "TextColor"
QT_MOC_LITERAL(13, 182, 11), // "HeaderColor"
QT_MOC_LITERAL(14, 194, 13), // "SelectedColor"
QT_MOC_LITERAL(15, 208, 12), // "HeaderHeight"
QT_MOC_LITERAL(16, 221, 13), // "WeekdayHeight"
QT_MOC_LITERAL(17, 235, 11), // "CellSpacing"
QT_MOC_LITERAL(18, 247, 8) // "FontSize"

    },
    "FluentCalendarPicker\0BackgroundColorChanged\0"
    "\0value\0BorderColorChanged\0TextColorChanged\0"
    "HeaderColorChanged\0SelectedColorChanged\0"
    "dateChanged\0date\0BackgroundColor\0"
    "BorderColor\0TextColor\0HeaderColor\0"
    "SelectedColor\0HeaderHeight\0WeekdayHeight\0"
    "CellSpacing\0FontSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentCalendarPicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       9,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,
       8,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QDate,    9,

 // properties: name, type, flags
      10, QMetaType::QColor, 0x00495103,
      11, QMetaType::QColor, 0x00495103,
      12, QMetaType::QColor, 0x00495103,
      13, QMetaType::QColor, 0x00495103,
      14, QMetaType::QColor, 0x00495103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::Int, 0x00095103,
      17, QMetaType::Int, 0x00095103,
      18, QMetaType::Int, 0x00095103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       0,
       0,
       0,
       0,

       0        // eod
};

void FluentCalendarPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentCalendarPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BackgroundColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->BorderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->TextColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->HeaderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->SelectedColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentCalendarPicker::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentCalendarPicker::BackgroundColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentCalendarPicker::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentCalendarPicker::BorderColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentCalendarPicker::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentCalendarPicker::TextColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluentCalendarPicker::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentCalendarPicker::HeaderColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FluentCalendarPicker::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentCalendarPicker::SelectedColorChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FluentCalendarPicker::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentCalendarPicker::dateChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentCalendarPicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getHeaderColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getSelectedColor(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getHeaderHeight(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getWeekdayHeight(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getCellSpacing(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentCalendarPicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setHeaderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setSelectedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setHeaderHeight(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setWeekdayHeight(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setCellSpacing(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FluentCalendarPicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FluentCalendarPicker.data,
    qt_meta_data_FluentCalendarPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentCalendarPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentCalendarPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentCalendarPicker.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FluentCalendarPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void FluentCalendarPicker::BackgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentCalendarPicker::BorderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentCalendarPicker::TextColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FluentCalendarPicker::HeaderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FluentCalendarPicker::SelectedColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FluentCalendarPicker::dateChanged(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
