/****************************************************************************
** Meta object code from reading C++ file 'sendmessagesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendmessagesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendmessagesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendMessagesDialog_t {
    QByteArrayData data[15];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendMessagesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendMessagesDialog_t qt_meta_stringdata_SendMessagesDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SendMessagesDialog"
QT_MOC_LITERAL(1, 19, 4), // "done"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "retval"
QT_MOC_LITERAL(4, 32, 5), // "clear"
QT_MOC_LITERAL(5, 38, 6), // "reject"
QT_MOC_LITERAL(6, 45, 6), // "accept"
QT_MOC_LITERAL(7, 52, 8), // "addEntry"
QT_MOC_LITERAL(8, 61, 18), // "SendMessagesEntry*"
QT_MOC_LITERAL(9, 80, 19), // "updateRemoveEnabled"
QT_MOC_LITERAL(10, 100, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(11, 122, 11), // "removeEntry"
QT_MOC_LITERAL(12, 134, 5), // "entry"
QT_MOC_LITERAL(13, 140, 28), // "on_addressBookButton_clicked"
QT_MOC_LITERAL(14, 169, 22) // "on_pasteButton_clicked"

    },
    "SendMessagesDialog\0done\0\0retval\0clear\0"
    "reject\0accept\0addEntry\0SendMessagesEntry*\0"
    "updateRemoveEnabled\0on_sendButton_clicked\0"
    "removeEntry\0entry\0on_addressBookButton_clicked\0"
    "on_pasteButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendMessagesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    0,   67,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SendMessagesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendMessagesDialog *_t = static_cast<SendMessagesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: _t->reject(); break;
        case 3: _t->accept(); break;
        case 4: { SendMessagesEntry* _r = _t->addEntry();
            if (_a[0]) *reinterpret_cast< SendMessagesEntry**>(_a[0]) = _r; }  break;
        case 5: _t->updateRemoveEnabled(); break;
        case 6: _t->on_sendButton_clicked(); break;
        case 7: _t->removeEntry((*reinterpret_cast< SendMessagesEntry*(*)>(_a[1]))); break;
        case 8: _t->on_addressBookButton_clicked(); break;
        case 9: _t->on_pasteButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SendMessagesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SendMessagesDialog.data,
      qt_meta_data_SendMessagesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SendMessagesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendMessagesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SendMessagesDialog.stringdata0))
        return static_cast<void*>(const_cast< SendMessagesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SendMessagesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
