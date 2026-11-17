/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata0[519];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 5), // "login"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "loginClose"
QT_MOC_LITERAL(4, 29, 13), // "loginShutdown"
QT_MOC_LITERAL(5, 43, 14), // "on_stateChange"
QT_MOC_LITERAL(6, 58, 21), // "ETypeDef::StateChange"
QT_MOC_LITERAL(7, 80, 5), // "state"
QT_MOC_LITERAL(8, 86, 8), // "on_error"
QT_MOC_LITERAL(9, 95, 14), // "EDevice::Error"
QT_MOC_LITERAL(10, 110, 5), // "error"
QT_MOC_LITERAL(11, 116, 8), // "EDevice*"
QT_MOC_LITERAL(12, 125, 3), // "dev"
QT_MOC_LITERAL(13, 129, 35), // "on_toolButton_groupSoftware_c..."
QT_MOC_LITERAL(14, 165, 33), // "on_toolButton_groupSensor_cli..."
QT_MOC_LITERAL(15, 199, 33), // "on_toolButton_groupModule_cli..."
QT_MOC_LITERAL(16, 233, 33), // "on_toolButton_groupSystem_cli..."
QT_MOC_LITERAL(17, 267, 30), // "on_pushButton_TypeList_clicked"
QT_MOC_LITERAL(18, 298, 33), // "on_toolButton_groupSearch_cli..."
QT_MOC_LITERAL(19, 332, 37), // "on_toolButton_groupConnection..."
QT_MOC_LITERAL(20, 370, 27), // "on_toolButton_login_clicked"
QT_MOC_LITERAL(21, 398, 33), // "on_toolButton_clearDevice_cli..."
QT_MOC_LITERAL(22, 432, 36), // "on_pushButton_TypeList_Close_..."
QT_MOC_LITERAL(23, 469, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(24, 491, 27) // "on_pushButton_Close_clicked"

    },
    "MainWindow\0login\0\0loginClose\0loginShutdown\0"
    "on_stateChange\0ETypeDef::StateChange\0"
    "state\0on_error\0EDevice::Error\0error\0"
    "EDevice*\0dev\0on_toolButton_groupSoftware_clicked\0"
    "on_toolButton_groupSensor_clicked\0"
    "on_toolButton_groupModule_clicked\0"
    "on_toolButton_groupSystem_clicked\0"
    "on_pushButton_TypeList_clicked\0"
    "on_toolButton_groupSearch_clicked\0"
    "on_toolButton_groupConnection_clicked\0"
    "on_toolButton_login_clicked\0"
    "on_toolButton_clearDevice_clicked\0"
    "on_pushButton_TypeList_Close_clicked\0"
    "on_pushButton_clicked\0on_pushButton_Close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  102,    2, 0x08 /* Private */,
       8,    2,  105,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,
      21,    0,  118,    2, 0x08 /* Private */,
      22,    0,  119,    2, 0x08 /* Private */,
      23,    0,  120,    2, 0x08 /* Private */,
      24,    0,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->loginClose(); break;
        case 2: _t->loginShutdown(); break;
        case 3: _t->on_stateChange((*reinterpret_cast< ETypeDef::StateChange(*)>(_a[1]))); break;
        case 4: _t->on_error((*reinterpret_cast< EDevice::Error(*)>(_a[1])),(*reinterpret_cast< EDevice*(*)>(_a[2]))); break;
        case 5: _t->on_toolButton_groupSoftware_clicked(); break;
        case 6: _t->on_toolButton_groupSensor_clicked(); break;
        case 7: _t->on_toolButton_groupModule_clicked(); break;
        case 8: _t->on_toolButton_groupSystem_clicked(); break;
        case 9: _t->on_pushButton_TypeList_clicked(); break;
        case 10: _t->on_toolButton_groupSearch_clicked(); break;
        case 11: _t->on_toolButton_groupConnection_clicked(); break;
        case 12: _t->on_toolButton_login_clicked(); break;
        case 13: _t->on_toolButton_clearDevice_clicked(); break;
        case 14: _t->on_pushButton_TypeList_Close_clicked(); break;
        case 15: _t->on_pushButton_clicked(); break;
        case 16: _t->on_pushButton_Close_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EDevice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::login)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::loginClose)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::loginShutdown)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::loginClose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::loginShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
