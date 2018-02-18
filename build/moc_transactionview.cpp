/****************************************************************************
** Meta object code from reading C++ file 'transactionview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/transactionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransactionView_t {
    QByteArrayData data[28];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionView_t qt_meta_stringdata_TransactionView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TransactionView"
QT_MOC_LITERAL(1, 16, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "message"
QT_MOC_LITERAL(4, 39, 5), // "title"
QT_MOC_LITERAL(5, 45, 5), // "style"
QT_MOC_LITERAL(6, 51, 9), // "trxAmount"
QT_MOC_LITERAL(7, 61, 6), // "amount"
QT_MOC_LITERAL(8, 68, 14), // "contextualMenu"
QT_MOC_LITERAL(9, 83, 16), // "dateRangeChanged"
QT_MOC_LITERAL(10, 100, 11), // "showDetails"
QT_MOC_LITERAL(11, 112, 11), // "copyAddress"
QT_MOC_LITERAL(12, 124, 9), // "editLabel"
QT_MOC_LITERAL(13, 134, 9), // "copyLabel"
QT_MOC_LITERAL(14, 144, 10), // "copyAmount"
QT_MOC_LITERAL(15, 155, 8), // "copyTxID"
QT_MOC_LITERAL(16, 164, 21), // "updateWatchOnlyColumn"
QT_MOC_LITERAL(17, 186, 14), // "fHaveWatchOnly"
QT_MOC_LITERAL(18, 201, 10), // "chooseDate"
QT_MOC_LITERAL(19, 212, 3), // "idx"
QT_MOC_LITERAL(20, 216, 10), // "chooseType"
QT_MOC_LITERAL(21, 227, 15), // "chooseWatchonly"
QT_MOC_LITERAL(22, 243, 13), // "changedPrefix"
QT_MOC_LITERAL(23, 257, 6), // "prefix"
QT_MOC_LITERAL(24, 264, 13), // "changedAmount"
QT_MOC_LITERAL(25, 278, 13), // "exportClicked"
QT_MOC_LITERAL(26, 292, 16), // "focusTransaction"
QT_MOC_LITERAL(27, 309, 10) // "computeSum"

    },
    "TransactionView\0doubleClicked\0\0message\0"
    "title\0style\0trxAmount\0amount\0"
    "contextualMenu\0dateRangeChanged\0"
    "showDetails\0copyAddress\0editLabel\0"
    "copyLabel\0copyAmount\0copyTxID\0"
    "updateWatchOnlyColumn\0fHaveWatchOnly\0"
    "chooseDate\0idx\0chooseType\0chooseWatchonly\0"
    "changedPrefix\0prefix\0changedAmount\0"
    "exportClicked\0focusTransaction\0"
    "computeSum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       3,    3,  117,    2, 0x06 /* Public */,
       6,    1,  124,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  127,    2, 0x08 /* Private */,
       9,    0,  130,    2, 0x08 /* Private */,
      10,    0,  131,    2, 0x08 /* Private */,
      11,    0,  132,    2, 0x08 /* Private */,
      12,    0,  133,    2, 0x08 /* Private */,
      13,    0,  134,    2, 0x08 /* Private */,
      14,    0,  135,    2, 0x08 /* Private */,
      15,    0,  136,    2, 0x08 /* Private */,
      16,    1,  137,    2, 0x08 /* Private */,
      18,    1,  140,    2, 0x0a /* Public */,
      20,    1,  143,    2, 0x0a /* Public */,
      21,    1,  146,    2, 0x0a /* Public */,
      22,    1,  149,    2, 0x0a /* Public */,
      24,    1,  152,    2, 0x0a /* Public */,
      25,    0,  155,    2, 0x0a /* Public */,
      26,    1,  156,    2, 0x0a /* Public */,
      27,    0,  159,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    4,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,

       0        // eod
};

void TransactionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionView *_t = static_cast<TransactionView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->trxAmount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->dateRangeChanged(); break;
        case 5: _t->showDetails(); break;
        case 6: _t->copyAddress(); break;
        case 7: _t->editLabel(); break;
        case 8: _t->copyLabel(); break;
        case 9: _t->copyAmount(); break;
        case 10: _t->copyTxID(); break;
        case 11: _t->updateWatchOnlyColumn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->chooseDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->chooseType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->chooseWatchonly((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->changedPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->changedAmount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->exportClicked(); break;
        case 18: _t->focusTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 19: _t->computeSum(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TransactionView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionView::doubleClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (TransactionView::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionView::message)) {
                *result = 1;
            }
        }
        {
            typedef void (TransactionView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionView::trxAmount)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TransactionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TransactionView.data,
      qt_meta_data_TransactionView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TransactionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionView.stringdata0))
        return static_cast<void*>(const_cast< TransactionView*>(this));
    return QWidget::qt_metacast(_clname);
}

int TransactionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void TransactionView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransactionView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TransactionView::trxAmount(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
