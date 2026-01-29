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
    QByteArrayData data[13];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentCalendarPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentCalendarPicker_t qt_meta_stringdata_FluentCalendarPicker = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FluentCalendarPicker"
QT_MOC_LITERAL(1, 21, 11), // "dateChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "date"
QT_MOC_LITERAL(4, 39, 15), // "BackgroundColor"
QT_MOC_LITERAL(5, 55, 11), // "BorderColor"
QT_MOC_LITERAL(6, 67, 11), // "HeaderColor"
QT_MOC_LITERAL(7, 79, 9), // "TextColor"
QT_MOC_LITERAL(8, 89, 13), // "SelectedColor"
QT_MOC_LITERAL(9, 103, 12), // "HeaderHeight"
QT_MOC_LITERAL(10, 116, 13), // "WeekdayHeight"
QT_MOC_LITERAL(11, 130, 11), // "CellSpacing"
QT_MOC_LITERAL(12, 142, 8) // "FontSize"

    },
    "FluentCalendarPicker\0dateChanged\0\0"
    "date\0BackgroundColor\0BorderColor\0"
    "HeaderColor\0TextColor\0SelectedColor\0"
    "HeaderHeight\0WeekdayHeight\0CellSpacing\0"
    "FontSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentCalendarPicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       9,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    3,

 // properties: name, type, flags
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Int, 0x00095103,

       0        // eod
};

void FluentCalendarPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentCalendarPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentCalendarPicker::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentCalendarPicker::dateChanged)) {
                *result = 0;
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
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getHeaderColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
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
        case 2: _t->setHeaderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
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
void FluentCalendarPicker::dateChanged(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
