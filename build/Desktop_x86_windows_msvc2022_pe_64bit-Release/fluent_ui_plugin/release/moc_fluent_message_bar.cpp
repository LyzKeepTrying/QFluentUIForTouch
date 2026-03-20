/****************************************************************************
** Meta object code from reading C++ file 'fluent_message_bar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_message_bar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_message_bar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentMessageBar_t {
    QByteArrayData data[17];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentMessageBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentMessageBar_t qt_meta_stringdata_FluentMessageBar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FluentMessageBar"
QT_MOC_LITERAL(1, 17, 15), // "BackgroundColor"
QT_MOC_LITERAL(2, 33, 11), // "BorderColor"
QT_MOC_LITERAL(3, 45, 9), // "TextColor"
QT_MOC_LITERAL(4, 55, 6), // "Radius"
QT_MOC_LITERAL(5, 62, 6), // "Height"
QT_MOC_LITERAL(6, 69, 8), // "FontSize"
QT_MOC_LITERAL(7, 78, 11), // "MessageType"
QT_MOC_LITERAL(8, 90, 4), // "Info"
QT_MOC_LITERAL(9, 95, 7), // "Warning"
QT_MOC_LITERAL(10, 103, 5), // "Error"
QT_MOC_LITERAL(11, 109, 8), // "Position"
QT_MOC_LITERAL(12, 118, 7), // "LeftTop"
QT_MOC_LITERAL(13, 126, 10), // "LeftBottom"
QT_MOC_LITERAL(14, 137, 8), // "RightTop"
QT_MOC_LITERAL(15, 146, 11), // "RightBottom"
QT_MOC_LITERAL(16, 158, 9) // "TopCenter"

    },
    "FluentMessageBar\0BackgroundColor\0"
    "BorderColor\0TextColor\0Radius\0Height\0"
    "FontSize\0MessageType\0Info\0Warning\0"
    "Error\0Position\0LeftTop\0LeftBottom\0"
    "RightTop\0RightBottom\0TopCenter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentMessageBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       2,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,

 // enums: name, alias, flags, count, data
       7,    7, 0x2,    3,   42,
      11,   11, 0x2,    5,   48,

 // enum data: key, value
       8, uint(FluentMessageBar::MessageType::Info),
       9, uint(FluentMessageBar::MessageType::Warning),
      10, uint(FluentMessageBar::MessageType::Error),
      12, uint(FluentMessageBar::Position::LeftTop),
      13, uint(FluentMessageBar::Position::LeftBottom),
      14, uint(FluentMessageBar::Position::RightTop),
      15, uint(FluentMessageBar::Position::RightBottom),
      16, uint(FluentMessageBar::Position::TopCenter),

       0        // eod
};

void FluentMessageBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentMessageBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getRadius(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getHeight(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentMessageBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setRadius(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentMessageBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FluentMessageBar.data,
    qt_meta_data_FluentMessageBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentMessageBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentMessageBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentMessageBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FluentMessageBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
