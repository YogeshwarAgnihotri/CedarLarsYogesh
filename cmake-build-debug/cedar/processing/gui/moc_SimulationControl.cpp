/****************************************************************************
** Meta object code from reading C++ file 'SimulationControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/SimulationControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulationControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget_t {
    QByteArrayData data[7];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget_t qt_meta_stringdata_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 64), // "cedar::proc::gui::SimulationC..."
QT_MOC_LITERAL(1, 65, 23), // "startStopTriggerClicked"
QT_MOC_LITERAL(2, 89, 0), // ""
QT_MOC_LITERAL(3, 90, 14), // "triggerStarted"
QT_MOC_LITERAL(4, 105, 14), // "triggerStopped"
QT_MOC_LITERAL(5, 120, 20), // "triggerChangingState"
QT_MOC_LITERAL(6, 141, 17) // "singleStepClicked"

    },
    "cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget\0"
    "startStopTriggerClicked\0\0triggerStarted\0"
    "triggerStopped\0triggerChangingState\0"
    "singleStepClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TriggerControlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startStopTriggerClicked(); break;
        case 1: _t->triggerStarted(); break;
        case 2: _t->triggerStopped(); break;
        case 3: _t->triggerChangingState(); break;
        case 4: _t->singleStepClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget.data,
    qt_meta_data_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_cedar__proc__gui__SimulationControl_t {
    QByteArrayData data[13];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__SimulationControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__SimulationControl_t qt_meta_stringdata_cedar__proc__gui__SimulationControl = {
    {
QT_MOC_LITERAL(0, 0, 35), // "cedar::proc::gui::SimulationC..."
QT_MOC_LITERAL(1, 36, 25), // "signalTriggerCountChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 4), // "path"
QT_MOC_LITERAL(4, 68, 27), // "startPauseSimulationClicked"
QT_MOC_LITERAL(5, 96, 14), // "triggerStarted"
QT_MOC_LITERAL(6, 111, 18), // "allTriggersStopped"
QT_MOC_LITERAL(7, 130, 13), // "createClicked"
QT_MOC_LITERAL(8, 144, 13), // "removeClicked"
QT_MOC_LITERAL(9, 158, 22), // "updateAllTriggerColors"
QT_MOC_LITERAL(10, 181, 18), // "elementNameChanged"
QT_MOC_LITERAL(11, 200, 19), // "triggerCountChanged"
QT_MOC_LITERAL(12, 220, 11) // "triggerPath"

    },
    "cedar::proc::gui::SimulationControl\0"
    "signalTriggerCountChanged\0\0path\0"
    "startPauseSimulationClicked\0triggerStarted\0"
    "allTriggersStopped\0createClicked\0"
    "removeClicked\0updateAllTriggerColors\0"
    "elementNameChanged\0triggerCountChanged\0"
    "triggerPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__SimulationControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void cedar::proc::gui::SimulationControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimulationControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalTriggerCountChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->startPauseSimulationClicked(); break;
        case 2: _t->triggerStarted(); break;
        case 3: _t->allTriggersStopped(); break;
        case 4: _t->createClicked(); break;
        case 5: _t->removeClicked(); break;
        case 6: _t->updateAllTriggerColors(); break;
        case 7: _t->elementNameChanged(); break;
        case 8: _t->triggerCountChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimulationControl::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulationControl::signalTriggerCountChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cedar::proc::gui::SimulationControl::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_cedar__proc__gui__SimulationControl.data,
    qt_meta_data_cedar__proc__gui__SimulationControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::proc::gui::SimulationControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::SimulationControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__SimulationControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_SimulationControl"))
        return static_cast< Ui_SimulationControl*>(this);
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::SimulationControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::SimulationControl::signalTriggerCountChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
