/****************************************************************************
** Meta object code from reading C++ file 'guiutil.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/guiutil.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guiutil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter_t qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter = {
    {
QT_MOC_LITERAL(0, 0, 32) // "GUIUtil::ToolTipToRichTextFilter"

    },
    "GUIUtil::ToolTipToRichTextFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUIUtil__ToolTipToRichTextFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GUIUtil::ToolTipToRichTextFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GUIUtil::ToolTipToRichTextFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter.data,
      qt_meta_data_GUIUtil__ToolTipToRichTextFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GUIUtil::ToolTipToRichTextFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUIUtil::ToolTipToRichTextFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter.stringdata0))
        return static_cast<void*>(const_cast< ToolTipToRichTextFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int GUIUtil::ToolTipToRichTextFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer_t {
    QByteArrayData data[7];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer_t qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer = {
    {
QT_MOC_LITERAL(0, 0, 41), // "GUIUtil::TableViewLastColumnR..."
QT_MOC_LITERAL(1, 42, 17), // "on_sectionResized"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 12), // "logicalIndex"
QT_MOC_LITERAL(4, 74, 7), // "oldSize"
QT_MOC_LITERAL(5, 82, 7), // "newSize"
QT_MOC_LITERAL(6, 90, 20) // "on_geometriesChanged"

    },
    "GUIUtil::TableViewLastColumnResizingFixer\0"
    "on_sectionResized\0\0logicalIndex\0oldSize\0"
    "newSize\0on_geometriesChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUIUtil__TableViewLastColumnResizingFixer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x08 /* Private */,
       6,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void GUIUtil::TableViewLastColumnResizingFixer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableViewLastColumnResizingFixer *_t = static_cast<TableViewLastColumnResizingFixer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_sectionResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->on_geometriesChanged(); break;
        default: ;
        }
    }
}

const QMetaObject GUIUtil::TableViewLastColumnResizingFixer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer.data,
      qt_meta_data_GUIUtil__TableViewLastColumnResizingFixer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GUIUtil::TableViewLastColumnResizingFixer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUIUtil::TableViewLastColumnResizingFixer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer.stringdata0))
        return static_cast<void*>(const_cast< TableViewLastColumnResizingFixer*>(this));
    return QObject::qt_metacast(_clname);
}

int GUIUtil::TableViewLastColumnResizingFixer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_GUIUtil__HelpMessageBox_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUIUtil__HelpMessageBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUIUtil__HelpMessageBox_t qt_meta_stringdata_GUIUtil__HelpMessageBox = {
    {
QT_MOC_LITERAL(0, 0, 23) // "GUIUtil::HelpMessageBox"

    },
    "GUIUtil::HelpMessageBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUIUtil__HelpMessageBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GUIUtil::HelpMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GUIUtil::HelpMessageBox::staticMetaObject = {
    { &QMessageBox::staticMetaObject, qt_meta_stringdata_GUIUtil__HelpMessageBox.data,
      qt_meta_data_GUIUtil__HelpMessageBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GUIUtil::HelpMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUIUtil::HelpMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GUIUtil__HelpMessageBox.stringdata0))
        return static_cast<void*>(const_cast< HelpMessageBox*>(this));
    return QMessageBox::qt_metacast(_clname);
}

int GUIUtil::HelpMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMessageBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
