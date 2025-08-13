/****************************************************************************
** Meta object code from reading C++ file 'fluent_circle_spin_box.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_circle_spin_box.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_circle_spin_box.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentCircleSpinBox_t {
    QByteArrayData data[17];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentCircleSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentCircleSpinBox_t qt_meta_stringdata_FluentCircleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FluentCircleSpinBox"
QT_MOC_LITERAL(1, 20, 15), // "BackgroundColor"
QT_MOC_LITERAL(2, 36, 9), // "TextColor"
QT_MOC_LITERAL(3, 46, 18), // "BorderFocusOnColor"
QT_MOC_LITERAL(4, 65, 19), // "BorderFocusOffColor"
QT_MOC_LITERAL(5, 85, 8), // "FontSize"
QT_MOC_LITERAL(6, 94, 13), // "SliderOnColor"
QT_MOC_LITERAL(7, 108, 14), // "SliderOffColor"
QT_MOC_LITERAL(8, 123, 10), // "ThumbColor"
QT_MOC_LITERAL(9, 134, 16), // "ThumbBorderColor"
QT_MOC_LITERAL(10, 151, 11), // "ThumbRadius"
QT_MOC_LITERAL(11, 163, 8), // "ArcWidth"
QT_MOC_LITERAL(12, 172, 10), // "ShowCursor"
QT_MOC_LITERAL(13, 183, 9), // "MaxArcLen"
QT_MOC_LITERAL(14, 193, 9), // "CurArcLen"
QT_MOC_LITERAL(15, 203, 13), // "ArcRectAdjust"
QT_MOC_LITERAL(16, 217, 14) // "ThumbIsPressed"

    },
    "FluentCircleSpinBox\0BackgroundColor\0"
    "TextColor\0BorderFocusOnColor\0"
    "BorderFocusOffColor\0FontSize\0SliderOnColor\0"
    "SliderOffColor\0ThumbColor\0ThumbBorderColor\0"
    "ThumbRadius\0ArcWidth\0ShowCursor\0"
    "MaxArcLen\0CurArcLen\0ArcRectAdjust\0"
    "ThumbIsPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentCircleSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      16,   14, // properties
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
      13, QMetaType::Int, 0x00095103,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::Bool, 0x00095103,

       0        // eod
};

void FluentCircleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentCircleSpinBox *>(_o);
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
        case 10: *reinterpret_cast< qreal*>(_v) = _t->getArcWidth(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getShowCursor(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->getMaxArcLen(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->getCurArcLen(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->getArcRectAdjust(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->getThumbIsPressed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentCircleSpinBox *>(_o);
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
        case 10: _t->setArcWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 11: _t->setShowCursor(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setMaxArcLen(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setCurArcLen(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setArcRectAdjust(*reinterpret_cast< int*>(_v)); break;
        case 15: _t->setThumbIsPressed(*reinterpret_cast< bool*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentCircleSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_FluentCircleSpinBox.data,
    qt_meta_data_FluentCircleSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentCircleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentCircleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentCircleSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int FluentCircleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
