/****************************************************************************
** Meta object code from reading C++ file 'LoopedTrigger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/processing/LoopedTrigger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoopedTrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__proc__LoopedTrigger_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__LoopedTrigger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__LoopedTrigger_t qt_meta_stringdata_cedar__proc__LoopedTrigger = {
    {
QT_MOC_LITERAL(0, 0, 26), // "cedar::proc::LoopedTrigger"
QT_MOC_LITERAL(1, 27, 11), // "nameChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "triggerStarting"
QT_MOC_LITERAL(4, 56, 14), // "triggerStarted"
QT_MOC_LITERAL(5, 71, 15), // "triggerStopping"
QT_MOC_LITERAL(6, 87, 14), // "triggerStopped"
QT_MOC_LITERAL(7, 102, 13) // "onNameChanged"

    },
    "cedar::proc::LoopedTrigger\0nameChanged\0"
    "\0triggerStarting\0triggerStarted\0"
    "triggerStopping\0triggerStopped\0"
    "onNameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__LoopedTrigger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::proc::LoopedTrigger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoopedTrigger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->triggerStarting(); break;
        case 2: _t->triggerStarted(); break;
        case 3: _t->triggerStopping(); break;
        case 4: _t->triggerStopped(); break;
        case 5: _t->onNameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoopedTrigger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoopedTrigger::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoopedTrigger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoopedTrigger::triggerStarting)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LoopedTrigger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoopedTrigger::triggerStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LoopedTrigger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoopedTrigger::triggerStopping)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LoopedTrigger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoopedTrigger::triggerStopped)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cedar::proc::LoopedTrigger::staticMetaObject = { {
    &cedar::aux::LoopedThread::staticMetaObject,
    qt_meta_stringdata_cedar__proc__LoopedTrigger.data,
    qt_meta_data_cedar__proc__LoopedTrigger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::proc::LoopedTrigger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::LoopedTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__LoopedTrigger.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "cedar::proc::Trigger"))
        return static_cast< cedar::proc::Trigger*>(this);
    return cedar::aux::LoopedThread::qt_metacast(_clname);
}

int cedar::proc::LoopedTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::LoopedThread::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void cedar::proc::LoopedTrigger::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void cedar::proc::LoopedTrigger::triggerStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void cedar::proc::LoopedTrigger::triggerStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void cedar::proc::LoopedTrigger::triggerStopping()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void cedar::proc::LoopedTrigger::triggerStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
