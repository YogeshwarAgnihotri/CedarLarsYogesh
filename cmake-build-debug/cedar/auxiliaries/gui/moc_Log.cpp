/****************************************************************************
** Meta object code from reading C++ file 'Log.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/Log.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Log.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__aux__gui__Log_t {
    QByteArrayData data[12];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__Log_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__Log_t qt_meta_stringdata_cedar__aux__gui__Log = {
    {
QT_MOC_LITERAL(0, 0, 20), // "cedar::aux::gui::Log"
QT_MOC_LITERAL(1, 21, 15), // "messageReceived"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "type"
QT_MOC_LITERAL(4, 43, 5), // "title"
QT_MOC_LITERAL(5, 49, 7), // "message"
QT_MOC_LITERAL(6, 57, 15), // "showContextMenu"
QT_MOC_LITERAL(7, 73, 5), // "point"
QT_MOC_LITERAL(8, 79, 21), // "scrollBarRangeChanged"
QT_MOC_LITERAL(9, 101, 3), // "min"
QT_MOC_LITERAL(10, 105, 3), // "max"
QT_MOC_LITERAL(11, 109, 12) // "printMessage"

    },
    "cedar::aux::gui::Log\0messageReceived\0"
    "\0type\0title\0message\0showContextMenu\0"
    "point\0scrollBarRangeChanged\0min\0max\0"
    "printMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__Log[] = {

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
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   41,    2, 0x0a /* Public */,
       8,    2,   44,    2, 0x08 /* Private */,
      11,    3,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,

       0        // eod
};

void cedar::aux::gui::Log::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Log *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->scrollBarRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->printMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Log::*)(int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Log::messageReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cedar::aux::gui::Log::staticMetaObject = { {
    &QTabWidget::staticMetaObject,
    qt_meta_stringdata_cedar__aux__gui__Log.data,
    qt_meta_data_cedar__aux__gui__Log,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::aux::gui::Log::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::Log::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__Log.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int cedar::aux::gui::Log::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
void cedar::aux::gui::Log::messageReceived(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
