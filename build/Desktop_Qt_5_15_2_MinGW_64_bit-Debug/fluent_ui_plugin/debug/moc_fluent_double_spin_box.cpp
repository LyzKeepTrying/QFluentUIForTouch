/****************************************************************************
** Meta object code from reading C++ file 'fluent_double_spin_box.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_double_spin_box.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_double_spin_box.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentDoubleSpinBox_t {
    QByteArrayData data[9];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentDoubleSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentDoubleSpinBox_t qt_meta_stringdata_FluentDoubleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FluentDoubleSpinBox"
QT_MOC_LITERAL(1, 20, 15), // "BackgroundColor"
QT_MOC_LITERAL(2, 36, 9), // "TextColor"
QT_MOC_LITERAL(3, 46, 18), // "BorderFocusOnColor"
QT_MOC_LITERAL(4, 65, 19), // "BorderFocusOffColor"
QT_MOC_LITERAL(5, 85, 8), // "FontSize"
QT_MOC_LITERAL(6, 94, 19), // "PlusButtonIsPressed"
QT_MOC_LITERAL(7, 114, 20), // "MinusButtonIsPressed"
QT_MOC_LITERAL(8, 135, 10) // "ShowCursor"

    },
    "FluentDoubleSpinBox\0BackgroundColor\0"
    "TextColor\0BorderFocusOnColor\0"
    "BorderFocusOffColor\0FontSize\0"
    "PlusButtonIsPressed\0MinusButtonIsPressed\0"
    "ShowCursor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentDoubleSpinBox[] = {

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

void FluentDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentDoubleSpinBox *>(_o);
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
        auto *_t = static_cast<FluentDoubleSpinBox *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject FluentDoubleSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDoubleSpinBox::staticMetaObject>(),
    qt_meta_stringdata_FluentDoubleSpinBox.data,
    qt_meta_data_FluentDoubleSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentDoubleSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QDoubleSpinBox::qt_metacast(_clname);
}

int FluentDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
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
