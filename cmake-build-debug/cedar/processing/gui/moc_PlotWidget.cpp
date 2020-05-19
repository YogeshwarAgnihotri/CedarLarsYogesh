/****************************************************************************
** Meta object code from reading C++ file 'PlotWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/PlotWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlotWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__proc__gui__PlotWidgetPrivate__LabeledPlot_t {
    QByteArrayData data[9];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__PlotWidgetPrivate__LabeledPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__PlotWidgetPrivate__LabeledPlot_t qt_meta_stringdata_cedar__proc__gui__PlotWidgetPrivate__LabeledPlot = {
    {
QT_MOC_LITERAL(0, 0, 48), // "cedar::proc::gui::PlotWidgetP..."
QT_MOC_LITERAL(1, 49, 15), // "openDefaultPlot"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 15), // "openHistoryPlot"
QT_MOC_LITERAL(4, 82, 10), // "openQCPlot"
QT_MOC_LITERAL(5, 93, 11), // "openQt5Plot"
QT_MOC_LITERAL(6, 105, 13), // "openImagePlot"
QT_MOC_LITERAL(7, 119, 15), // "openMatDataPlot"
QT_MOC_LITERAL(8, 135, 16) // "openSpecificPlot"

    },
    "cedar::proc::gui::PlotWidgetPrivate::LabeledPlot\0"
    "openDefaultPlot\0\0openHistoryPlot\0"
    "openQCPlot\0openQt5Plot\0openImagePlot\0"
    "openMatDataPlot\0openSpecificPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__PlotWidgetPrivate__LabeledPlot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::PlotWidgetPrivate::LabeledPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LabeledPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openDefaultPlot(); break;
        case 1: _t->openHistoryPlot(); break;
        case 2: _t->openQCPlot(); break;
        case 3: _t->openQt5Plot(); break;
        case 4: _t->openImagePlot(); break;
        case 5: _t->openMatDataPlot(); break;
        case 6: _t->openSpecificPlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cedar::proc::gui::PlotWidgetPrivate::LabeledPlot::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_cedar__proc__gui__PlotWidgetPrivate__LabeledPlot.data,
    qt_meta_data_cedar__proc__gui__PlotWidgetPrivate__LabeledPlot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::proc::gui::PlotWidgetPrivate::LabeledPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::PlotWidgetPrivate::LabeledPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__PlotWidgetPrivate__LabeledPlot.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cedar::proc::gui::PlotWidgetPrivate::LabeledPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
