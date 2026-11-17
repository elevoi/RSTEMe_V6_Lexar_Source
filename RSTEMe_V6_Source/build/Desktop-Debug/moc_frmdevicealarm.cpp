/****************************************************************************
** Meta object code from reading C++ file 'frmdevicealarm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../control/frmdevicealarm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmdevicealarm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FrmDeviceAlarm_t {
    QByteArrayData data[19];
    char stringdata0[502];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrmDeviceAlarm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrmDeviceAlarm_t qt_meta_stringdata_FrmDeviceAlarm = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FrmDeviceAlarm"
QT_MOC_LITERAL(1, 15, 10), // "on_newData"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 2), // "id"
QT_MOC_LITERAL(4, 30, 12), // "on_timerPoll"
QT_MOC_LITERAL(5, 43, 31), // "on_toolButton_port01_on_clicked"
QT_MOC_LITERAL(6, 75, 32), // "on_toolButton_port01_off_clicked"
QT_MOC_LITERAL(7, 108, 31), // "on_toolButton_port02_on_clicked"
QT_MOC_LITERAL(8, 140, 32), // "on_toolButton_port02_off_clicked"
QT_MOC_LITERAL(9, 173, 43), // "on_comboBox_port01_mode_curre..."
QT_MOC_LITERAL(10, 217, 5), // "index"
QT_MOC_LITERAL(11, 223, 43), // "on_comboBox_port02_mode_curre..."
QT_MOC_LITERAL(12, 267, 28), // "on_pushButton_cancel_clicked"
QT_MOC_LITERAL(13, 296, 35), // "on_toolButton_port01_update_c..."
QT_MOC_LITERAL(14, 332, 35), // "on_toolButton_port02_update_c..."
QT_MOC_LITERAL(15, 368, 33), // "on_checkBox_port01_enable_cli..."
QT_MOC_LITERAL(16, 402, 33), // "on_checkBox_port02_enable_cli..."
QT_MOC_LITERAL(17, 436, 32), // "on_toolButton_port01_pwm_clicked"
QT_MOC_LITERAL(18, 469, 32) // "on_toolButton_port02_pwm_clicked"

    },
    "FrmDeviceAlarm\0on_newData\0\0id\0"
    "on_timerPoll\0on_toolButton_port01_on_clicked\0"
    "on_toolButton_port01_off_clicked\0"
    "on_toolButton_port02_on_clicked\0"
    "on_toolButton_port02_off_clicked\0"
    "on_comboBox_port01_mode_currentIndexChanged\0"
    "index\0on_comboBox_port02_mode_currentIndexChanged\0"
    "on_pushButton_cancel_clicked\0"
    "on_toolButton_port01_update_clicked\0"
    "on_toolButton_port02_update_clicked\0"
    "on_checkBox_port01_enable_clicked\0"
    "on_checkBox_port02_enable_clicked\0"
    "on_toolButton_port01_pwm_clicked\0"
    "on_toolButton_port02_pwm_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrmDeviceAlarm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       4,    0,   92,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    1,   97,    2, 0x08 /* Private */,
      11,    1,  100,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FrmDeviceAlarm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrmDeviceAlarm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_newData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_timerPoll(); break;
        case 2: _t->on_toolButton_port01_on_clicked(); break;
        case 3: _t->on_toolButton_port01_off_clicked(); break;
        case 4: _t->on_toolButton_port02_on_clicked(); break;
        case 5: _t->on_toolButton_port02_off_clicked(); break;
        case 6: _t->on_comboBox_port01_mode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_port02_mode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_cancel_clicked(); break;
        case 9: _t->on_toolButton_port01_update_clicked(); break;
        case 10: _t->on_toolButton_port02_update_clicked(); break;
        case 11: _t->on_checkBox_port01_enable_clicked(); break;
        case 12: _t->on_checkBox_port02_enable_clicked(); break;
        case 13: _t->on_toolButton_port01_pwm_clicked(); break;
        case 14: _t->on_toolButton_port02_pwm_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FrmDeviceAlarm::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FrmDeviceAlarm.data,
    qt_meta_data_FrmDeviceAlarm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FrmDeviceAlarm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrmDeviceAlarm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FrmDeviceAlarm.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FrmDeviceAlarm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
