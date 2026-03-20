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
    QByteArrayData data[20];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentTabBar_t qt_meta_stringdata_FluentTabBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FluentTabBar"
QT_MOC_LITERAL(1, 13, 22), // "BackgroundColorChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 20), // "SelectedColorChanged"
QT_MOC_LITERAL(5, 64, 16), // "TextColorChanged"
QT_MOC_LITERAL(6, 81, 18), // "BorderColorChanged"
QT_MOC_LITERAL(7, 100, 15), // "BackgroundColor"
QT_MOC_LITERAL(8, 116, 13), // "SelectedColor"
QT_MOC_LITERAL(9, 130, 9), // "TextColor"
QT_MOC_LITERAL(10, 140, 11), // "BorderColor"
QT_MOC_LITERAL(11, 152, 8), // "TabWidth"
QT_MOC_LITERAL(12, 161, 9), // "TabHeight"
QT_MOC_LITERAL(13, 171, 8), // "FontSize"
QT_MOC_LITERAL(14, 180, 10), // "TabSpacing"
QT_MOC_LITERAL(15, 191, 9), // "TabMargin"
QT_MOC_LITERAL(16, 201, 16), // "TabWidgetSpacing"
QT_MOC_LITERAL(17, 218, 15), // "MoveAnamination"
QT_MOC_LITERAL(18, 234, 16), // "CurSelectRectPos"
QT_MOC_LITERAL(19, 251, 8) // "ShowIcon"

    },
    "FluentTabBar\0BackgroundColorChanged\0"
    "\0value\0SelectedColorChanged\0"
    "TextColorChanged\0BorderColorChanged\0"
    "BackgroundColor\0SelectedColor\0TextColor\0"
    "BorderColor\0TabWidth\0TabHeight\0FontSize\0"
    "TabSpacing\0TabMargin\0TabWidgetSpacing\0"
    "MoveAnamination\0CurSelectRectPos\0"
    "ShowIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentTabBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      13,   46, // properties
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
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::Int, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Int, 0x00094103,
      19, QMetaType::Bool, 0x00095103,

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
       0,
       0,
       0,

       0        // eod
};

void FluentTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BackgroundColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->SelectedColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->TextColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->BorderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentTabBar::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentTabBar::BackgroundColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentTabBar::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentTabBar::SelectedColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentTabBar::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentTabBar::TextColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluentTabBar::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentTabBar::BorderColorChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentTabBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getSelectedColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
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
        case 1: _t->setSelectedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
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

// SIGNAL 0
void FluentTabBar::BackgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentTabBar::SelectedColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentTabBar::TextColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FluentTabBar::BorderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
