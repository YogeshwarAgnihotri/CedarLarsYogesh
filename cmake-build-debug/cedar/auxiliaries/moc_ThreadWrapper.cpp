/****************************************************************************
** Meta object code from reading C++ file 'ThreadWrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/auxiliaries/ThreadWrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThreadWrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__aux__ThreadWrapper_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__ThreadWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__ThreadWrapper_t qt_meta_stringdata_cedar__aux__ThreadWrapper = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cedar::aux::ThreadWrapper"
QT_MOC_LITERAL(1, 26, 14), // "finishedThread"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 17), // "quittedThreadSlot"
QT_MOC_LITERAL(4, 60, 17), // "startedThreadSlot"
QT_MOC_LITERAL(5, 78, 16) // "finishedWorkSlot"

    },
    "cedar::aux::ThreadWrapper\0finishedThread\0"
    "\0quittedThreadSlot\0startedThreadSlot\0"
    "finishedWorkSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__ThreadWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::ThreadWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishedThread(); break;
        case 1: _t->quittedThreadSlot(); break;
        case 2: _t->startedThreadSlot(); break;
        case 3: _t->finishedWorkSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadWrapper::finishedThread)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cedar::aux::ThreadWrapper::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_cedar__aux__ThreadWrapper.data,
    qt_meta_data_cedar__aux__ThreadWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::aux::ThreadWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::ThreadWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__ThreadWrapper.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(this);
    return QObject::qt_metacast(_clname);
}

int cedar::aux::ThreadWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void cedar::aux::ThreadWrapper::finishedThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
