/****************************************************************************
** Meta object code from reading C++ file 'PerformanceOverview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/PerformanceOverview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PerformanceOverview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__proc__gui__PerformanceOverview_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__PerformanceOverview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__PerformanceOverview_t qt_meta_stringdata_cedar__proc__gui__PerformanceOverview = {
    {
QT_MOC_LITERAL(0, 0, 37), // "cedar::proc::gui::Performance..."
QT_MOC_LITERAL(1, 38, 7), // "refresh"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 18), // "autoRefreshToggled"
QT_MOC_LITERAL(4, 66, 7) // "enabled"

    },
    "cedar::proc::gui::PerformanceOverview\0"
    "refresh\0\0autoRefreshToggled\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__PerformanceOverview[] = {

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
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void cedar::proc::gui::PerformanceOverview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PerformanceOverview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->autoRefreshToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cedar::proc::gui::PerformanceOverview::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_cedar__proc__gui__PerformanceOverview.data,
    qt_meta_data_cedar__proc__gui__PerformanceOverview,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::proc::gui::PerformanceOverview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::PerformanceOverview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__PerformanceOverview.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_PerformanceOverview"))
        return static_cast< Ui_PerformanceOverview*>(this);
    return QDialog::qt_metacast(_clname);
}

int cedar::proc::gui::PerformanceOverview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
