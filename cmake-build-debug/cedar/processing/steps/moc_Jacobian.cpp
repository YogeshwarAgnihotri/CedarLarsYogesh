/****************************************************************************
** Meta object code from reading C++ file 'Jacobian.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/Jacobian.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Jacobian.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__proc__steps__Jacobian_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__steps__Jacobian_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__steps__Jacobian_t qt_meta_stringdata_cedar__proc__steps__Jacobian = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cedar::proc::steps::Jacobian"
QT_MOC_LITERAL(1, 29, 14), // "rebuildOutputs"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "testStates"
QT_MOC_LITERAL(4, 56, 24), // "cedar::dev::ComponentPtr"
QT_MOC_LITERAL(5, 81, 9) // "component"

    },
    "cedar::proc::steps::Jacobian\0"
    "rebuildOutputs\0\0testStates\0"
    "cedar::dev::ComponentPtr\0component"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__steps__Jacobian[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void cedar::proc::steps::Jacobian::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Jacobian *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rebuildOutputs(); break;
        case 1: _t->testStates((*reinterpret_cast< cedar::dev::ComponentPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cedar::proc::steps::Jacobian::staticMetaObject = { {
    &cedar::proc::Step::staticMetaObject,
    qt_meta_stringdata_cedar__proc__steps__Jacobian.data,
    qt_meta_data_cedar__proc__steps__Jacobian,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::proc::steps::Jacobian::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::steps::Jacobian::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__Jacobian.stringdata0))
        return static_cast<void*>(this);
    return cedar::proc::Step::qt_metacast(_clname);
}

int cedar::proc::steps::Jacobian::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::proc::Step::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
