/****************************************************************************
** Meta object code from reading C++ file 'sendmessagesentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendmessagesentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendmessagesentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SendMessagesEntry_t {
    QByteArrayData data[14];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendMessagesEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendMessagesEntry_t qt_meta_stringdata_SendMessagesEntry = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SendMessagesEntry"
QT_MOC_LITERAL(1, 18, 11), // "removeEntry"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "SendMessagesEntry*"
QT_MOC_LITERAL(4, 50, 5), // "entry"
QT_MOC_LITERAL(5, 56, 16), // "setRemoveEnabled"
QT_MOC_LITERAL(6, 73, 7), // "enabled"
QT_MOC_LITERAL(7, 81, 5), // "clear"
QT_MOC_LITERAL(8, 87, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(9, 111, 28), // "on_addressBookButton_clicked"
QT_MOC_LITERAL(10, 140, 22), // "on_pasteButton_clicked"
QT_MOC_LITERAL(11, 163, 28), // "on_PubkeyPasteButton_clicked"
QT_MOC_LITERAL(12, 192, 21), // "on_sendTo_textChanged"
QT_MOC_LITERAL(13, 214, 7) // "address"

    },
    "SendMessagesEntry\0removeEntry\0\0"
    "SendMessagesEntry*\0entry\0setRemoveEnabled\0"
    "enabled\0clear\0on_deleteButton_clicked\0"
    "on_addressBookButton_clicked\0"
    "on_pasteButton_clicked\0"
    "on_PubkeyPasteButton_clicked\0"
    "on_sendTo_textChanged\0address"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendMessagesEntry[] = {

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
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void SendMessagesEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendMessagesEntry *_t = static_cast<SendMessagesEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< SendMessagesEntry*(*)>(_a[1]))); break;
        case 1: _t->setRemoveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->on_deleteButton_clicked(); break;
        case 4: _t->on_addressBookButton_clicked(); break;
        case 5: _t->on_pasteButton_clicked(); break;
        case 6: _t->on_PubkeyPasteButton_clicked(); break;
        case 7: _t->on_sendTo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SendMessagesEntry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SendMessagesEntry::*_t)(SendMessagesEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendMessagesEntry::removeEntry)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SendMessagesEntry::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SendMessagesEntry.data,
      qt_meta_data_SendMessagesEntry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SendMessagesEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendMessagesEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendMessagesEntry.stringdata0))
        return static_cast<void*>(const_cast< SendMessagesEntry*>(this));
    return QFrame::qt_metacast(_clname);
}

int SendMessagesEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SendMessagesEntry::removeEntry(SendMessagesEntry * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
