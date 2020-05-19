/****************************************************************************
** Meta object code from reading C++ file 'LinearSpatialTemplateView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/processing/gui/stepViews/LinearSpatialTemplateView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinearSpatialTemplateView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cedar__proc__gui__LinearSpatialTemplateView_t {
    QByteArrayData data[3];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__LinearSpatialTemplateView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__LinearSpatialTemplateView_t qt_meta_stringdata_cedar__proc__gui__LinearSpatialTemplateView = {
    {
QT_MOC_LITERAL(0, 0, 43), // "cedar::proc::gui::LinearSpati..."
QT_MOC_LITERAL(1, 44, 16), // "updateIconWeight"
QT_MOC_LITERAL(2, 61, 0) // ""

    },
    "cedar::proc::gui::LinearSpatialTemplateView\0"
    "updateIconWeight\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__LinearSpatialTemplateView[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::LinearSpatialTemplateView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinearSpatialTemplateView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateIconWeight(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cedar::proc::gui::LinearSpatialTemplateView::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_cedar__proc__gui__LinearSpatialTemplateView.data,
    qt_meta_data_cedar__proc__gui__LinearSpatialTemplateView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cedar::proc::gui::LinearSpatialTemplateView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::LinearSpatialTemplateView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__LinearSpatialTemplateView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "cedar::proc::gui::DefaultConnectableIconView"))
        return static_cast< cedar::proc::gui::DefaultConnectableIconView*>(this);
    return QObject::qt_metacast(_clname);
}

int cedar::proc::gui::LinearSpatialTemplateView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
