/****************************************************************************
** Meta object code from reading C++ file 'fluent_spin_box.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_spin_box.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_spin_box.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentSpinBox_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentSpinBox_t qt_meta_stringdata_FluentSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FluentSpinBox"
QT_MOC_LITERAL(1, 14, 15), // "BackgroundColor"
QT_MOC_LITERAL(2, 30, 9), // "TextColor"
QT_MOC_LITERAL(3, 40, 18), // "BorderFocusOnColor"
QT_MOC_LITERAL(4, 59, 19), // "BorderFocusOffColor"
QT_MOC_LITERAL(5, 79, 8), // "FontSize"
QT_MOC_LITERAL(6, 88, 19), // "PlusButtonIsPressed"
QT_MOC_LITERAL(7, 108, 20), // "MinusButtonIsPressed"
QT_MOC_LITERAL(8, 129, 10) // "ShowCursor"

    },
    "FluentSpinBox\0BackgroundColor\0TextColor\0"
    "BorderFocusOnColor\0BorderFocusOffColor\0"
    "FontSize\0PlusButtonIsPressed\0"
    "MinusButtonIsPressed\0ShowCursor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void FluentSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBorderFocusOnColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBorderFocusOffColor(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getPlusButtonIsPressed(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getMinusButtonIsPressed(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getShowCursor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBorderFocusOnColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderFocusOffColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPlusButtonIsPressed(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setMinusButtonIsPressed(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setShowCursor(*reinterpret_cast< bool*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_FluentSpinBox.data,
    qt_meta_data_FluentSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int FluentSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
