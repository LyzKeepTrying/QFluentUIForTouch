/****************************************************************************
** Meta object code from reading C++ file 'fluent_tab_bar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_tab_bar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_tab_bar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentTabBar_t {
    QByteArrayData data[14];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentTabBar_t qt_meta_stringdata_FluentTabBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FluentTabBar"
QT_MOC_LITERAL(1, 13, 15), // "BackgroundColor"
QT_MOC_LITERAL(2, 29, 9), // "TextColor"
QT_MOC_LITERAL(3, 39, 13), // "SelectedColor"
QT_MOC_LITERAL(4, 53, 11), // "BorderColor"
QT_MOC_LITERAL(5, 65, 8), // "TabWidth"
QT_MOC_LITERAL(6, 74, 9), // "TabHeight"
QT_MOC_LITERAL(7, 84, 8), // "FontSize"
QT_MOC_LITERAL(8, 93, 10), // "TabSpacing"
QT_MOC_LITERAL(9, 104, 9), // "TabMargin"
QT_MOC_LITERAL(10, 114, 16), // "TabWidgetSpacing"
QT_MOC_LITERAL(11, 131, 15), // "MoveAnamination"
QT_MOC_LITERAL(12, 147, 16), // "CurSelectRectPos"
QT_MOC_LITERAL(13, 164, 8) // "ShowIcon"

    },
    "FluentTabBar\0BackgroundColor\0TextColor\0"
    "SelectedColor\0BorderColor\0TabWidth\0"
    "TabHeight\0FontSize\0TabSpacing\0TabMargin\0"
    "TabWidgetSpacing\0MoveAnamination\0"
    "CurSelectRectPos\0ShowIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentTabBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
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
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Int, 0x00094103,
      13, QMetaType::Bool, 0x00095103,

       0        // eod
};

void FluentTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentTabBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getSelectedColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getTabWidth(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getTabHeight(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getTabSpacing(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getTabMargin(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->getTabWidgetSpacing(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getMoveAnamination(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->getCurSelectRectPos(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getShowIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentTabBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setSelectedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setTabWidth(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setTabHeight(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setTabSpacing(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setTabMargin(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setTabWidgetSpacing(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setMoveAnamination(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setCurSelectRectPos(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setShowIcon(*reinterpret_cast< bool*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentTabBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabBar::staticMetaObject>(),
    qt_meta_stringdata_FluentTabBar.data,
    qt_meta_data_FluentTabBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentTabBar.stringdata0))
        return static_cast<void*>(this);
    return QTabBar::qt_metacast(_clname);
}

int FluentTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
