/****************************************************************************
** Meta object code from reading C++ file 'fluent_icon_toggle_button.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_icon_toggle_button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_icon_toggle_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentIconToggleButton_t {
    QByteArrayData data[17];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentIconToggleButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentIconToggleButton_t qt_meta_stringdata_FluentIconToggleButton = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FluentIconToggleButton"
QT_MOC_LITERAL(1, 23, 22), // "BackgroundColorChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "value"
QT_MOC_LITERAL(4, 53, 18), // "BorderColorChanged"
QT_MOC_LITERAL(5, 72, 16), // "TextColorChanged"
QT_MOC_LITERAL(6, 89, 29), // "ToggledBackgroundColorChanged"
QT_MOC_LITERAL(7, 119, 15), // "BackgroundColor"
QT_MOC_LITERAL(8, 135, 11), // "BorderColor"
QT_MOC_LITERAL(9, 147, 9), // "TextColor"
QT_MOC_LITERAL(10, 157, 22), // "ToggledBackgroundColor"
QT_MOC_LITERAL(11, 180, 13), // "IconTopMargin"
QT_MOC_LITERAL(12, 194, 13), // "IconTextSpace"
QT_MOC_LITERAL(13, 208, 8), // "FontSize"
QT_MOC_LITERAL(14, 217, 11), // "ToggledIcon"
QT_MOC_LITERAL(15, 229, 11), // "ToggledText"
QT_MOC_LITERAL(16, 241, 14) // "TextIsOustside"

    },
    "FluentIconToggleButton\0BackgroundColorChanged\0"
    "\0value\0BorderColorChanged\0TextColorChanged\0"
    "ToggledBackgroundColorChanged\0"
    "BackgroundColor\0BorderColor\0TextColor\0"
    "ToggledBackgroundColor\0IconTopMargin\0"
    "IconTextSpace\0FontSize\0ToggledIcon\0"
    "ToggledText\0TextIsOustside"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentIconToggleButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      10,   46, // properties
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
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::Int, 0x00095103,
      14, QMetaType::QIcon, 0x00095103,
      15, QMetaType::QString, 0x00095103,
      16, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void FluentIconToggleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentIconToggleButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BackgroundColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->BorderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->TextColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->ToggledBackgroundColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentIconToggleButton::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentIconToggleButton::BackgroundColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentIconToggleButton::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentIconToggleButton::BorderColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentIconToggleButton::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentIconToggleButton::TextColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluentIconToggleButton::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentIconToggleButton::ToggledBackgroundColorChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentIconToggleButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getToggledBackgroundColor(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getIconTopMargin(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getIconTextSpace(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 7: *reinterpret_cast< QIcon*>(_v) = _t->getToggledIcon(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getToggledText(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getTextIsOustside(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentIconToggleButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setToggledBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setIconTopMargin(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setIconTextSpace(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setToggledIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 8: _t->setToggledText(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setTextIsOustside(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FluentIconToggleButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_meta_stringdata_FluentIconToggleButton.data,
    qt_meta_data_FluentIconToggleButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentIconToggleButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentIconToggleButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentIconToggleButton.stringdata0))
        return static_cast<void*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int FluentIconToggleButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
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
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FluentIconToggleButton::BackgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentIconToggleButton::BorderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentIconToggleButton::TextColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FluentIconToggleButton::ToggledBackgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
