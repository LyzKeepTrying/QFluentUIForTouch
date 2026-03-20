/****************************************************************************
** Meta object code from reading C++ file 'fluent_combo_box.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_combo_box.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_combo_box.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentComboBoxDelegate_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentComboBoxDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentComboBoxDelegate_t qt_meta_stringdata_FluentComboBoxDelegate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FluentComboBoxDelegate"
QT_MOC_LITERAL(1, 23, 15), // "BackgroundColor"
QT_MOC_LITERAL(2, 39, 9), // "TextColor"
QT_MOC_LITERAL(3, 49, 14), // "HighlightColor"
QT_MOC_LITERAL(4, 64, 8), // "FontSize"
QT_MOC_LITERAL(5, 73, 9) // "RowHeight"

    },
    "FluentComboBoxDelegate\0BackgroundColor\0"
    "TextColor\0HighlightColor\0FontSize\0"
    "RowHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentComboBoxDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00094103,
       2, QMetaType::QColor, 0x00094103,
       3, QMetaType::QColor, 0x00094103,
       4, QMetaType::QReal, 0x00094103,
       5, QMetaType::Int, 0x00094103,

       0        // eod
};

void FluentComboBoxDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentComboBoxDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getHighlightColor(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->getFontSize(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getRowHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentComboBoxDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setHighlightColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setFontSize(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setRowHeight(*reinterpret_cast< int*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentComboBoxDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_FluentComboBoxDelegate.data,
    qt_meta_data_FluentComboBoxDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentComboBoxDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentComboBoxDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentComboBoxDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int FluentComboBoxDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_FluentComboBox_t {
    QByteArrayData data[19];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentComboBox_t qt_meta_stringdata_FluentComboBox = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FluentComboBox"
QT_MOC_LITERAL(1, 15, 22), // "BackgroundColorChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 16), // "TextColorChanged"
QT_MOC_LITERAL(5, 62, 18), // "BorderColorChanged"
QT_MOC_LITERAL(6, 81, 21), // "HighlightColorChanged"
QT_MOC_LITERAL(7, 103, 15), // "FontSizeChanged"
QT_MOC_LITERAL(8, 119, 16), // "RowHeightChanged"
QT_MOC_LITERAL(9, 136, 15), // "BackgroundColor"
QT_MOC_LITERAL(10, 152, 9), // "TextColor"
QT_MOC_LITERAL(11, 162, 11), // "BorderColor"
QT_MOC_LITERAL(12, 174, 10), // "ArrowColor"
QT_MOC_LITERAL(13, 185, 10), // "ArrowWidth"
QT_MOC_LITERAL(14, 196, 9), // "ArrowSize"
QT_MOC_LITERAL(15, 206, 14), // "HighlightColor"
QT_MOC_LITERAL(16, 221, 8), // "FontSize"
QT_MOC_LITERAL(17, 230, 9), // "RowHeight"
QT_MOC_LITERAL(18, 240, 17) // "AnimationProgress"

    },
    "FluentComboBox\0BackgroundColorChanged\0"
    "\0value\0TextColorChanged\0BorderColorChanged\0"
    "HighlightColorChanged\0FontSizeChanged\0"
    "RowHeightChanged\0BackgroundColor\0"
    "TextColor\0BorderColor\0ArrowColor\0"
    "ArrowWidth\0ArrowSize\0HighlightColor\0"
    "FontSize\0RowHeight\0AnimationProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      10,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,
       8,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
       9, QMetaType::QColor, 0x00495103,
      10, QMetaType::QColor, 0x00495103,
      11, QMetaType::QColor, 0x00495103,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::Int, 0x00095103,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::QColor, 0x00495103,
      16, QMetaType::QReal, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::QReal, 0x00094103,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       0,
       0,
       3,
       4,
       5,
       0,

       0        // eod
};

void FluentComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BackgroundColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->TextColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->BorderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->HighlightColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->FontSizeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->RowHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentComboBox::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentComboBox::BackgroundColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentComboBox::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentComboBox::TextColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentComboBox::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentComboBox::BorderColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluentComboBox::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentComboBox::HighlightColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FluentComboBox::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentComboBox::FontSizeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FluentComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentComboBox::RowHeightChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getArrowColor(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getArrowWidth(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getArrowSize(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getHighlightColor(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->getFontSize(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getRowHeight(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->getAnimationProgress(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setArrowColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setArrowWidth(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setArrowSize(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setHighlightColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setFontSize(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setRowHeight(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setAnimationProgress(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FluentComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_FluentComboBox.data,
    qt_meta_data_FluentComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int FluentComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void FluentComboBox::BackgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentComboBox::TextColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentComboBox::BorderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FluentComboBox::HighlightColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FluentComboBox::FontSizeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FluentComboBox::RowHeightChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
