/****************************************************************************
** Meta object code from reading C++ file 'multisigaddressentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/multisigaddressentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multisigaddressentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultisigAddressEntry_t {
    QByteArrayData data[15];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultisigAddressEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultisigAddressEntry_t qt_meta_stringdata_MultisigAddressEntry = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MultisigAddressEntry"
QT_MOC_LITERAL(1, 21, 11), // "removeEntry"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "MultisigAddressEntry*"
QT_MOC_LITERAL(4, 56, 5), // "entry"
QT_MOC_LITERAL(5, 62, 16), // "setRemoveEnabled"
QT_MOC_LITERAL(6, 79, 7), // "enabled"
QT_MOC_LITERAL(7, 87, 5), // "clear"
QT_MOC_LITERAL(8, 93, 21), // "on_pubkey_textChanged"
QT_MOC_LITERAL(9, 115, 6), // "pubkey"
QT_MOC_LITERAL(10, 122, 22), // "on_pasteButton_clicked"
QT_MOC_LITERAL(11, 145, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(12, 169, 22), // "on_address_textChanged"
QT_MOC_LITERAL(13, 192, 7), // "address"
QT_MOC_LITERAL(14, 200, 28) // "on_addressBookButton_clicked"

    },
    "MultisigAddressEntry\0removeEntry\0\0"
    "MultisigAddressEntry*\0entry\0"
    "setRemoveEnabled\0enabled\0clear\0"
    "on_pubkey_textChanged\0pubkey\0"
    "on_pasteButton_clicked\0on_deleteButton_clicked\0"
    "on_address_textChanged\0address\0"
    "on_addressBookButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultisigAddressEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,
      12,    1,   66,    2, 0x08 /* Private */,
      14,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,

       0        // eod
};

void MultisigAddressEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultisigAddressEntry *_t = static_cast<MultisigAddressEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< MultisigAddressEntry*(*)>(_a[1]))); break;
        case 1: _t->setRemoveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->on_pubkey_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pasteButton_clicked(); break;
        case 5: _t->on_deleteButton_clicked(); break;
        case 6: _t->on_address_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_addressBookButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MultisigAddressEntry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MultisigAddressEntry::*_t)(MultisigAddressEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MultisigAddressEntry::removeEntry)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MultisigAddressEntry::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_MultisigAddressEntry.data,
      qt_meta_data_MultisigAddressEntry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultisigAddressEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultisigAddressEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultisigAddressEntry.stringdata0))
        return static_cast<void*>(const_cast< MultisigAddressEntry*>(this));
    return QFrame::qt_metacast(_clname);
}

int MultisigAddressEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MultisigAddressEntry::removeEntry(MultisigAddressEntry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
