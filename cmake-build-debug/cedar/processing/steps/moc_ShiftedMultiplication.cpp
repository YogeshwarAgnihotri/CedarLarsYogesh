/****************************************************************************
** Meta object code from reading C++ file 'ShiftedMultiplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/ShiftedMultiplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShiftedMultiplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__proc__steps__ShiftedMultiplication_t {
    QByteArrayData data[6];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__steps__ShiftedMultiplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__steps__ShiftedMultiplication_t qt_meta_stringdata_cedar__proc__steps__ShiftedMultiplication = {
    {
QT_MOC_LITERAL(0, 0, 41), // "cedar::proc::steps::ShiftedMu..."
QT_MOC_LITERAL(1, 42, 9), // "recompute"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 11), // "reconfigure"
QT_MOC_LITERAL(4, 65, 22), // "inputConnectionChanged"
QT_MOC_LITERAL(5, 88, 11) // "std::string"

    },
    "cedar::proc::steps::ShiftedMultiplication\0"
    "recompute\0\0reconfigure\0inputConnectionChanged\0"
    "std::string"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__steps__ShiftedMultiplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    1,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void cedar::proc::steps::ShiftedMultiplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShiftedMultiplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recompute(); break;
        case 1: _t->reconfigure(); break;
        case 2: _t->inputConnectionChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cedar::proc::steps::ShiftedMultiplication::staticMetaObject = { {
    &cedar::proc::Step::staticMetaObject,
    qt_meta_stringdata_cedar__proc__steps__ShiftedMultiplication.data,
    qt_meta_data_cedar__proc__steps__ShiftedMultiplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::proc::steps::ShiftedMultiplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::steps::ShiftedMultiplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__ShiftedMultiplication.stringdata0))
        return static_cast<void*>(this);
    return cedar::proc::Step::qt_metacast(_clname);
}

int cedar::proc::steps::ShiftedMultiplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::proc::Step::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
