/****************************************************************************
** Meta object code from reading C++ file 'ConstMatrix.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/sources/ConstMatrix.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConstMatrix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__proc__sources__ConstMatrix_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__sources__ConstMatrix_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__sources__ConstMatrix_t qt_meta_stringdata_cedar__proc__sources__ConstMatrix = {
    {
QT_MOC_LITERAL(0, 0, 33), // "cedar::proc::sources::ConstMa..."
QT_MOC_LITERAL(1, 34, 12), // "updateMatrix"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16) // "updateMatrixSize"

    },
    "cedar::proc::sources::ConstMatrix\0"
    "updateMatrix\0\0updateMatrixSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__sources__ConstMatrix[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::sources::ConstMatrix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConstMatrix *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMatrix(); break;
        case 1: _t->updateMatrixSize(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cedar::proc::sources::ConstMatrix::staticMetaObject = { {
    &cedar::proc::Step::staticMetaObject,
    qt_meta_stringdata_cedar__proc__sources__ConstMatrix.data,
    qt_meta_data_cedar__proc__sources__ConstMatrix,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::proc::sources::ConstMatrix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::sources::ConstMatrix::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__sources__ConstMatrix.stringdata0))
        return static_cast<void*>(this);
    return cedar::proc::Step::qt_metacast(_clname);
}

int cedar::proc::sources::ConstMatrix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
