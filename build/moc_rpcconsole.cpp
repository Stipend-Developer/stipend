/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/rpcconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RPCConsole_t {
    QByteArrayData data[52];
    char stringdata0[782];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPCConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPCConsole_t qt_meta_stringdata_RPCConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RPCConsole"
QT_MOC_LITERAL(1, 11, 12), // "stopExecutor"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "cmdRequest"
QT_MOC_LITERAL(4, 36, 7), // "command"
QT_MOC_LITERAL(5, 44, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(6, 70, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(7, 98, 5), // "index"
QT_MOC_LITERAL(8, 104, 33), // "on_openDebugLogfileButton_cli..."
QT_MOC_LITERAL(9, 138, 30), // "on_showCLOptionsButton_clicked"
QT_MOC_LITERAL(10, 169, 29), // "on_sldGraphRange_valueChanged"
QT_MOC_LITERAL(11, 199, 5), // "value"
QT_MOC_LITERAL(12, 205, 18), // "updateTrafficStats"
QT_MOC_LITERAL(13, 224, 12), // "totalBytesIn"
QT_MOC_LITERAL(14, 237, 13), // "totalBytesOut"
QT_MOC_LITERAL(15, 251, 11), // "resizeEvent"
QT_MOC_LITERAL(16, 263, 13), // "QResizeEvent*"
QT_MOC_LITERAL(17, 277, 5), // "event"
QT_MOC_LITERAL(18, 283, 9), // "showEvent"
QT_MOC_LITERAL(19, 293, 11), // "QShowEvent*"
QT_MOC_LITERAL(20, 305, 9), // "hideEvent"
QT_MOC_LITERAL(21, 315, 11), // "QHideEvent*"
QT_MOC_LITERAL(22, 327, 25), // "showPeersTableContextMenu"
QT_MOC_LITERAL(23, 353, 5), // "point"
QT_MOC_LITERAL(24, 359, 23), // "showBanTableContextMenu"
QT_MOC_LITERAL(25, 383, 28), // "showOrHideBanTableIfRequired"
QT_MOC_LITERAL(26, 412, 17), // "clearSelectedNode"
QT_MOC_LITERAL(27, 430, 31), // "on_btnClearTrafficGraph_clicked"
QT_MOC_LITERAL(28, 462, 22), // "on_pasteButton_clicked"
QT_MOC_LITERAL(29, 485, 21), // "on_copyButton_clicked"
QT_MOC_LITERAL(30, 507, 5), // "clear"
QT_MOC_LITERAL(31, 513, 7), // "message"
QT_MOC_LITERAL(32, 521, 8), // "category"
QT_MOC_LITERAL(33, 530, 4), // "html"
QT_MOC_LITERAL(34, 535, 17), // "setNumConnections"
QT_MOC_LITERAL(35, 553, 5), // "count"
QT_MOC_LITERAL(36, 559, 12), // "setNumBlocks"
QT_MOC_LITERAL(37, 572, 18), // "setMasternodeCount"
QT_MOC_LITERAL(38, 591, 14), // "strMasternodes"
QT_MOC_LITERAL(39, 606, 13), // "browseHistory"
QT_MOC_LITERAL(40, 620, 6), // "offset"
QT_MOC_LITERAL(41, 627, 11), // "scrollToEnd"
QT_MOC_LITERAL(42, 639, 12), // "peerSelected"
QT_MOC_LITERAL(43, 652, 14), // "QItemSelection"
QT_MOC_LITERAL(44, 667, 8), // "selected"
QT_MOC_LITERAL(45, 676, 10), // "deselected"
QT_MOC_LITERAL(46, 687, 17), // "peerLayoutChanged"
QT_MOC_LITERAL(47, 705, 22), // "disconnectSelectedNode"
QT_MOC_LITERAL(48, 728, 15), // "banSelectedNode"
QT_MOC_LITERAL(49, 744, 7), // "bantime"
QT_MOC_LITERAL(50, 752, 17), // "unbanSelectedNode"
QT_MOC_LITERAL(51, 770, 11) // "showBackups"

    },
    "RPCConsole\0stopExecutor\0\0cmdRequest\0"
    "command\0on_lineEdit_returnPressed\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_openDebugLogfileButton_clicked\0"
    "on_showCLOptionsButton_clicked\0"
    "on_sldGraphRange_valueChanged\0value\0"
    "updateTrafficStats\0totalBytesIn\0"
    "totalBytesOut\0resizeEvent\0QResizeEvent*\0"
    "event\0showEvent\0QShowEvent*\0hideEvent\0"
    "QHideEvent*\0showPeersTableContextMenu\0"
    "point\0showBanTableContextMenu\0"
    "showOrHideBanTableIfRequired\0"
    "clearSelectedNode\0on_btnClearTrafficGraph_clicked\0"
    "on_pasteButton_clicked\0on_copyButton_clicked\0"
    "clear\0message\0category\0html\0"
    "setNumConnections\0count\0setNumBlocks\0"
    "setMasternodeCount\0strMasternodes\0"
    "browseHistory\0offset\0scrollToEnd\0"
    "peerSelected\0QItemSelection\0selected\0"
    "deselected\0peerLayoutChanged\0"
    "disconnectSelectedNode\0banSelectedNode\0"
    "bantime\0unbanSelectedNode\0showBackups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPCConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    1,  175,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  178,    2, 0x08 /* Private */,
       6,    1,  179,    2, 0x08 /* Private */,
       8,    0,  182,    2, 0x08 /* Private */,
       9,    0,  183,    2, 0x08 /* Private */,
      10,    1,  184,    2, 0x08 /* Private */,
      12,    2,  187,    2, 0x08 /* Private */,
      15,    1,  192,    2, 0x08 /* Private */,
      18,    1,  195,    2, 0x08 /* Private */,
      20,    1,  198,    2, 0x08 /* Private */,
      22,    1,  201,    2, 0x08 /* Private */,
      24,    1,  204,    2, 0x08 /* Private */,
      25,    0,  207,    2, 0x08 /* Private */,
      26,    0,  208,    2, 0x08 /* Private */,
      27,    0,  209,    2, 0x08 /* Private */,
      28,    0,  210,    2, 0x08 /* Private */,
      29,    0,  211,    2, 0x08 /* Private */,
      30,    0,  212,    2, 0x0a /* Public */,
      31,    3,  213,    2, 0x0a /* Public */,
      31,    2,  220,    2, 0x2a /* Public | MethodCloned */,
      34,    1,  225,    2, 0x0a /* Public */,
      36,    1,  228,    2, 0x0a /* Public */,
      37,    1,  231,    2, 0x0a /* Public */,
      39,    1,  234,    2, 0x0a /* Public */,
      41,    0,  237,    2, 0x0a /* Public */,
      42,    2,  238,    2, 0x0a /* Public */,
      46,    0,  243,    2, 0x0a /* Public */,
      47,    0,  244,    2, 0x0a /* Public */,
      48,    1,  245,    2, 0x0a /* Public */,
      50,    0,  248,    2, 0x0a /* Public */,
      51,    0,  249,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   17,
    QMetaType::Void, 0x80000000 | 21,   17,
    QMetaType::Void, QMetaType::QPoint,   23,
    QMetaType::Void, QMetaType::QPoint,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   32,   31,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   32,   31,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 43,   44,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RPCConsole *_t = static_cast<RPCConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_openDebugLogfileButton_clicked(); break;
        case 5: _t->on_showCLOptionsButton_clicked(); break;
        case 6: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateTrafficStats((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 8: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 9: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 10: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 11: _t->showPeersTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->showBanTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->showOrHideBanTableIfRequired(); break;
        case 14: _t->clearSelectedNode(); break;
        case 15: _t->on_btnClearTrafficGraph_clicked(); break;
        case 16: _t->on_pasteButton_clicked(); break;
        case 17: _t->on_copyButton_clicked(); break;
        case 18: _t->clear(); break;
        case 19: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->setMasternodeCount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->scrollToEnd(); break;
        case 26: _t->peerSelected((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 27: _t->peerLayoutChanged(); break;
        case 28: _t->disconnectSelectedNode(); break;
        case 29: _t->banSelectedNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->unbanSelectedNode(); break;
        case 31: _t->showBackups(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RPCConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::stopExecutor)) {
                *result = 0;
            }
        }
        {
            typedef void (RPCConsole::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::cmdRequest)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject RPCConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RPCConsole.data,
      qt_meta_data_RPCConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole.stringdata0))
        return static_cast<void*>(const_cast< RPCConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void RPCConsole::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RPCConsole::cmdRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
