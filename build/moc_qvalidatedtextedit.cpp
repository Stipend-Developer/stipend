/****************************************************************************
** Meta object code from reading C++ file 'qvalidatedtextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/qvalidatedtextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvalidatedtextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QValidatedTextEdit_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QValidatedTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QValidatedTextEdit_t qt_meta_stringdata_QValidatedTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QValidatedTextEdit"
QT_MOC_LITERAL(1, 19, 8), // "setValid"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "valid"
QT_MOC_LITERAL(4, 35, 12), // "setErrorText"
QT_MOC_LITERAL(5, 48, 9), // "errorText"
QT_MOC_LITERAL(6, 58, 9) // "markValid"

    },
    "QValidatedTextEdit\0setValid\0\0valid\0"
    "setErrorText\0errorText\0markValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QValidatedTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void QValidatedTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QValidatedTextEdit *_t = static_cast<QValidatedTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setErrorText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->markValid(); break;
        default: ;
        }
    }
}

const QMetaObject QValidatedTextEdit::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_QValidatedTextEdit.data,
      qt_meta_data_QValidatedTextEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QValidatedTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QValidatedTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QValidatedTextEdit.stringdata0))
        return static_cast<void*>(const_cast< QValidatedTextEdit*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int QValidatedTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
