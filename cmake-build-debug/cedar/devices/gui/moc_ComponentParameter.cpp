/****************************************************************************
** Meta object code from reading C++ file 'ComponentParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/devices/gui/ComponentParameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComponentParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__dev__gui__ComponentParameter_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__gui__ComponentParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__gui__ComponentParameter_t qt_meta_stringdata_cedar__dev__gui__ComponentParameter = {
    {
QT_MOC_LITERAL(0, 0, 35), // "cedar::dev::gui::ComponentPar..."
QT_MOC_LITERAL(1, 36, 21), // "openComponentSelector"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 14), // "updatePathText"
QT_MOC_LITERAL(4, 74, 16), // "parameterChanged"
QT_MOC_LITERAL(5, 91, 22), // "componentDoubleClicked"
QT_MOC_LITERAL(6, 114, 8), // "reselect"
QT_MOC_LITERAL(7, 123, 11), // "std::string"
QT_MOC_LITERAL(8, 135, 10), // "robot_name"
QT_MOC_LITERAL(9, 146, 9) // "slot_name"

    },
    "cedar::dev::gui::ComponentParameter\0"
    "openComponentSelector\0\0updatePathText\0"
    "parameterChanged\0componentDoubleClicked\0"
    "reselect\0std::string\0robot_name\0"
    "slot_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__gui__ComponentParameter[] = {

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
       6,    2,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,

       0        // eod
};

void cedar::dev::gui::ComponentParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComponentParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openComponentSelector(); break;
        case 1: _t->updatePathText(); break;
        case 2: _t->parameterChanged(); break;
        case 3: _t->componentDoubleClicked(); break;
        case 4: _t->reselect((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cedar::dev::gui::ComponentParameter::staticMetaObject = { {
    &cedar::aux::gui::Parameter::staticMetaObject,
    qt_meta_stringdata_cedar__dev__gui__ComponentParameter.data,
    qt_meta_data_cedar__dev__gui__ComponentParameter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::dev::gui::ComponentParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::gui::ComponentParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__gui__ComponentParameter.stringdata0))
        return static_cast<void*>(this);
    return cedar::aux::gui::Parameter::qt_metacast(_clname);
}

int cedar::dev::gui::ComponentParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::Parameter::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
