/****************************************************************************
** Meta object code from reading C++ file 'frmcontrolmodulevmt9111.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../control/frmcontrolmodulevmt9111.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmcontrolmodulevmt9111.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FrmControlModuleVMT9111_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrmControlModuleVMT9111_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrmControlModuleVMT9111_t qt_meta_stringdata_FrmControlModuleVMT9111 = {
    {
QT_MOC_LITERAL(0, 0, 23), // "FrmControlModuleVMT9111"
QT_MOC_LITERAL(1, 24, 10), // "on_newData"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 2), // "id"
QT_MOC_LITERAL(4, 39, 29), // "on_toolButton_keyBack_clicked"
QT_MOC_LITERAL(5, 69, 29), // "on_toolButton_keyStop_clicked"
QT_MOC_LITERAL(6, 99, 32), // "on_toolButton_keyForward_clicked"
QT_MOC_LITERAL(7, 132, 28) // "on_pushButton_cancel_clicked"

    },
    "FrmControlModuleVMT9111\0on_newData\0\0"
    "id\0on_toolButton_keyBack_clicked\0"
    "on_toolButton_keyStop_clicked\0"
    "on_toolButton_keyForward_clicked\0"
    "on_pushButton_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrmControlModuleVMT9111[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FrmControlModuleVMT9111::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrmControlModuleVMT9111 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_newData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_toolButton_keyBack_clicked(); break;
        case 2: _t->on_toolButton_keyStop_clicked(); break;
        case 3: _t->on_toolButton_keyForward_clicked(); break;
        case 4: _t->on_pushButton_cancel_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FrmControlModuleVMT9111::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FrmControlModuleVMT9111.data,
    qt_meta_data_FrmControlModuleVMT9111,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FrmControlModuleVMT9111::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrmControlModuleVMT9111::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FrmControlModuleVMT9111.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FrmControlModuleVMT9111::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
