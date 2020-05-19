/****************************************************************************
** Meta object code from reading C++ file 'QCLinePlot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/QCLinePlot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCLinePlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__aux__gui__QCLinePlot_t {
    QByteArrayData data[17];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__QCLinePlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__QCLinePlot_t qt_meta_stringdata_cedar__aux__gui__QCLinePlot = {
    {
QT_MOC_LITERAL(0, 0, 27), // "cedar::aux::gui::QCLinePlot"
QT_MOC_LITERAL(1, 28, 7), // "convert"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "setAutomaticYAxisScaling"
QT_MOC_LITERAL(4, 62, 20), // "setFixedYAxisScaling"
QT_MOC_LITERAL(5, 83, 5), // "lower"
QT_MOC_LITERAL(6, 89, 5), // "upper"
QT_MOC_LITERAL(7, 95, 20), // "setFixedXAxisScaling"
QT_MOC_LITERAL(8, 116, 10), // "showLegend"
QT_MOC_LITERAL(9, 127, 4), // "show"
QT_MOC_LITERAL(10, 132, 8), // "showGrid"
QT_MOC_LITERAL(11, 141, 20), // "toggleDiscreteMetric"
QT_MOC_LITERAL(12, 162, 18), // "contextMenuRequest"
QT_MOC_LITERAL(13, 181, 18), // "autoScalingChanged"
QT_MOC_LITERAL(14, 200, 17), // "axisLimitsChanged"
QT_MOC_LITERAL(15, 218, 21), // "gridVisibilityChanged"
QT_MOC_LITERAL(16, 240, 21) // "discreteMetricChanged"

    },
    "cedar::aux::gui::QCLinePlot\0convert\0"
    "\0setAutomaticYAxisScaling\0"
    "setFixedYAxisScaling\0lower\0upper\0"
    "setFixedXAxisScaling\0showLegend\0show\0"
    "showGrid\0toggleDiscreteMetric\0"
    "contextMenuRequest\0autoScalingChanged\0"
    "axisLimitsChanged\0gridVisibilityChanged\0"
    "discreteMetricChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__QCLinePlot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       4,    2,   92,    2, 0x0a /* Public */,
       7,    2,   97,    2, 0x0a /* Public */,
       8,    1,  102,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x28 /* Private | MethodCloned */,
      10,    1,  106,    2, 0x08 /* Private */,
      10,    0,  109,    2, 0x28 /* Private | MethodCloned */,
      11,    1,  110,    2, 0x08 /* Private */,
      12,    1,  113,    2, 0x08 /* Private */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    0,  117,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::QCLinePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCLinePlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->convert(); break;
        case 1: _t->setAutomaticYAxisScaling(); break;
        case 2: _t->setFixedYAxisScaling(); break;
        case 3: _t->setFixedYAxisScaling((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->setFixedXAxisScaling((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->showLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showLegend(); break;
        case 7: _t->showGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showGrid(); break;
        case 9: _t->toggleDiscreteMetric((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->contextMenuRequest((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 11: _t->autoScalingChanged(); break;
        case 12: _t->axisLimitsChanged(); break;
        case 13: _t->gridVisibilityChanged(); break;
        case 14: _t->discreteMetricChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCLinePlot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCLinePlot::convert)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cedar::aux::gui::QCLinePlot::staticMetaObject = { {
    &cedar::aux::gui::MultiPlotInterface::staticMetaObject,
    qt_meta_stringdata_cedar__aux__gui__QCLinePlot.data,
    qt_meta_data_cedar__aux__gui__QCLinePlot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::aux::gui::QCLinePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::QCLinePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__QCLinePlot.stringdata0))
        return static_cast<void*>(this);
    return cedar::aux::gui::MultiPlotInterface::qt_metacast(_clname);
}

int cedar::aux::gui::QCLinePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::MultiPlotInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::QCLinePlot::convert()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
