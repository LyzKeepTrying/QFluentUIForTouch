/****************************************************************************
** Meta object code from reading C++ file 'fluent_line_chart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../fluent_ui_plugin/include/fluent_line_chart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluent_line_chart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FluentLineChart_t {
    QByteArrayData data[19];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FluentLineChart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FluentLineChart_t qt_meta_stringdata_FluentLineChart = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FluentLineChart"
QT_MOC_LITERAL(1, 16, 17), // "AnimationProgress"
QT_MOC_LITERAL(2, 34, 15), // "EnableAnimation"
QT_MOC_LITERAL(3, 50, 15), // "BackgroundColor"
QT_MOC_LITERAL(4, 66, 11), // "BorderColor"
QT_MOC_LITERAL(5, 78, 9), // "TextColor"
QT_MOC_LITERAL(6, 88, 9), // "LineColor"
QT_MOC_LITERAL(7, 98, 11), // "BorderWidth"
QT_MOC_LITERAL(8, 110, 8), // "FontSize"
QT_MOC_LITERAL(9, 119, 14), // "ShowPointLabel"
QT_MOC_LITERAL(10, 134, 10), // "ShowLegend"
QT_MOC_LITERAL(11, 145, 11), // "PointRadius"
QT_MOC_LITERAL(12, 157, 9), // "LineWidth"
QT_MOC_LITERAL(13, 167, 15), // "ShowXAxisValues"
QT_MOC_LITERAL(14, 183, 15), // "ShowYAxisValues"
QT_MOC_LITERAL(15, 199, 18), // "ShowReferenceLines"
QT_MOC_LITERAL(16, 218, 8), // "MinScale"
QT_MOC_LITERAL(17, 227, 8), // "MaxScale"
QT_MOC_LITERAL(18, 236, 6) // "Margin"

    },
    "FluentLineChart\0AnimationProgress\0"
    "EnableAnimation\0BackgroundColor\0"
    "BorderColor\0TextColor\0LineColor\0"
    "BorderWidth\0FontSize\0ShowPointLabel\0"
    "ShowLegend\0PointRadius\0LineWidth\0"
    "ShowXAxisValues\0ShowYAxisValues\0"
    "ShowReferenceLines\0MinScale\0MaxScale\0"
    "Margin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FluentLineChart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      18,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00094103,
       2, QMetaType::Bool, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Double, 0x00095103,
      12, QMetaType::Double, 0x00095103,
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::Bool, 0x00095103,
      15, QMetaType::Bool, 0x00095103,
      16, QMetaType::Double, 0x00095103,
      17, QMetaType::Double, 0x00095103,
      18, QMetaType::Int, 0x00095103,

       0        // eod
};

void FluentLineChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluentLineChart *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getAnimationProgress(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getEnableAnimation(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getLineColor(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getBorderWidth(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getShowPointLabel(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getShowLegend(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->getPointRadius(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->getLineWidth(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getShowXAxisValues(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getShowYAxisValues(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getShowReferenceLines(); break;
        case 15: *reinterpret_cast< double*>(_v) = _t->getMinScale(); break;
        case 16: *reinterpret_cast< double*>(_v) = _t->getMaxScale(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->getMargin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluentLineChart *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimationProgress(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setEnableAnimation(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setLineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setBorderWidth(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setShowPointLabel(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setShowLegend(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setPointRadius(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setLineWidth(*reinterpret_cast< double*>(_v)); break;
        case 12: _t->setShowXAxisValues(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setShowYAxisValues(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setShowReferenceLines(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setMinScale(*reinterpret_cast< double*>(_v)); break;
        case 16: _t->setMaxScale(*reinterpret_cast< double*>(_v)); break;
        case 17: _t->setMargin(*reinterpret_cast< int*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject FluentLineChart::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FluentLineChart.data,
    qt_meta_data_FluentLineChart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FluentLineChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluentLineChart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluentLineChart.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FluentLineChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
