/****************************************************************************
** Meta object code from reading C++ file 'DataPlotter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/DataPlotter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataPlotter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__aux__gui__DataPlotter_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__DataPlotter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__DataPlotter_t qt_meta_stringdata_cedar__aux__gui__DataPlotter = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cedar::aux::gui::DataPlotter"
QT_MOC_LITERAL(1, 29, 11), // "dataChanged"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "cedar::aux::gui::DataPlotter\0dataChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__DataPlotter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::DataPlotter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataPlotter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cedar::aux::gui::DataPlotter::staticMetaObject = { {
    &cedar::aux::gui::MultiPlotInterface::staticMetaObject,
    qt_meta_stringdata_cedar__aux__gui__DataPlotter.data,
    qt_meta_data_cedar__aux__gui__DataPlotter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::aux::gui::DataPlotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::DataPlotter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__DataPlotter.stringdata0))
        return static_cast<void*>(this);
    return cedar::aux::gui::MultiPlotInterface::qt_metacast(_clname);
}

int cedar::aux::gui::DataPlotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::MultiPlotInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
