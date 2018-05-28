/****************************************************************************
** Meta object code from reading C++ file 'multisiginputentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/multisiginputentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multisiginputentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultisigInputEntry_t {
    QByteArrayData data[16];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultisigInputEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultisigInputEntry_t qt_meta_stringdata_MultisigInputEntry = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MultisigInputEntry"
QT_MOC_LITERAL(1, 19, 11), // "removeEntry"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "MultisigInputEntry*"
QT_MOC_LITERAL(4, 52, 5), // "entry"
QT_MOC_LITERAL(5, 58, 12), // "updateAmount"
QT_MOC_LITERAL(6, 71, 16), // "setRemoveEnabled"
QT_MOC_LITERAL(7, 88, 7), // "enabled"
QT_MOC_LITERAL(8, 96, 5), // "clear"
QT_MOC_LITERAL(9, 102, 28), // "on_transactionId_textChanged"
QT_MOC_LITERAL(10, 131, 13), // "transactionId"
QT_MOC_LITERAL(11, 145, 35), // "on_pasteTransactionIdButton_c..."
QT_MOC_LITERAL(12, 181, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(13, 205, 40), // "on_transactionOutput_currentI..."
QT_MOC_LITERAL(14, 246, 5), // "index"
QT_MOC_LITERAL(15, 252, 34) // "on_pasteRedeemScriptButton_cl..."

    },
    "MultisigInputEntry\0removeEntry\0\0"
    "MultisigInputEntry*\0entry\0updateAmount\0"
    "setRemoveEnabled\0enabled\0clear\0"
    "on_transactionId_textChanged\0transactionId\0"
    "on_pasteTransactionIdButton_clicked\0"
    "on_deleteButton_clicked\0"
    "on_transactionOutput_currentIndexChanged\0"
    "index\0on_pasteRedeemScriptButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultisigInputEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,
      13,    1,   72,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void MultisigInputEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultisigInputEntry *_t = static_cast<MultisigInputEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< MultisigInputEntry*(*)>(_a[1]))); break;
        case 1: _t->updateAmount(); break;
        case 2: _t->setRemoveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->on_transactionId_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pasteTransactionIdButton_clicked(); break;
        case 6: _t->on_deleteButton_clicked(); break;
        case 7: _t->on_transactionOutput_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pasteRedeemScriptButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MultisigInputEntry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MultisigInputEntry::*_t)(MultisigInputEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MultisigInputEntry::removeEntry)) {
                *result = 0;
            }
        }
        {
            typedef void (MultisigInputEntry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MultisigInputEntry::updateAmount)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject MultisigInputEntry::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_MultisigInputEntry.data,
      qt_meta_data_MultisigInputEntry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultisigInputEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultisigInputEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultisigInputEntry.stringdata0))
        return static_cast<void*>(const_cast< MultisigInputEntry*>(this));
    return QFrame::qt_metacast(_clname);
}

int MultisigInputEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MultisigInputEntry::removeEntry(MultisigInputEntry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MultisigInputEntry::updateAmount()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
