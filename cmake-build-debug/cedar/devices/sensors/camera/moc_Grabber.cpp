/****************************************************************************
** Meta object code from reading C++ file 'Grabber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/devices/sensors/camera/Grabber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Grabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__dev__sensors__camera__Grabber_t {
    QByteArrayData data[5];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__sensors__camera__Grabber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__sensors__camera__Grabber_t qt_meta_stringdata_cedar__dev__sensors__camera__Grabber = {
    {
QT_MOC_LITERAL(0, 0, 36), // "cedar::dev::sensors::camera::..."
QT_MOC_LITERAL(1, 37, 16), // "frameSizeChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 14), // "settingChanged"
QT_MOC_LITERAL(4, 70, 14) // "backendChanged"

    },
    "cedar::dev::sensors::camera::Grabber\0"
    "frameSizeChanged\0\0settingChanged\0"
    "backendChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__sensors__camera__Grabber[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::dev::sensors::camera::Grabber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Grabber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameSizeChanged(); break;
        case 1: _t->settingChanged(); break;
        case 2: _t->backendChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Grabber::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Grabber::frameSizeChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cedar::dev::sensors::camera::Grabber::staticMetaObject = { {
    &cedar::dev::sensors::visual::Grabber::staticMetaObject,
    qt_meta_stringdata_cedar__dev__sensors__camera__Grabber.data,
    qt_meta_data_cedar__dev__sensors__camera__Grabber,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::dev::sensors::camera::Grabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::sensors::camera::Grabber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__sensors__camera__Grabber.stringdata0))
        return static_cast<void*>(this);
    return cedar::dev::sensors::visual::Grabber::qt_metacast(_clname);
}

int cedar::dev::sensors::camera::Grabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::dev::sensors::visual::Grabber::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cedar::dev::sensors::camera::Grabber::frameSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
