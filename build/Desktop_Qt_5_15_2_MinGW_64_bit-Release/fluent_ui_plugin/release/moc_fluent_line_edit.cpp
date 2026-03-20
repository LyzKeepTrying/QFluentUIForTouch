/****************************************************************************
** Meta object code from reading C++ file 'fluent_line_edit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_line_edit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_line_edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentLineEdit_t {
    QByteArrayData data[13];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentLineEdit_t qt_meta_stringdata_FluentLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FluentLineEdit"
QT_MOC_LITERAL(1, 15, 22), // "BackgroundColorChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 26), // "BorderFocusOffColorChanged"
QT_MOC_LITERAL(5, 72, 16), // "TextColorChanged"
QT_MOC_LITERAL(6, 89, 25), // "BorderFocusOnColorChanged"
QT_MOC_LITERAL(7, 115, 15), // "BackgroundColor"
QT_MOC_LITERAL(8, 131, 19), // "BorderFocusOffColor"
QT_MOC_LITERAL(9, 151, 9), // "TextColor"
QT_MOC_LITERAL(10, 161, 18), // "BorderFocusOnColor"
QT_MOC_LITERAL(11, 180, 8), // "FontSize"
QT_MOC_LITERAL(12, 189, 10) // "ShowCursor"

    },
    "FluentLineEdit\0BackgroundColorChanged\0"
    "\0value\0BorderFocusOffColorChanged\0"
    "TextColorChanged\0BorderFocusOnColorChanged\0"
    "BackgroundColor\0BorderFocusOffColor\0"
    "TextColor\0BorderFocusOnColor\0FontSize\0"
    "ShowCursor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       6,   46, // properties
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
       7, QMetaType::QColor, 0x00495103,
       8, QMetaType::QColor, 0x00495103,
       9, QMetaType::QColor, 0x00495103,
      10, QMetaType::QColor, 0x00495103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Bool, 0x00094103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,
       0,

       0        // eod
};

void FluentLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BackgroundColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->BorderFocusOffColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->TextColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->BorderFocusOnColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentLineEdit::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentLineEdit::BackgroundColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentLineEdit::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentLineEdit::BorderFocusOffColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentLineEdit::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentLineEdit::TextColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluentLineEdit::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentLineEdit::BorderFocusOnColorChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getBorderFocusOffColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBorderFocusOnColor(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getShowCursor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBorderFocusOffColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderFocusOnColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setShowCursor(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FluentLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_FluentLineEdit.data,
    qt_meta_data_FluentLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int FluentLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void FluentLineEdit::BackgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentLineEdit::BorderFocusOffColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentLineEdit::TextColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FluentLineEdit::BorderFocusOnColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
