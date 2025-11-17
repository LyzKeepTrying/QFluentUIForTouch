/****************************************************************************
** Meta object code from reading C++ file 'fluent_title_bar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_title_bar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_title_bar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentTitleBar_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentTitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentTitleBar_t qt_meta_stringdata_FluentTitleBar = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FluentTitleBar"
QT_MOC_LITERAL(1, 15, 15), // "BackgroundColor"
QT_MOC_LITERAL(2, 31, 9), // "TextColor"
QT_MOC_LITERAL(3, 41, 12), // "TimeFontSize"
QT_MOC_LITERAL(4, 54, 13), // "TitleFontSize"
QT_MOC_LITERAL(5, 68, 9), // "ShowTitle"
QT_MOC_LITERAL(6, 78, 5), // "Title"
QT_MOC_LITERAL(7, 84, 12), // "ShowDateTime"
QT_MOC_LITERAL(8, 97, 8) // "TimeText"

    },
    "FluentTitleBar\0BackgroundColor\0TextColor\0"
    "TimeFontSize\0TitleFontSize\0ShowTitle\0"
    "Title\0ShowDateTime\0TimeText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentTitleBar[] = {

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
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::QString, 0x00094103,

       0        // eod
};

void FluentTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentTitleBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getTimeFontSize(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getTitleFontSize(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getShowTitle(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getTitle(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getShowDateTime(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getTimeText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentTitleBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setTimeFontSize(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setTitleFontSize(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setShowTitle(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setShowDateTime(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setTimeText(*reinterpret_cast< QString*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentTitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FluentTitleBar.data,
    qt_meta_data_FluentTitleBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentTitleBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FluentTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
