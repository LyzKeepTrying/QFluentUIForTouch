/****************************************************************************
** Meta object code from reading C++ file 'fluent_line_spin_box.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_line_spin_box.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_line_spin_box.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentLineSpinBox_t {
    QByteArrayData data[17];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentLineSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentLineSpinBox_t qt_meta_stringdata_FluentLineSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FluentLineSpinBox"
QT_MOC_LITERAL(1, 18, 15), // "BackgroundColor"
QT_MOC_LITERAL(2, 34, 9), // "TextColor"
QT_MOC_LITERAL(3, 44, 18), // "BorderFocusOnColor"
QT_MOC_LITERAL(4, 63, 19), // "BorderFocusOffColor"
QT_MOC_LITERAL(5, 83, 8), // "FontSize"
QT_MOC_LITERAL(6, 92, 13), // "SliderOnColor"
QT_MOC_LITERAL(7, 106, 14), // "SliderOffColor"
QT_MOC_LITERAL(8, 121, 10), // "ThumbColor"
QT_MOC_LITERAL(9, 132, 16), // "ThumbBorderColor"
QT_MOC_LITERAL(10, 149, 11), // "ThumbRadius"
QT_MOC_LITERAL(11, 161, 9), // "LineWidth"
QT_MOC_LITERAL(12, 171, 10), // "ShowCursor"
QT_MOC_LITERAL(13, 182, 14), // "ThumbIsPressed"
QT_MOC_LITERAL(14, 197, 14), // "DirectionState"
QT_MOC_LITERAL(15, 212, 15), // "Qt::Orientation"
QT_MOC_LITERAL(16, 228, 9) // "PaintStep"

    },
    "FluentLineSpinBox\0BackgroundColor\0"
    "TextColor\0BorderFocusOnColor\0"
    "BorderFocusOffColor\0FontSize\0SliderOnColor\0"
    "SliderOffColor\0ThumbColor\0ThumbBorderColor\0"
    "ThumbRadius\0LineWidth\0ShowCursor\0"
    "ThumbIsPressed\0DirectionState\0"
    "Qt::Orientation\0PaintStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentLineSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      15,   14, // properties
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
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QColor, 0x00095103,
      10, QMetaType::QReal, 0x00095103,
      11, QMetaType::QReal, 0x00095103,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::Bool, 0x00095103,
      14, 0x80000000 | 15, 0x0009510b,
      16, QMetaType::Bool, 0x00095103,

       0        // eod
};

void FluentLineSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentLineSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBorderFocusOnColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBorderFocusOffColor(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getSliderOnColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getSliderOffColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->getThumbColor(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->getThumbBorderColor(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->getThumbRadius(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->getLineWidth(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getShowCursor(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getThumbIsPressed(); break;
        case 13: *reinterpret_cast< Qt::Orientation*>(_v) = _t->getDirectionState(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getPaintStep(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentLineSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBorderFocusOnColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderFocusOffColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setSliderOnColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setSliderOffColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setThumbColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setThumbBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 9: _t->setThumbRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 10: _t->setLineWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 11: _t->setShowCursor(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setThumbIsPressed(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setDirectionState(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 14: _t->setPaintStep(*reinterpret_cast< bool*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentLineSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_FluentLineSpinBox.data,
    qt_meta_data_FluentLineSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentLineSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentLineSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentLineSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int FluentLineSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
