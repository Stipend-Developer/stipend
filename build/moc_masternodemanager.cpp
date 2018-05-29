/****************************************************************************
** Meta object code from reading C++ file 'masternodemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/masternodemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MasternodeManager_t {
    QByteArrayData data[16];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeManager_t qt_meta_stringdata_MasternodeManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MasternodeManager"
QT_MOC_LITERAL(1, 18, 20), // "updateAdrenalineNode"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "alias"
QT_MOC_LITERAL(4, 46, 4), // "addr"
QT_MOC_LITERAL(5, 51, 7), // "privkey"
QT_MOC_LITERAL(6, 59, 6), // "txHash"
QT_MOC_LITERAL(7, 66, 7), // "txIndex"
QT_MOC_LITERAL(8, 74, 15), // "donationAddress"
QT_MOC_LITERAL(9, 90, 18), // "donationPercentage"
QT_MOC_LITERAL(10, 109, 6), // "status"
QT_MOC_LITERAL(11, 116, 23), // "on_UpdateButton_clicked"
QT_MOC_LITERAL(12, 140, 23), // "on_createButton_clicked"
QT_MOC_LITERAL(13, 164, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(14, 187, 25), // "on_startAllButton_clicked"
QT_MOC_LITERAL(15, 213, 37) // "on_tableWidget_2_itemSelectio..."

    },
    "MasternodeManager\0updateAdrenalineNode\0"
    "\0alias\0addr\0privkey\0txHash\0txIndex\0"
    "donationAddress\0donationPercentage\0"
    "status\0on_UpdateButton_clicked\0"
    "on_createButton_clicked\0on_startButton_clicked\0"
    "on_startAllButton_clicked\0"
    "on_tableWidget_2_itemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    8,   44,    2, 0x0a /* Public */,
      11,    0,   61,    2, 0x0a /* Public */,
      12,    0,   62,    2, 0x08 /* Private */,
      13,    0,   63,    2, 0x08 /* Private */,
      14,    0,   64,    2, 0x08 /* Private */,
      15,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeManager *_t = static_cast<MasternodeManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAdrenalineNode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 1: _t->on_UpdateButton_clicked(); break;
        case 2: _t->on_createButton_clicked(); break;
        case 3: _t->on_startButton_clicked(); break;
        case 4: _t->on_startAllButton_clicked(); break;
        case 5: _t->on_tableWidget_2_itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject MasternodeManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeManager.data,
      qt_meta_data_MasternodeManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MasternodeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeManager.stringdata0))
        return static_cast<void*>(const_cast< MasternodeManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
