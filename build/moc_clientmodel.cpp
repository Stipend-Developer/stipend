/****************************************************************************
** Meta object code from reading C++ file 'clientmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/clientmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientModel_t {
    QByteArrayData data[26];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientModel_t qt_meta_stringdata_ClientModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ClientModel"
QT_MOC_LITERAL(1, 12, 21), // "numConnectionsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "count"
QT_MOC_LITERAL(4, 41, 16), // "numBlocksChanged"
QT_MOC_LITERAL(5, 58, 21), // "strMasternodesChanged"
QT_MOC_LITERAL(6, 80, 14), // "strMasternodes"
QT_MOC_LITERAL(7, 95, 13), // "alertsChanged"
QT_MOC_LITERAL(8, 109, 8), // "warnings"
QT_MOC_LITERAL(9, 118, 12), // "bytesChanged"
QT_MOC_LITERAL(10, 131, 12), // "totalBytesIn"
QT_MOC_LITERAL(11, 144, 13), // "totalBytesOut"
QT_MOC_LITERAL(12, 158, 7), // "message"
QT_MOC_LITERAL(13, 166, 5), // "title"
QT_MOC_LITERAL(14, 172, 5), // "modal"
QT_MOC_LITERAL(15, 178, 5), // "style"
QT_MOC_LITERAL(16, 184, 12), // "showProgress"
QT_MOC_LITERAL(17, 197, 9), // "nProgress"
QT_MOC_LITERAL(18, 207, 11), // "updateTimer"
QT_MOC_LITERAL(19, 219, 13), // "updateMnTimer"
QT_MOC_LITERAL(20, 233, 20), // "updateNumConnections"
QT_MOC_LITERAL(21, 254, 14), // "numConnections"
QT_MOC_LITERAL(22, 269, 11), // "updateAlert"
QT_MOC_LITERAL(23, 281, 4), // "hash"
QT_MOC_LITERAL(24, 286, 6), // "status"
QT_MOC_LITERAL(25, 293, 13) // "updateBanlist"

    },
    "ClientModel\0numConnectionsChanged\0\0"
    "count\0numBlocksChanged\0strMasternodesChanged\0"
    "strMasternodes\0alertsChanged\0warnings\0"
    "bytesChanged\0totalBytesIn\0totalBytesOut\0"
    "message\0title\0modal\0style\0showProgress\0"
    "nProgress\0updateTimer\0updateMnTimer\0"
    "updateNumConnections\0numConnections\0"
    "updateAlert\0hash\0status\0updateBanlist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    1,   80,    2, 0x06 /* Public */,
       7,    1,   83,    2, 0x06 /* Public */,
       9,    2,   86,    2, 0x06 /* Public */,
      12,    4,   91,    2, 0x06 /* Public */,
      16,    2,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  105,    2, 0x0a /* Public */,
      19,    0,  106,    2, 0x0a /* Public */,
      20,    1,  107,    2, 0x0a /* Public */,
      22,    2,  110,    2, 0x0a /* Public */,
      25,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::UInt,   13,   12,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   13,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   23,   24,
    QMetaType::Void,

       0        // eod
};

void ClientModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientModel *_t = static_cast<ClientModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numConnectionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->numBlocksChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->strMasternodesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->alertsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->bytesChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 5: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 6: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->updateTimer(); break;
        case 8: _t->updateMnTimer(); break;
        case 9: _t->updateNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateAlert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->updateBanlist(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClientModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::numConnectionsChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ClientModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::numBlocksChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::strMasternodesChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::alertsChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ClientModel::*_t)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::bytesChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & , const QString & , bool , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::message)) {
                *result = 5;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::showProgress)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject ClientModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientModel.data,
      qt_meta_data_ClientModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientModel.stringdata0))
        return static_cast<void*>(const_cast< ClientModel*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ClientModel::numConnectionsChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientModel::numBlocksChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientModel::strMasternodesChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientModel::alertsChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClientModel::bytesChanged(quint64 _t1, quint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientModel::message(const QString & _t1, const QString & _t2, bool _t3, unsigned int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ClientModel::showProgress(const QString & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
