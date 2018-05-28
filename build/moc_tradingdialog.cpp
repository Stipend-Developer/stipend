/****************************************************************************
** Meta object code from reading C++ file 'tradingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/tradingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tradingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tradingDialog_t {
    QByteArrayData data[91];
    char stringdata0[1590];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tradingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tradingDialog_t qt_meta_stringdata_tradingDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "tradingDialog"
QT_MOC_LITERAL(1, 14, 11), // "InitTrading"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 33), // "on_TradingTabWidget_tabBarCli..."
QT_MOC_LITERAL(4, 61, 5), // "index"
QT_MOC_LITERAL(5, 67, 31), // "ParseAndPopulateOrderBookTables"
QT_MOC_LITERAL(6, 99, 8), // "Response"
QT_MOC_LITERAL(7, 108, 34), // "ParseAndPopulateMarketHistory..."
QT_MOC_LITERAL(8, 143, 35), // "ParseAndPopulateAccountHistor..."
QT_MOC_LITERAL(9, 179, 31), // "ParseAndPopulateOpenOrdersTable"
QT_MOC_LITERAL(10, 211, 15), // "UpdaterFunction"
QT_MOC_LITERAL(11, 227, 21), // "CreateOrderBookTables"
QT_MOC_LITERAL(12, 249, 13), // "QTableWidget&"
QT_MOC_LITERAL(13, 263, 5), // "Table"
QT_MOC_LITERAL(14, 269, 11), // "TableHeader"
QT_MOC_LITERAL(15, 281, 14), // "DisplayBalance"
QT_MOC_LITERAL(16, 296, 7), // "QLabel&"
QT_MOC_LITERAL(17, 304, 12), // "BalanceLabel"
QT_MOC_LITERAL(18, 317, 9), // "Available"
QT_MOC_LITERAL(19, 327, 7), // "Pending"
QT_MOC_LITERAL(20, 335, 8), // "Currency"
QT_MOC_LITERAL(21, 344, 13), // "BalanceLabel2"
QT_MOC_LITERAL(22, 358, 9), // "Response2"
QT_MOC_LITERAL(23, 368, 15), // "ActionsOnSwitch"
QT_MOC_LITERAL(24, 384, 15), // "CancelOrderSlot"
QT_MOC_LITERAL(25, 400, 3), // "row"
QT_MOC_LITERAL(26, 404, 3), // "col"
QT_MOC_LITERAL(27, 408, 21), // "on_UpdateKeys_clicked"
QT_MOC_LITERAL(28, 430, 4), // "Save"
QT_MOC_LITERAL(29, 435, 4), // "Load"
QT_MOC_LITERAL(30, 440, 19), // "on_LoadKeys_clicked"
QT_MOC_LITERAL(31, 460, 19), // "on_SaveKeys_clicked"
QT_MOC_LITERAL(32, 480, 24), // "on_GenDepositBTN_clicked"
QT_MOC_LITERAL(33, 505, 21), // "CalculateBuyCostLabel"
QT_MOC_LITERAL(34, 527, 25), // "on_Buy_Max_Amount_clicked"
QT_MOC_LITERAL(35, 553, 37), // "on_BuyBidcomboBox_currentInde..."
QT_MOC_LITERAL(36, 591, 4), // "arg1"
QT_MOC_LITERAL(37, 596, 25), // "on_UnitsInput_textChanged"
QT_MOC_LITERAL(38, 622, 30), // "on_BuyBidPriceEdit_textChanged"
QT_MOC_LITERAL(39, 653, 16), // "on_BuyTX_clicked"
QT_MOC_LITERAL(40, 670, 22), // "CalculateSellCostLabel"
QT_MOC_LITERAL(41, 693, 26), // "on_Sell_Max_Amount_clicked"
QT_MOC_LITERAL(42, 720, 38), // "on_SellBidcomboBox_currentInd..."
QT_MOC_LITERAL(43, 759, 27), // "on_UnitsInputTX_textChanged"
QT_MOC_LITERAL(44, 787, 31), // "on_SellBidPriceEdit_textChanged"
QT_MOC_LITERAL(45, 819, 20), // "on_SellTXBTN_clicked"
QT_MOC_LITERAL(46, 840, 23), // "CalculateCSReceiveLabel"
QT_MOC_LITERAL(47, 864, 27), // "on_CSUnitsInput_textChanged"
QT_MOC_LITERAL(48, 892, 21), // "on_CSUnitsBtn_clicked"
QT_MOC_LITERAL(49, 914, 24), // "on_CS_Max_Amount_clicked"
QT_MOC_LITERAL(50, 939, 30), // "on_Withdraw_Max_Amount_clicked"
QT_MOC_LITERAL(51, 970, 27), // "on_WithdrawUnitsBtn_clicked"
QT_MOC_LITERAL(52, 998, 25), // "on_KeyPasteButton_clicked"
QT_MOC_LITERAL(53, 1024, 28), // "on_SecretPasteButton_clicked"
QT_MOC_LITERAL(54, 1053, 24), // "on_CSPasteButton_clicked"
QT_MOC_LITERAL(55, 1078, 30), // "on_WithdrawPasteButton_clicked"
QT_MOC_LITERAL(56, 1109, 28), // "on_DepositCopyButton_clicked"
QT_MOC_LITERAL(57, 1138, 25), // "SetExchangeInfoTextLabels"
QT_MOC_LITERAL(58, 1164, 29), // "FuExchangeTimeStampToReadable"
QT_MOC_LITERAL(59, 1194, 8), // "DateTime"
QT_MOC_LITERAL(60, 1203, 11), // "CancelOrder"
QT_MOC_LITERAL(61, 1215, 7), // "Orderid"
QT_MOC_LITERAL(62, 1223, 5), // "BuyTX"
QT_MOC_LITERAL(63, 1229, 9), // "OrderType"
QT_MOC_LITERAL(64, 1239, 8), // "Quantity"
QT_MOC_LITERAL(65, 1248, 4), // "Rate"
QT_MOC_LITERAL(66, 1253, 6), // "SellTX"
QT_MOC_LITERAL(67, 1260, 8), // "Withdraw"
QT_MOC_LITERAL(68, 1269, 6), // "Amount"
QT_MOC_LITERAL(69, 1276, 7), // "Address"
QT_MOC_LITERAL(70, 1284, 4), // "Coin"
QT_MOC_LITERAL(71, 1289, 16), // "GetMarketHistory"
QT_MOC_LITERAL(72, 1306, 16), // "GetMarketSummary"
QT_MOC_LITERAL(73, 1323, 12), // "GetOrderBook"
QT_MOC_LITERAL(74, 1336, 13), // "GetOpenOrders"
QT_MOC_LITERAL(75, 1350, 17), // "GetAccountHistory"
QT_MOC_LITERAL(76, 1368, 10), // "GetBalance"
QT_MOC_LITERAL(77, 1379, 17), // "GetDepositAddress"
QT_MOC_LITERAL(78, 1397, 18), // "HMAC_SHA512_SIGNER"
QT_MOC_LITERAL(79, 1416, 9), // "UrlToSign"
QT_MOC_LITERAL(80, 1426, 9), // "Secretkey"
QT_MOC_LITERAL(81, 1436, 11), // "sendRequest"
QT_MOC_LITERAL(82, 1448, 3), // "url"
QT_MOC_LITERAL(83, 1452, 14), // "encryptDecrypt"
QT_MOC_LITERAL(84, 1467, 6), // "string"
QT_MOC_LITERAL(85, 1474, 9), // "toEncrypt"
QT_MOC_LITERAL(86, 1484, 8), // "password"
QT_MOC_LITERAL(87, 1493, 29), // "GetResultObjectFromJSONObject"
QT_MOC_LITERAL(88, 1523, 8), // "response"
QT_MOC_LITERAL(89, 1532, 28), // "GetResultObjectFromJSONArray"
QT_MOC_LITERAL(90, 1561, 28) // "GetResultArrayFromJSONObject"

    },
    "tradingDialog\0InitTrading\0\0"
    "on_TradingTabWidget_tabBarClicked\0"
    "index\0ParseAndPopulateOrderBookTables\0"
    "Response\0ParseAndPopulateMarketHistoryTable\0"
    "ParseAndPopulateAccountHistoryTable\0"
    "ParseAndPopulateOpenOrdersTable\0"
    "UpdaterFunction\0CreateOrderBookTables\0"
    "QTableWidget&\0Table\0TableHeader\0"
    "DisplayBalance\0QLabel&\0BalanceLabel\0"
    "Available\0Pending\0Currency\0BalanceLabel2\0"
    "Response2\0ActionsOnSwitch\0CancelOrderSlot\0"
    "row\0col\0on_UpdateKeys_clicked\0Save\0"
    "Load\0on_LoadKeys_clicked\0on_SaveKeys_clicked\0"
    "on_GenDepositBTN_clicked\0CalculateBuyCostLabel\0"
    "on_Buy_Max_Amount_clicked\0"
    "on_BuyBidcomboBox_currentIndexChanged\0"
    "arg1\0on_UnitsInput_textChanged\0"
    "on_BuyBidPriceEdit_textChanged\0"
    "on_BuyTX_clicked\0CalculateSellCostLabel\0"
    "on_Sell_Max_Amount_clicked\0"
    "on_SellBidcomboBox_currentIndexChanged\0"
    "on_UnitsInputTX_textChanged\0"
    "on_SellBidPriceEdit_textChanged\0"
    "on_SellTXBTN_clicked\0CalculateCSReceiveLabel\0"
    "on_CSUnitsInput_textChanged\0"
    "on_CSUnitsBtn_clicked\0on_CS_Max_Amount_clicked\0"
    "on_Withdraw_Max_Amount_clicked\0"
    "on_WithdrawUnitsBtn_clicked\0"
    "on_KeyPasteButton_clicked\0"
    "on_SecretPasteButton_clicked\0"
    "on_CSPasteButton_clicked\0"
    "on_WithdrawPasteButton_clicked\0"
    "on_DepositCopyButton_clicked\0"
    "SetExchangeInfoTextLabels\0"
    "FuExchangeTimeStampToReadable\0DateTime\0"
    "CancelOrder\0Orderid\0BuyTX\0OrderType\0"
    "Quantity\0Rate\0SellTX\0Withdraw\0Amount\0"
    "Address\0Coin\0GetMarketHistory\0"
    "GetMarketSummary\0GetOrderBook\0"
    "GetOpenOrders\0GetAccountHistory\0"
    "GetBalance\0GetDepositAddress\0"
    "HMAC_SHA512_SIGNER\0UrlToSign\0Secretkey\0"
    "sendRequest\0url\0encryptDecrypt\0string\0"
    "toEncrypt\0password\0GetResultObjectFromJSONObject\0"
    "response\0GetResultObjectFromJSONArray\0"
    "GetResultArrayFromJSONObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tradingDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  319,    2, 0x08 /* Private */,
       3,    1,  320,    2, 0x08 /* Private */,
       5,    1,  323,    2, 0x08 /* Private */,
       7,    1,  326,    2, 0x08 /* Private */,
       8,    1,  329,    2, 0x08 /* Private */,
       9,    1,  332,    2, 0x08 /* Private */,
      10,    0,  335,    2, 0x08 /* Private */,
      11,    2,  336,    2, 0x08 /* Private */,
      15,    5,  341,    2, 0x08 /* Private */,
      15,    4,  352,    2, 0x08 /* Private */,
      15,    2,  361,    2, 0x08 /* Private */,
      23,    1,  366,    2, 0x08 /* Private */,
      24,    2,  369,    2, 0x08 /* Private */,
      27,    2,  374,    2, 0x08 /* Private */,
      27,    1,  379,    2, 0x28 /* Private | MethodCloned */,
      27,    0,  382,    2, 0x28 /* Private | MethodCloned */,
      30,    0,  383,    2, 0x08 /* Private */,
      31,    0,  384,    2, 0x08 /* Private */,
      32,    0,  385,    2, 0x08 /* Private */,
      33,    0,  386,    2, 0x08 /* Private */,
      34,    0,  387,    2, 0x08 /* Private */,
      35,    1,  388,    2, 0x08 /* Private */,
      37,    1,  391,    2, 0x08 /* Private */,
      38,    1,  394,    2, 0x08 /* Private */,
      39,    0,  397,    2, 0x08 /* Private */,
      40,    0,  398,    2, 0x08 /* Private */,
      41,    0,  399,    2, 0x08 /* Private */,
      42,    1,  400,    2, 0x08 /* Private */,
      43,    1,  403,    2, 0x08 /* Private */,
      44,    1,  406,    2, 0x08 /* Private */,
      45,    0,  409,    2, 0x08 /* Private */,
      46,    0,  410,    2, 0x08 /* Private */,
      47,    1,  411,    2, 0x08 /* Private */,
      48,    0,  414,    2, 0x08 /* Private */,
      49,    0,  415,    2, 0x08 /* Private */,
      50,    0,  416,    2, 0x08 /* Private */,
      51,    0,  417,    2, 0x08 /* Private */,
      52,    0,  418,    2, 0x08 /* Private */,
      53,    0,  419,    2, 0x08 /* Private */,
      54,    0,  420,    2, 0x08 /* Private */,
      55,    0,  421,    2, 0x08 /* Private */,
      56,    0,  422,    2, 0x08 /* Private */,
      57,    0,  423,    2, 0x08 /* Private */,
      58,    1,  424,    2, 0x08 /* Private */,
      60,    1,  427,    2, 0x08 /* Private */,
      62,    3,  430,    2, 0x08 /* Private */,
      66,    3,  437,    2, 0x08 /* Private */,
      67,    3,  444,    2, 0x08 /* Private */,
      71,    0,  451,    2, 0x08 /* Private */,
      72,    0,  452,    2, 0x08 /* Private */,
      73,    0,  453,    2, 0x08 /* Private */,
      74,    0,  454,    2, 0x08 /* Private */,
      75,    0,  455,    2, 0x08 /* Private */,
      76,    1,  456,    2, 0x08 /* Private */,
      77,    0,  459,    2, 0x08 /* Private */,
      78,    2,  460,    2, 0x08 /* Private */,
      81,    1,  465,    2, 0x08 /* Private */,
      83,    2,  468,    2, 0x08 /* Private */,
      87,    1,  473,    2, 0x08 /* Private */,
      89,    1,  476,    2, 0x08 /* Private */,
      90,    1,  479,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QStringList,   13,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16, 0x80000000 | 16, QMetaType::QString, QMetaType::QString,   17,   18,   19,   20,    6,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16, QMetaType::QString, QMetaType::QString,   17,   21,    6,   22,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   17,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   26,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   28,   29,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::QString, QMetaType::QString,   59,
    QMetaType::QString, QMetaType::QString,   61,
    QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double,   63,   64,   65,
    QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double,   63,   64,   65,
    QMetaType::QString, QMetaType::Double, QMetaType::QString, QMetaType::QString,   68,   69,   70,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   20,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   79,   80,
    QMetaType::QString, QMetaType::QString,   82,
    0x80000000 | 84, 0x80000000 | 84, 0x80000000 | 84,   85,   86,
    QMetaType::QJsonObject, QMetaType::QString,   88,
    QMetaType::QJsonObject, QMetaType::QString,   88,
    QMetaType::QJsonArray, QMetaType::QString,   88,

       0        // eod
};

void tradingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tradingDialog *_t = static_cast<tradingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InitTrading(); break;
        case 1: _t->on_TradingTabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ParseAndPopulateOrderBookTables((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->ParseAndPopulateMarketHistoryTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ParseAndPopulateAccountHistoryTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->ParseAndPopulateOpenOrdersTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->UpdaterFunction(); break;
        case 7: _t->CreateOrderBookTables((*reinterpret_cast< QTableWidget(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 8: _t->DisplayBalance((*reinterpret_cast< QLabel(*)>(_a[1])),(*reinterpret_cast< QLabel(*)>(_a[2])),(*reinterpret_cast< QLabel(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 9: _t->DisplayBalance((*reinterpret_cast< QLabel(*)>(_a[1])),(*reinterpret_cast< QLabel(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 10: _t->DisplayBalance((*reinterpret_cast< QLabel(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->ActionsOnSwitch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->CancelOrderSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->on_UpdateKeys_clicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->on_UpdateKeys_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_UpdateKeys_clicked(); break;
        case 16: _t->on_LoadKeys_clicked(); break;
        case 17: _t->on_SaveKeys_clicked(); break;
        case 18: _t->on_GenDepositBTN_clicked(); break;
        case 19: _t->CalculateBuyCostLabel(); break;
        case 20: _t->on_Buy_Max_Amount_clicked(); break;
        case 21: _t->on_BuyBidcomboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->on_UnitsInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->on_BuyBidPriceEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->on_BuyTX_clicked(); break;
        case 25: _t->CalculateSellCostLabel(); break;
        case 26: _t->on_Sell_Max_Amount_clicked(); break;
        case 27: _t->on_SellBidcomboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->on_UnitsInputTX_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->on_SellBidPriceEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->on_SellTXBTN_clicked(); break;
        case 31: _t->CalculateCSReceiveLabel(); break;
        case 32: _t->on_CSUnitsInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->on_CSUnitsBtn_clicked(); break;
        case 34: _t->on_CS_Max_Amount_clicked(); break;
        case 35: _t->on_Withdraw_Max_Amount_clicked(); break;
        case 36: _t->on_WithdrawUnitsBtn_clicked(); break;
        case 37: _t->on_KeyPasteButton_clicked(); break;
        case 38: _t->on_SecretPasteButton_clicked(); break;
        case 39: _t->on_CSPasteButton_clicked(); break;
        case 40: _t->on_WithdrawPasteButton_clicked(); break;
        case 41: _t->on_DepositCopyButton_clicked(); break;
        case 42: { int _r = _t->SetExchangeInfoTextLabels();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 43: { QString _r = _t->FuExchangeTimeStampToReadable((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 44: { QString _r = _t->CancelOrder((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 45: { QString _r = _t->BuyTX((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 46: { QString _r = _t->SellTX((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 47: { QString _r = _t->Withdraw((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 48: { QString _r = _t->GetMarketHistory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 49: { QString _r = _t->GetMarketSummary();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 50: { QString _r = _t->GetOrderBook();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 51: { QString _r = _t->GetOpenOrders();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 52: { QString _r = _t->GetAccountHistory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 53: { QString _r = _t->GetBalance((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 54: { QString _r = _t->GetDepositAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 55: { QString _r = _t->HMAC_SHA512_SIGNER((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 56: { QString _r = _t->sendRequest((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 57: { string _r = _t->encryptDecrypt((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 58: { QJsonObject _r = _t->GetResultObjectFromJSONObject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 59: { QJsonObject _r = _t->GetResultObjectFromJSONArray((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 60: { QJsonArray _r = _t->GetResultArrayFromJSONObject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject tradingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tradingDialog.data,
      qt_meta_data_tradingDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tradingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tradingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tradingDialog.stringdata0))
        return static_cast<void*>(const_cast< tradingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int tradingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 61;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
