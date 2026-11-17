/****************************************************************************
** Meta object code from reading C++ file 'frmmodulecarcondition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../device/module/ecar/frmmodulecarcondition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmmodulecarcondition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FrmModuleCarCondition_t {
    QByteArrayData data[10];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrmModuleCarCondition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrmModuleCarCondition_t qt_meta_stringdata_FrmModuleCarCondition = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FrmModuleCarCondition"
QT_MOC_LITERAL(1, 22, 17), // "replySetCondition"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 29), // "EConditionUnit::ConditionType"
QT_MOC_LITERAL(4, 71, 4), // "cond"
QT_MOC_LITERAL(5, 76, 28), // "on_pushButton_cancel_clicked"
QT_MOC_LITERAL(6, 105, 36), // "on_radioButton_Car01_compare_..."
QT_MOC_LITERAL(7, 142, 7), // "checked"
QT_MOC_LITERAL(8, 150, 24), // "on_pushButton_ok_clicked"
QT_MOC_LITERAL(9, 175, 37) // "on_pushButton_removeCondition..."

    },
    "FrmModuleCarCondition\0replySetCondition\0"
    "\0EConditionUnit::ConditionType\0cond\0"
    "on_pushButton_cancel_clicked\0"
    "on_radioButton_Car01_compare_toggled\0"
    "checked\0on_pushButton_ok_clicked\0"
    "on_pushButton_removeCondition_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrmModuleCarCondition[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FrmModuleCarCondition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrmModuleCarCondition *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->replySetCondition((*reinterpret_cast< EConditionUnit::ConditionType(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_cancel_clicked(); break;
        case 2: _t->on_radioButton_Car01_compare_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_ok_clicked(); break;
        case 4: _t->on_pushButton_removeCondition_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FrmModuleCarCondition::*)(EConditionUnit::ConditionType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FrmModuleCarCondition::replySetCondition)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FrmModuleCarCondition::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FrmModuleCarCondition.data,
    qt_meta_data_FrmModuleCarCondition,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FrmModuleCarCondition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrmModuleCarCondition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FrmModuleCarCondition.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FrmModuleCarCondition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void FrmModuleCarCondition::replySetCondition(EConditionUnit::ConditionType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
