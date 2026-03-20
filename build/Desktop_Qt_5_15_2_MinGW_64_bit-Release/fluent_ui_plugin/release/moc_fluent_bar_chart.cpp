/****************************************************************************
** Meta object code from reading C++ file 'fluent_bar_chart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_bar_chart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_bar_chart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentBarChart_t {
    QByteArrayData data[22];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentBarChart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentBarChart_t qt_meta_stringdata_FluentBarChart = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FluentBarChart"
QT_MOC_LITERAL(1, 15, 22), // "BackgroundColorChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 18), // "BorderColorChanged"
QT_MOC_LITERAL(5, 64, 16), // "TextColorChanged"
QT_MOC_LITERAL(6, 81, 17), // "AnimationProgress"
QT_MOC_LITERAL(7, 99, 15), // "EnableAnimation"
QT_MOC_LITERAL(8, 115, 15), // "BackgroundColor"
QT_MOC_LITERAL(9, 131, 11), // "BorderColor"
QT_MOC_LITERAL(10, 143, 9), // "TextColor"
QT_MOC_LITERAL(11, 153, 11), // "BorderWidth"
QT_MOC_LITERAL(12, 165, 10), // "BarSpacing"
QT_MOC_LITERAL(13, 176, 8), // "FontSize"
QT_MOC_LITERAL(14, 185, 14), // "ShowValueLabel"
QT_MOC_LITERAL(15, 200, 10), // "ShowLegend"
QT_MOC_LITERAL(16, 211, 15), // "ShowXAxisValues"
QT_MOC_LITERAL(17, 227, 15), // "ShowYAxisValues"
QT_MOC_LITERAL(18, 243, 18), // "ShowReferenceLines"
QT_MOC_LITERAL(19, 262, 8), // "MinScale"
QT_MOC_LITERAL(20, 271, 8), // "MaxScale"
QT_MOC_LITERAL(21, 280, 6) // "Margin"

    },
    "FluentBarChart\0BackgroundColorChanged\0"
    "\0value\0BorderColorChanged\0TextColorChanged\0"
    "AnimationProgress\0EnableAnimation\0"
    "BackgroundColor\0BorderColor\0TextColor\0"
    "BorderWidth\0BarSpacing\0FontSize\0"
    "ShowValueLabel\0ShowLegend\0ShowXAxisValues\0"
    "ShowYAxisValues\0ShowReferenceLines\0"
    "MinScale\0MaxScale\0Margin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentBarChart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      16,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

 // properties: name, type, flags
       6, QMetaType::Double, 0x00094103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::QColor, 0x00495103,
       9, QMetaType::QColor, 0x00495103,
      10, QMetaType::QColor, 0x00495103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::Int, 0x00095103,
      14, QMetaType::Bool, 0x00095103,
      15, QMetaType::Bool, 0x00095103,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::Double, 0x00095103,
      20, QMetaType::Double, 0x00095103,
      21, QMetaType::Int, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,
       0,
       0,
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

void FluentBarChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluentBarChart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BackgroundColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->BorderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->TextColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluentBarChart::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentBarChart::BackgroundColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluentBarChart::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentBarChart::BorderColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluentBarChart::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FluentBarChart::TextColorChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentBarChart *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getAnimationProgress(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getEnableAnimation(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getBorderWidth(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getBarSpacing(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getShowValueLabel(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getShowLegend(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getShowXAxisValues(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getShowYAxisValues(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getShowReferenceLines(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->getMinScale(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->getMaxScale(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->getMargin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentBarChart *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimationProgress(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setEnableAnimation(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setBorderWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setBarSpacing(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setShowValueLabel(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setShowLegend(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setShowXAxisValues(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setShowYAxisValues(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setShowReferenceLines(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setMinScale(*reinterpret_cast< double*>(_v)); break;
        case 14: _t->setMaxScale(*reinterpret_cast< double*>(_v)); break;
        case 15: _t->setMargin(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FluentBarChart::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FluentBarChart.data,
    qt_meta_data_FluentBarChart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentBarChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentBarChart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentBarChart.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FluentBarChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void FluentBarChart::BackgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FluentBarChart::BorderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FluentBarChart::TextColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
