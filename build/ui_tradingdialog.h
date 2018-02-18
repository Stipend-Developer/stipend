/********************************************************************************
** Form generated from reading UI file 'tradingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADINGDIALOG_H
#define UI_TRADINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tradingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *tradingHeaderContainer;
    QVBoxLayout *verticalLayout_trade;
    QHBoxLayout *wallettradeHeader;
    QLabel *Bid;
    QLabel *volumet;
    QLabel *Ask;
    QLabel *volumebtc;
    QTabWidget *TradingTabWidget;
    QWidget *BuyTab;
    QGridLayout *gridLayout_6;
    QFrame *line;
    QTableWidget *AsksTable;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label232;
    QLabel *BtcAvailableLabel;
    QLabel *labelBTC;
    QHBoxLayout *horizontalLayout;
    QLabel *label232_2;
    QLabel *TXAvailableLabel;
    QLabel *labelTX;
    QPushButton *Buy_Max_Amount;
    QLineEdit *UnitsInput;
    QLabel *label_4;
    QPushButton *Sell_Max_Amount;
    QLineEdit *UnitsInputTX;
    QLabel *label_22;
    QLabel *label_6;
    QComboBox *BuyBidcomboBox;
    QLineEdit *BuyBidPriceEdit;
    QLabel *label_5;
    QComboBox *SellBidcomboBox;
    QLineEdit *SellBidPriceEdit;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_23;
    QLabel *BuyCostLabel;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_19;
    QLabel *SellCostLabel;
    QLabel *label_17;
    QPushButton *BuyTX;
    QPushButton *SellTXBTN;
    QTableWidget *BidsTable;
    QLabel *BtcDemand;
    QLabel *AsksCount;
    QLabel *BtcSupply;
    QLabel *TXDemand;
    QLabel *TXSupply;
    QLabel *BidsCount;
    QWidget *tab;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_21;
    QLabel *CSDumpLabel;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_32;
    QLabel *CSTotalLabel;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_20;
    QLabel *CSReceiveLabel;
    QLabel *label_18;
    QPushButton *CSUnitsBtn;
    QLabel *label232_8;
    QLabel *label232_13;
    QLabel *label232_15;
    QLabel *label_27;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *CSUnitsInput;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_29;
    QLabel *FuExchangeTXLabel;
    QLabel *label_30;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_36;
    QLabel *FuExchangeBTCLabel;
    QLabel *label_37;
    QPushButton *CS_Max_Amount;
    QLineEdit *CSUnitsAddress;
    QToolButton *CSPasteButton;
    QLabel *label232_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *MarketHistory;
    QGridLayout *gridLayout_5;
    QTableWidget *MarketHistoryTable;
    QWidget *OpenOrders;
    QGridLayout *gridLayout_4;
    QTableWidget *OpenOrdersTable;
    QWidget *TradeHistory;
    QGridLayout *gridLayout_3;
    QTableWidget *TradeHistoryTable;
    QWidget *BalanceTab;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLabel *TXBalanceLabel;
    QLabel *label_12;
    QLabel *BitcoinBalanceLabel;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_13;
    QLabel *TXAvailableLabel_2;
    QLabel *label_15;
    QLabel *BitcoinAvailableLabel;
    QLabel *label_14;
    QLabel *TXPendingLabel;
    QLabel *label_31;
    QLabel *BitcoinPendingLabel;
    QPushButton *GenDepositBTN;
    QLabel *label_33;
    QLabel *DepositAddressLabel;
    QToolButton *DepositCopyButton;
    QLabel *label_34;
    QLabel *label_26;
    QLineEdit *WithdrawUnitsInput;
    QPushButton *Withdraw_Max_Amount;
    QLabel *label_10;
    QLineEdit *WithdrawAddress;
    QToolButton *WithdrawPasteButton;
    QPushButton *WithdrawUnitsBtn;
    QSpacerItem *verticalSpacer;
    QWidget *ApiSettings;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *ApiKeyInput;
    QToolButton *KeyPasteButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *SecretKeyInput;
    QToolButton *SecretPasteButton;
    QLabel *label_28;
    QLineEdit *PasswordInput;
    QPushButton *LoadKeys;
    QPushButton *UpdateKeys;
    QPushButton *SaveKeys;
    QSpacerItem *verticalSpacer_2;
    QLabel *label232_17;
    QLabel *label232_16;

    void setupUi(QDialog *tradingDialog)
    {
        if (tradingDialog->objectName().isEmpty())
            tradingDialog->setObjectName(QStringLiteral("tradingDialog"));
        tradingDialog->resize(1031, 594);
        verticalLayout = new QVBoxLayout(tradingDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tradingHeaderContainer = new QFrame(tradingDialog);
        tradingHeaderContainer->setObjectName(QStringLiteral("tradingHeaderContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tradingHeaderContainer->sizePolicy().hasHeightForWidth());
        tradingHeaderContainer->setSizePolicy(sizePolicy);
        tradingHeaderContainer->setMinimumSize(QSize(849, 40));
        tradingHeaderContainer->setMaximumSize(QSize(16777215, 220));
        tradingHeaderContainer->setFrameShape(QFrame::NoFrame);
        tradingHeaderContainer->setFrameShadow(QFrame::Raised);
        tradingHeaderContainer->setLineWidth(0);
        verticalLayout_trade = new QVBoxLayout(tradingHeaderContainer);
        verticalLayout_trade->setObjectName(QStringLiteral("verticalLayout_trade"));
        wallettradeHeader = new QHBoxLayout();
        wallettradeHeader->setObjectName(QStringLiteral("wallettradeHeader"));
        Bid = new QLabel(tradingHeaderContainer);
        Bid->setObjectName(QStringLiteral("Bid"));
        Bid->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        Bid->setFont(font);
        Bid->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        wallettradeHeader->addWidget(Bid);

        volumet = new QLabel(tradingHeaderContainer);
        volumet->setObjectName(QStringLiteral("volumet"));
        volumet->setMinimumSize(QSize(0, 0));
        volumet->setFont(font);
        volumet->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        wallettradeHeader->addWidget(volumet);

        Ask = new QLabel(tradingHeaderContainer);
        Ask->setObjectName(QStringLiteral("Ask"));
        Ask->setMinimumSize(QSize(0, 0));
        Ask->setFont(font);
        Ask->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        wallettradeHeader->addWidget(Ask);

        volumebtc = new QLabel(tradingHeaderContainer);
        volumebtc->setObjectName(QStringLiteral("volumebtc"));
        volumebtc->setMinimumSize(QSize(0, 0));
        volumebtc->setFont(font);
        volumebtc->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        wallettradeHeader->addWidget(volumebtc);


        verticalLayout_trade->addLayout(wallettradeHeader);


        verticalLayout->addWidget(tradingHeaderContainer);

        TradingTabWidget = new QTabWidget(tradingDialog);
        TradingTabWidget->setObjectName(QStringLiteral("TradingTabWidget"));
        TradingTabWidget->setEnabled(true);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        TradingTabWidget->setFont(font1);
        TradingTabWidget->setTabPosition(QTabWidget::North);
        TradingTabWidget->setTabShape(QTabWidget::Rounded);
        BuyTab = new QWidget();
        BuyTab->setObjectName(QStringLiteral("BuyTab"));
        gridLayout_6 = new QGridLayout(BuyTab);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        line = new QFrame(BuyTab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 2, 6, 1, 1);

        AsksTable = new QTableWidget(BuyTab);
        AsksTable->setObjectName(QStringLiteral("AsksTable"));
        AsksTable->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        AsksTable->setFont(font2);
        AsksTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        AsksTable->setTabKeyNavigation(false);
        AsksTable->setProperty("showDropIndicator", QVariant(false));
        AsksTable->setDragEnabled(true);
        AsksTable->setDragDropOverwriteMode(false);
        AsksTable->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout_6->addWidget(AsksTable, 2, 7, 1, 5);

        label_3 = new QLabel(BuyTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAutoFillBackground(false);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_6->addWidget(label_3, 3, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label232 = new QLabel(BuyTab);
        label232->setObjectName(QStringLiteral("label232"));
        label232->setFont(font3);

        horizontalLayout_3->addWidget(label232);

        BtcAvailableLabel = new QLabel(BuyTab);
        BtcAvailableLabel->setObjectName(QStringLiteral("BtcAvailableLabel"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 212, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 113, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(127, 212, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        BtcAvailableLabel->setPalette(palette);
        BtcAvailableLabel->setFont(font3);
        BtcAvailableLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(BtcAvailableLabel);

        labelBTC = new QLabel(BuyTab);
        labelBTC->setObjectName(QStringLiteral("labelBTC"));
        labelBTC->setFont(font3);

        horizontalLayout_3->addWidget(labelBTC);


        gridLayout_6->addLayout(horizontalLayout_3, 3, 2, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label232_2 = new QLabel(BuyTab);
        label232_2->setObjectName(QStringLiteral("label232_2"));
        label232_2->setFont(font3);

        horizontalLayout->addWidget(label232_2);

        TXAvailableLabel = new QLabel(BuyTab);
        TXAvailableLabel->setObjectName(QStringLiteral("TXAvailableLabel"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        TXAvailableLabel->setPalette(palette1);
        TXAvailableLabel->setFont(font3);
        TXAvailableLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(TXAvailableLabel);

        labelTX = new QLabel(BuyTab);
        labelTX->setObjectName(QStringLiteral("labelTX"));
        labelTX->setFont(font3);

        horizontalLayout->addWidget(labelTX);


        gridLayout_6->addLayout(horizontalLayout, 3, 8, 1, 2);

        Buy_Max_Amount = new QPushButton(BuyTab);
        Buy_Max_Amount->setObjectName(QStringLiteral("Buy_Max_Amount"));
        QFont font4;
        font4.setPointSize(10);
        Buy_Max_Amount->setFont(font4);

        gridLayout_6->addWidget(Buy_Max_Amount, 4, 2, 1, 1);

        UnitsInput = new QLineEdit(BuyTab);
        UnitsInput->setObjectName(QStringLiteral("UnitsInput"));
        UnitsInput->setMinimumSize(QSize(0, 0));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setWeight(75);
        UnitsInput->setFont(font5);

        gridLayout_6->addWidget(UnitsInput, 4, 3, 1, 1);

        label_4 = new QLabel(BuyTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 4, 4, 1, 1);

        Sell_Max_Amount = new QPushButton(BuyTab);
        Sell_Max_Amount->setObjectName(QStringLiteral("Sell_Max_Amount"));
        Sell_Max_Amount->setFont(font4);

        gridLayout_6->addWidget(Sell_Max_Amount, 4, 8, 1, 1);

        UnitsInputTX = new QLineEdit(BuyTab);
        UnitsInputTX->setObjectName(QStringLiteral("UnitsInputTX"));
        UnitsInputTX->setMinimumSize(QSize(0, 0));
        UnitsInputTX->setFont(font5);

        gridLayout_6->addWidget(UnitsInputTX, 4, 9, 1, 1);

        label_22 = new QLabel(BuyTab);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_6->addWidget(label_22, 4, 10, 1, 1);

        label_6 = new QLabel(BuyTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_6->addWidget(label_6, 5, 1, 1, 1);

        BuyBidcomboBox = new QComboBox(BuyTab);
        BuyBidcomboBox->setObjectName(QStringLiteral("BuyBidcomboBox"));
        BuyBidcomboBox->setFont(font4);

        gridLayout_6->addWidget(BuyBidcomboBox, 5, 2, 1, 1);

        BuyBidPriceEdit = new QLineEdit(BuyTab);
        BuyBidPriceEdit->setObjectName(QStringLiteral("BuyBidPriceEdit"));
        BuyBidPriceEdit->setMinimumSize(QSize(0, 0));
        BuyBidPriceEdit->setFont(font5);

        gridLayout_6->addWidget(BuyBidPriceEdit, 5, 3, 1, 1);

        label_5 = new QLabel(BuyTab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 5, 4, 1, 1);

        SellBidcomboBox = new QComboBox(BuyTab);
        SellBidcomboBox->setObjectName(QStringLiteral("SellBidcomboBox"));
        SellBidcomboBox->setFont(font4);

        gridLayout_6->addWidget(SellBidcomboBox, 5, 8, 1, 1);

        SellBidPriceEdit = new QLineEdit(BuyTab);
        SellBidPriceEdit->setObjectName(QStringLiteral("SellBidPriceEdit"));
        SellBidPriceEdit->setMinimumSize(QSize(0, 0));
        SellBidPriceEdit->setFont(font5);

        gridLayout_6->addWidget(SellBidPriceEdit, 5, 9, 1, 1);

        label_16 = new QLabel(BuyTab);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_6->addWidget(label_16, 5, 10, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_23 = new QLabel(BuyTab);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font3);

        horizontalLayout_5->addWidget(label_23);

        BuyCostLabel = new QLabel(BuyTab);
        BuyCostLabel->setObjectName(QStringLiteral("BuyCostLabel"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        BuyCostLabel->setPalette(palette2);
        BuyCostLabel->setFont(font3);
        BuyCostLabel->setAutoFillBackground(false);
        BuyCostLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(BuyCostLabel);

        label_24 = new QLabel(BuyTab);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font1);

        horizontalLayout_5->addWidget(label_24);


        gridLayout_6->addLayout(horizontalLayout_5, 6, 2, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_19 = new QLabel(BuyTab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font3);

        horizontalLayout_2->addWidget(label_19);

        SellCostLabel = new QLabel(BuyTab);
        SellCostLabel->setObjectName(QStringLiteral("SellCostLabel"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        SellCostLabel->setPalette(palette3);
        SellCostLabel->setFont(font3);
        SellCostLabel->setAutoFillBackground(false);
        SellCostLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(SellCostLabel);

        label_17 = new QLabel(BuyTab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font1);

        horizontalLayout_2->addWidget(label_17);


        gridLayout_6->addLayout(horizontalLayout_2, 6, 8, 1, 2);

        BuyTX = new QPushButton(BuyTab);
        BuyTX->setObjectName(QStringLiteral("BuyTX"));

        gridLayout_6->addWidget(BuyTX, 7, 3, 1, 1);

        SellTXBTN = new QPushButton(BuyTab);
        SellTXBTN->setObjectName(QStringLiteral("SellTXBTN"));

        gridLayout_6->addWidget(SellTXBTN, 7, 9, 1, 1);

        BidsTable = new QTableWidget(BuyTab);
        BidsTable->setObjectName(QStringLiteral("BidsTable"));
        BidsTable->setMinimumSize(QSize(0, 0));
        BidsTable->setFont(font2);
        BidsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        BidsTable->setTabKeyNavigation(false);
        BidsTable->setProperty("showDropIndicator", QVariant(false));
        BidsTable->setDragEnabled(true);
        BidsTable->setDragDropOverwriteMode(false);
        BidsTable->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout_6->addWidget(BidsTable, 2, 0, 1, 6);

        BtcDemand = new QLabel(BuyTab);
        BtcDemand->setObjectName(QStringLiteral("BtcDemand"));
        BtcDemand->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(BtcDemand, 1, 3, 1, 3);

        AsksCount = new QLabel(BuyTab);
        AsksCount->setObjectName(QStringLiteral("AsksCount"));

        gridLayout_6->addWidget(AsksCount, 1, 7, 1, 2);

        BtcSupply = new QLabel(BuyTab);
        BtcSupply->setObjectName(QStringLiteral("BtcSupply"));
        BtcSupply->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(BtcSupply, 1, 9, 1, 3);

        TXDemand = new QLabel(BuyTab);
        TXDemand->setObjectName(QStringLiteral("TXDemand"));
        QFont font6;
        font6.setPointSize(8);
        TXDemand->setFont(font6);
        TXDemand->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(TXDemand, 0, 1, 1, 5);

        TXSupply = new QLabel(BuyTab);
        TXSupply->setObjectName(QStringLiteral("TXSupply"));
        TXSupply->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(TXSupply, 0, 9, 1, 3);

        BidsCount = new QLabel(BuyTab);
        BidsCount->setObjectName(QStringLiteral("BidsCount"));

        gridLayout_6->addWidget(BidsCount, 1, 0, 1, 3);

        TradingTabWidget->addTab(BuyTab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_7 = new QGridLayout(tab);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_21 = new QLabel(tab);
        label_21->setObjectName(QStringLiteral("label_21"));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        label_21->setFont(font7);

        horizontalLayout_7->addWidget(label_21);

        CSDumpLabel = new QLabel(tab);
        CSDumpLabel->setObjectName(QStringLiteral("CSDumpLabel"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        CSDumpLabel->setPalette(palette4);
        CSDumpLabel->setFont(font7);
        CSDumpLabel->setAutoFillBackground(false);
        CSDumpLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_7->addWidget(CSDumpLabel);

        label_25 = new QLabel(tab);
        label_25->setObjectName(QStringLiteral("label_25"));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(false);
        font8.setWeight(50);
        label_25->setFont(font8);

        horizontalLayout_7->addWidget(label_25);


        gridLayout_7->addLayout(horizontalLayout_7, 6, 0, 1, 3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_32 = new QLabel(tab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setFont(font7);

        horizontalLayout_6->addWidget(label_32);

        CSTotalLabel = new QLabel(tab);
        CSTotalLabel->setObjectName(QStringLiteral("CSTotalLabel"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        CSTotalLabel->setPalette(palette5);
        CSTotalLabel->setFont(font7);
        CSTotalLabel->setAutoFillBackground(false);
        CSTotalLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(CSTotalLabel);

        label_35 = new QLabel(tab);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setFont(font8);

        horizontalLayout_6->addWidget(label_35);


        gridLayout_7->addLayout(horizontalLayout_6, 7, 0, 1, 3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font7);

        horizontalLayout_9->addWidget(label_20);

        CSReceiveLabel = new QLabel(tab);
        CSReceiveLabel->setObjectName(QStringLiteral("CSReceiveLabel"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        CSReceiveLabel->setPalette(palette6);
        CSReceiveLabel->setFont(font7);
        CSReceiveLabel->setAutoFillBackground(false);
        CSReceiveLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_9->addWidget(CSReceiveLabel);

        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font8);

        horizontalLayout_9->addWidget(label_18);


        gridLayout_7->addLayout(horizontalLayout_9, 8, 0, 1, 3);

        CSUnitsBtn = new QPushButton(tab);
        CSUnitsBtn->setObjectName(QStringLiteral("CSUnitsBtn"));

        gridLayout_7->addWidget(CSUnitsBtn, 9, 2, 1, 1);

        label232_8 = new QLabel(tab);
        label232_8->setObjectName(QStringLiteral("label232_8"));
        label232_8->setFont(font8);

        gridLayout_7->addWidget(label232_8, 10, 0, 1, 1);

        label232_13 = new QLabel(tab);
        label232_13->setObjectName(QStringLiteral("label232_13"));
        label232_13->setFont(font8);

        gridLayout_7->addWidget(label232_13, 1, 0, 1, 4);

        label232_15 = new QLabel(tab);
        label232_15->setObjectName(QStringLiteral("label232_15"));
        label232_15->setFont(font8);

        gridLayout_7->addWidget(label232_15, 0, 4, 12, 1);

        label_27 = new QLabel(tab);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFont(font7);

        gridLayout_7->addWidget(label_27, 4, 0, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(212, 368, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 0, 5, 12, 1);

        CSUnitsInput = new QLineEdit(tab);
        CSUnitsInput->setObjectName(QStringLiteral("CSUnitsInput"));
        CSUnitsInput->setFont(font7);

        gridLayout_7->addWidget(CSUnitsInput, 4, 2, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font7);

        gridLayout_7->addWidget(label_8, 5, 0, 1, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_29 = new QLabel(tab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font7);

        horizontalLayout_8->addWidget(label_29);

        FuExchangeTXLabel = new QLabel(tab);
        FuExchangeTXLabel->setObjectName(QStringLiteral("FuExchangeTXLabel"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        FuExchangeTXLabel->setPalette(palette7);
        FuExchangeTXLabel->setFont(font7);
        FuExchangeTXLabel->setAutoFillBackground(false);
        FuExchangeTXLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_8->addWidget(FuExchangeTXLabel);

        label_30 = new QLabel(tab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setFont(font8);

        horizontalLayout_8->addWidget(label_30);


        gridLayout_7->addLayout(horizontalLayout_8, 3, 0, 1, 3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_36 = new QLabel(tab);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setFont(font7);

        horizontalLayout_10->addWidget(label_36);

        FuExchangeBTCLabel = new QLabel(tab);
        FuExchangeBTCLabel->setObjectName(QStringLiteral("FuExchangeBTCLabel"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        FuExchangeBTCLabel->setPalette(palette8);
        FuExchangeBTCLabel->setFont(font7);
        FuExchangeBTCLabel->setAutoFillBackground(false);
        FuExchangeBTCLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_10->addWidget(FuExchangeBTCLabel);

        label_37 = new QLabel(tab);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setFont(font8);

        horizontalLayout_10->addWidget(label_37);


        gridLayout_7->addLayout(horizontalLayout_10, 2, 0, 1, 3);

        CS_Max_Amount = new QPushButton(tab);
        CS_Max_Amount->setObjectName(QStringLiteral("CS_Max_Amount"));
        CS_Max_Amount->setFont(font4);

        gridLayout_7->addWidget(CS_Max_Amount, 4, 3, 1, 1);

        CSUnitsAddress = new QLineEdit(tab);
        CSUnitsAddress->setObjectName(QStringLiteral("CSUnitsAddress"));
        CSUnitsAddress->setFont(font7);

        gridLayout_7->addWidget(CSUnitsAddress, 5, 2, 1, 1);

        CSPasteButton = new QToolButton(tab);
        CSPasteButton->setObjectName(QStringLiteral("CSPasteButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        CSPasteButton->setIcon(icon);

        gridLayout_7->addWidget(CSPasteButton, 5, 3, 1, 1);

        label232_4 = new QLabel(tab);
        label232_4->setObjectName(QStringLiteral("label232_4"));
        QFont font9;
        font9.setPointSize(18);
        font9.setBold(true);
        font9.setWeight(75);
        label232_4->setFont(font9);
        label232_4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label232_4, 0, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(915, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 12, 0, 1, 6);

        TradingTabWidget->addTab(tab, QString());
        CSUnitsInput->raise();
        label232_4->raise();
        CSUnitsAddress->raise();
        label_8->raise();
        CSUnitsBtn->raise();
        label232_8->raise();
        label_27->raise();
        label232_13->raise();
        label232_15->raise();
        CS_Max_Amount->raise();
        CSPasteButton->raise();
        MarketHistory = new QWidget();
        MarketHistory->setObjectName(QStringLiteral("MarketHistory"));
        gridLayout_5 = new QGridLayout(MarketHistory);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        MarketHistoryTable = new QTableWidget(MarketHistory);
        MarketHistoryTable->setObjectName(QStringLiteral("MarketHistoryTable"));

        gridLayout_5->addWidget(MarketHistoryTable, 0, 0, 1, 1);

        TradingTabWidget->addTab(MarketHistory, QString());
        OpenOrders = new QWidget();
        OpenOrders->setObjectName(QStringLiteral("OpenOrders"));
        gridLayout_4 = new QGridLayout(OpenOrders);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        OpenOrdersTable = new QTableWidget(OpenOrders);
        OpenOrdersTable->setObjectName(QStringLiteral("OpenOrdersTable"));

        gridLayout_4->addWidget(OpenOrdersTable, 0, 0, 1, 1);

        TradingTabWidget->addTab(OpenOrders, QString());
        TradeHistory = new QWidget();
        TradeHistory->setObjectName(QStringLiteral("TradeHistory"));
        gridLayout_3 = new QGridLayout(TradeHistory);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        TradeHistoryTable = new QTableWidget(TradeHistory);
        TradeHistoryTable->setObjectName(QStringLiteral("TradeHistoryTable"));

        gridLayout_3->addWidget(TradeHistoryTable, 0, 0, 1, 1);

        TradingTabWidget->addTab(TradeHistory, QString());
        BalanceTab = new QWidget();
        BalanceTab->setObjectName(QStringLiteral("BalanceTab"));
        gridLayout_2 = new QGridLayout(BalanceTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_11 = new QLabel(BalanceTab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font7);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 2);

        TXBalanceLabel = new QLabel(BalanceTab);
        TXBalanceLabel->setObjectName(QStringLiteral("TXBalanceLabel"));
        TXBalanceLabel->setFont(font4);
        TXBalanceLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(TXBalanceLabel, 0, 3, 1, 1);

        label_12 = new QLabel(BalanceTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font7);

        gridLayout_2->addWidget(label_12, 0, 4, 1, 1);

        BitcoinBalanceLabel = new QLabel(BalanceTab);
        BitcoinBalanceLabel->setObjectName(QStringLiteral("BitcoinBalanceLabel"));
        BitcoinBalanceLabel->setFont(font4);
        BitcoinBalanceLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(BitcoinBalanceLabel, 0, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(478, 488, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 7, 10, 1);

        label_13 = new QLabel(BalanceTab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font7);

        gridLayout_2->addWidget(label_13, 1, 0, 1, 2);

        TXAvailableLabel_2 = new QLabel(BalanceTab);
        TXAvailableLabel_2->setObjectName(QStringLiteral("TXAvailableLabel_2"));
        TXAvailableLabel_2->setFont(font4);
        TXAvailableLabel_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(TXAvailableLabel_2, 1, 3, 1, 1);

        label_15 = new QLabel(BalanceTab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font7);

        gridLayout_2->addWidget(label_15, 1, 4, 1, 1);

        BitcoinAvailableLabel = new QLabel(BalanceTab);
        BitcoinAvailableLabel->setObjectName(QStringLiteral("BitcoinAvailableLabel"));
        BitcoinAvailableLabel->setFont(font4);
        BitcoinAvailableLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(BitcoinAvailableLabel, 1, 5, 1, 1);

        label_14 = new QLabel(BalanceTab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font7);

        gridLayout_2->addWidget(label_14, 2, 0, 1, 2);

        TXPendingLabel = new QLabel(BalanceTab);
        TXPendingLabel->setObjectName(QStringLiteral("TXPendingLabel"));
        TXPendingLabel->setFont(font4);
        TXPendingLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(TXPendingLabel, 2, 3, 1, 1);

        label_31 = new QLabel(BalanceTab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setFont(font7);

        gridLayout_2->addWidget(label_31, 2, 4, 1, 1);

        BitcoinPendingLabel = new QLabel(BalanceTab);
        BitcoinPendingLabel->setObjectName(QStringLiteral("BitcoinPendingLabel"));
        BitcoinPendingLabel->setFont(font4);
        BitcoinPendingLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(BitcoinPendingLabel, 2, 5, 1, 1);

        GenDepositBTN = new QPushButton(BalanceTab);
        GenDepositBTN->setObjectName(QStringLiteral("GenDepositBTN"));
        GenDepositBTN->setFont(font4);

        gridLayout_2->addWidget(GenDepositBTN, 3, 0, 1, 4);

        label_33 = new QLabel(BalanceTab);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setFont(font7);

        gridLayout_2->addWidget(label_33, 4, 0, 1, 3);

        DepositAddressLabel = new QLabel(BalanceTab);
        DepositAddressLabel->setObjectName(QStringLiteral("DepositAddressLabel"));
        DepositAddressLabel->setMinimumSize(QSize(300, 0));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(0, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        QBrush brush10(QColor(120, 120, 120, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        DepositAddressLabel->setPalette(palette9);
        DepositAddressLabel->setFont(font7);
        DepositAddressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DepositAddressLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(DepositAddressLabel, 4, 3, 1, 3);

        DepositCopyButton = new QToolButton(BalanceTab);
        DepositCopyButton->setObjectName(QStringLiteral("DepositCopyButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        DepositCopyButton->setIcon(icon1);

        gridLayout_2->addWidget(DepositCopyButton, 4, 6, 1, 1);

        label_34 = new QLabel(BalanceTab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setFont(font7);

        gridLayout_2->addWidget(label_34, 5, 0, 1, 2);

        label_26 = new QLabel(BalanceTab);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font7);

        gridLayout_2->addWidget(label_26, 6, 0, 1, 1);

        WithdrawUnitsInput = new QLineEdit(BalanceTab);
        WithdrawUnitsInput->setObjectName(QStringLiteral("WithdrawUnitsInput"));
        WithdrawUnitsInput->setFont(font5);

        gridLayout_2->addWidget(WithdrawUnitsInput, 6, 1, 1, 3);

        Withdraw_Max_Amount = new QPushButton(BalanceTab);
        Withdraw_Max_Amount->setObjectName(QStringLiteral("Withdraw_Max_Amount"));
        Withdraw_Max_Amount->setFont(font4);

        gridLayout_2->addWidget(Withdraw_Max_Amount, 6, 4, 1, 1);

        label_10 = new QLabel(BalanceTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font7);

        gridLayout_2->addWidget(label_10, 7, 0, 1, 1);

        WithdrawAddress = new QLineEdit(BalanceTab);
        WithdrawAddress->setObjectName(QStringLiteral("WithdrawAddress"));
        WithdrawAddress->setFont(font5);

        gridLayout_2->addWidget(WithdrawAddress, 7, 1, 1, 3);

        WithdrawPasteButton = new QToolButton(BalanceTab);
        WithdrawPasteButton->setObjectName(QStringLiteral("WithdrawPasteButton"));
        WithdrawPasteButton->setIcon(icon);

        gridLayout_2->addWidget(WithdrawPasteButton, 7, 4, 1, 1);

        WithdrawUnitsBtn = new QPushButton(BalanceTab);
        WithdrawUnitsBtn->setObjectName(QStringLiteral("WithdrawUnitsBtn"));
        WithdrawUnitsBtn->setFont(font4);

        gridLayout_2->addWidget(WithdrawUnitsBtn, 8, 2, 1, 2);

        verticalSpacer = new QSpacerItem(428, 262, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 0, 1, 6);

        TradingTabWidget->addTab(BalanceTab, QString());
        label_31->raise();
        label_15->raise();
        label_12->raise();
        label_14->raise();
        label_13->raise();
        label_11->raise();
        BitcoinBalanceLabel->raise();
        TXBalanceLabel->raise();
        TXAvailableLabel_2->raise();
        TXPendingLabel->raise();
        BitcoinAvailableLabel->raise();
        BitcoinPendingLabel->raise();
        label_33->raise();
        GenDepositBTN->raise();
        DepositAddressLabel->raise();
        Withdraw_Max_Amount->raise();
        label_34->raise();
        WithdrawUnitsInput->raise();
        label_10->raise();
        label_26->raise();
        WithdrawAddress->raise();
        WithdrawUnitsBtn->raise();
        WithdrawPasteButton->raise();
        DepositCopyButton->raise();
        ApiSettings = new QWidget();
        ApiSettings->setObjectName(QStringLiteral("ApiSettings"));
        gridLayout = new QGridLayout(ApiSettings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(ApiSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font3);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        ApiKeyInput = new QLineEdit(ApiSettings);
        ApiKeyInput->setObjectName(QStringLiteral("ApiKeyInput"));

        gridLayout->addWidget(ApiKeyInput, 0, 1, 1, 3);

        KeyPasteButton = new QToolButton(ApiSettings);
        KeyPasteButton->setObjectName(QStringLiteral("KeyPasteButton"));
        KeyPasteButton->setIcon(icon);

        gridLayout->addWidget(KeyPasteButton, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(519, 488, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 5, 6, 1);

        label = new QLabel(ApiSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font3);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        SecretKeyInput = new QLineEdit(ApiSettings);
        SecretKeyInput->setObjectName(QStringLiteral("SecretKeyInput"));

        gridLayout->addWidget(SecretKeyInput, 1, 1, 1, 3);

        SecretPasteButton = new QToolButton(ApiSettings);
        SecretPasteButton->setObjectName(QStringLiteral("SecretPasteButton"));
        SecretPasteButton->setIcon(icon);

        gridLayout->addWidget(SecretPasteButton, 1, 4, 1, 1);

        label_28 = new QLabel(ApiSettings);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font3);

        gridLayout->addWidget(label_28, 2, 0, 1, 1);

        PasswordInput = new QLineEdit(ApiSettings);
        PasswordInput->setObjectName(QStringLiteral("PasswordInput"));
        PasswordInput->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(PasswordInput, 2, 1, 1, 3);

        LoadKeys = new QPushButton(ApiSettings);
        LoadKeys->setObjectName(QStringLiteral("LoadKeys"));
        LoadKeys->setMinimumSize(QSize(115, 0));

        gridLayout->addWidget(LoadKeys, 3, 0, 1, 1);

        UpdateKeys = new QPushButton(ApiSettings);
        UpdateKeys->setObjectName(QStringLiteral("UpdateKeys"));
        UpdateKeys->setMinimumSize(QSize(125, 0));

        gridLayout->addWidget(UpdateKeys, 3, 1, 1, 2);

        SaveKeys = new QPushButton(ApiSettings);
        SaveKeys->setObjectName(QStringLiteral("SaveKeys"));
        SaveKeys->setMinimumSize(QSize(115, 0));

        gridLayout->addWidget(SaveKeys, 3, 3, 1, 2);

        verticalSpacer_2 = new QSpacerItem(358, 247, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 5);

        label232_17 = new QLabel(ApiSettings);
        label232_17->setObjectName(QStringLiteral("label232_17"));
        label232_17->setFont(font8);
        label232_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label232_17, 4, 3, 1, 2);

        label232_16 = new QLabel(ApiSettings);
        label232_16->setObjectName(QStringLiteral("label232_16"));
        label232_16->setFont(font8);

        gridLayout->addWidget(label232_16, 4, 0, 1, 3);

        TradingTabWidget->addTab(ApiSettings, QString());
        label->raise();
        ApiKeyInput->raise();
        label_2->raise();
        SecretKeyInput->raise();
        UpdateKeys->raise();
        SaveKeys->raise();
        LoadKeys->raise();
        label232_16->raise();
        label232_17->raise();
        label_28->raise();
        PasswordInput->raise();
        KeyPasteButton->raise();
        SecretPasteButton->raise();

        verticalLayout->addWidget(TradingTabWidget);


        retranslateUi(tradingDialog);

        TradingTabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(tradingDialog);
    } // setupUi

    void retranslateUi(QDialog *tradingDialog)
    {
        tradingDialog->setWindowTitle(QApplication::translate("tradingDialog", "Dialog", 0));
        Bid->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        volumet->setText(QApplication::translate("tradingDialog", "0.000000000", 0));
        Ask->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        volumebtc->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        label_3->setText(QApplication::translate("tradingDialog", "Units", 0));
        label232->setText(QApplication::translate("tradingDialog", "BTC Available:", 0));
        BtcAvailableLabel->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        labelBTC->setText(QApplication::translate("tradingDialog", "BTC", 0));
        label232_2->setText(QApplication::translate("tradingDialog", "SPD Available:", 0));
        TXAvailableLabel->setText(QApplication::translate("tradingDialog", " 0.00000000 ", 0));
        labelTX->setText(QApplication::translate("tradingDialog", " SPD", 0));
        Buy_Max_Amount->setText(QApplication::translate("tradingDialog", "Max", 0));
        label_4->setText(QApplication::translate("tradingDialog", "SPD", 0));
        Sell_Max_Amount->setText(QApplication::translate("tradingDialog", "Max", 0));
        label_22->setText(QApplication::translate("tradingDialog", "SPD", 0));
        label_6->setText(QApplication::translate("tradingDialog", "Bid", 0));
        label_5->setText(QApplication::translate("tradingDialog", "BTC", 0));
        label_16->setText(QApplication::translate("tradingDialog", "BTC", 0));
        label_23->setText(QApplication::translate("tradingDialog", "Total w/ 0.25% Fee ", 0));
        BuyCostLabel->setText(QApplication::translate("tradingDialog", " 0.00000000", 0));
        label_24->setText(QApplication::translate("tradingDialog", " BTC", 0));
        label_19->setText(QApplication::translate("tradingDialog", "Total w/ 0.25% Fee ", 0));
        SellCostLabel->setText(QApplication::translate("tradingDialog", " 0.00000000", 0));
        label_17->setText(QApplication::translate("tradingDialog", " BTC", 0));
        BuyTX->setText(QApplication::translate("tradingDialog", "Buy SPD", 0));
        SellTXBTN->setText(QApplication::translate("tradingDialog", "Sell SPD", 0));
        BtcDemand->setText(QApplication::translate("tradingDialog", "0.00000000 BTC", 0));
        AsksCount->setText(QApplication::translate("tradingDialog", "Asks: 0000", 0));
        BtcSupply->setText(QApplication::translate("tradingDialog", "0.00000000 BTC", 0));
        TXDemand->setText(QApplication::translate("tradingDialog", "Demand: 0.00000000 SPD", 0));
        TXSupply->setText(QApplication::translate("tradingDialog", "Supply: 0.00000000 SPD", 0));
        BidsCount->setText(QApplication::translate("tradingDialog", "Bids: 0000", 0));
        TradingTabWidget->setTabText(TradingTabWidget->indexOf(BuyTab), QApplication::translate("tradingDialog", "Trade", 0));
        label_21->setText(QApplication::translate("tradingDialog", "Lowest price:", 0));
        CSDumpLabel->setText(QApplication::translate("tradingDialog", " 0.00000000", 0));
        label_25->setText(QApplication::translate("tradingDialog", "BTC", 0));
        label_32->setText(QApplication::translate("tradingDialog", "Amount in SPD:", 0));
        CSTotalLabel->setText(QApplication::translate("tradingDialog", " 0.00000000", 0));
        label_35->setText(QApplication::translate("tradingDialog", "SPD", 0));
        label_20->setText(QApplication::translate("tradingDialog", "Total w/ Fees :", 0));
        CSReceiveLabel->setText(QApplication::translate("tradingDialog", " 0.00000000", 0));
        label_18->setText(QApplication::translate("tradingDialog", "BTC", 0));
        CSUnitsBtn->setText(QApplication::translate("tradingDialog", "Send", 0));
        label232_8->setText(QString());
        label232_13->setText(QApplication::translate("tradingDialog", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">Warning:</span><span style=\" font-size:9pt;\"> This feature is in </span><span style=\" font-size:9pt; font-weight:600;\">ALPHA ! USE AT OWN RISK !</span></p></body></html>", 0));
        label232_15->setText(QApplication::translate("tradingDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; text-decoration: underline;\">Instructions:</span></p><p align=\"center\">To use the cross sending feature you need to have </p><p align=\"center\">SPD available to spend on FuExchange. If you don't have any </p><p align=\"center\">you can find your deposit address on the &quot;Balance&quot; tab.</p><p align=\"center\">1. Enter the amount you want to receive in Bitcoin.</p><p align=\"center\">2. Enter the Bitcoin address you are sending to.</p><p align=\"center\">3. Check that the Total with fee's is correct.</p><p align=\"center\">4. Press send and watch the magic happen.</p><p align=\"center\"><span style=\" font-weight:600; text-decoration: underline;\">Notes.</span></p><p align=\"center\"><span style=\" font-size:7pt;\">Total w/ fees: N/A means you dont have enoughSPDto sell !</span></p><p align=\"center\"><span style=\" font-size:7pt;\">All trades are done through FuExchange using your own balance and API keys.</span></p><p align=\"cen"
                        "ter\"><span style=\" font-size:7pt;\">Encrypt and backup your wallet when using this feature.</span></p><p align=\"center\"><span style=\" font-size:7pt;\">If you don't have a password you future-exchange account will be accessible 24/7</span></p><p align=\"center\"><span style=\" font-size:7pt;\">Withdrawal fee of 0.002 and 0.25% taken by FuExchange.</span></p></body></html>", 0));
        label_27->setText(QApplication::translate("tradingDialog", "Amount:", 0));
        label_8->setText(QApplication::translate("tradingDialog", "Address:", 0));
        label_29->setText(QApplication::translate("tradingDialog", "SPD Balance:", 0));
        FuExchangeTXLabel->setText(QApplication::translate("tradingDialog", " 0.00000000", 0));
        label_30->setText(QApplication::translate("tradingDialog", "SPD", 0));
        label_36->setText(QApplication::translate("tradingDialog", "BTC Balance:", 0));
        FuExchangeBTCLabel->setText(QApplication::translate("tradingDialog", " 0.00000000", 0));
        label_37->setText(QApplication::translate("tradingDialog", "BTC", 0));
        CS_Max_Amount->setText(QApplication::translate("tradingDialog", "Max", 0));
#ifndef QT_NO_TOOLTIP
        CSPasteButton->setToolTip(QApplication::translate("tradingDialog", "Paste from clipboard", 0));
#endif // QT_NO_TOOLTIP
        CSPasteButton->setText(QString());
        CSPasteButton->setShortcut(QApplication::translate("tradingDialog", "Alt+P", 0));
        label232_4->setText(QApplication::translate("tradingDialog", "Cross-Send", 0));
        TradingTabWidget->setTabText(TradingTabWidget->indexOf(tab), QApplication::translate("tradingDialog", "Send", 0));
        TradingTabWidget->setTabText(TradingTabWidget->indexOf(MarketHistory), QApplication::translate("tradingDialog", "Market History", 0));
        TradingTabWidget->setTabText(TradingTabWidget->indexOf(OpenOrders), QApplication::translate("tradingDialog", "Open Orders", 0));
        TradingTabWidget->setTabText(TradingTabWidget->indexOf(TradeHistory), QApplication::translate("tradingDialog", "Trade history", 0));
        label_11->setText(QApplication::translate("tradingDialog", "SPD Balance:", 0));
        TXBalanceLabel->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        label_12->setText(QApplication::translate("tradingDialog", "BTC Balance:", 0));
        BitcoinBalanceLabel->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        label_13->setText(QApplication::translate("tradingDialog", "SPD Available:", 0));
        TXAvailableLabel_2->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        label_15->setText(QApplication::translate("tradingDialog", "BTC Available:", 0));
        BitcoinAvailableLabel->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        label_14->setText(QApplication::translate("tradingDialog", "SPD Pending:", 0));
        TXPendingLabel->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        label_31->setText(QApplication::translate("tradingDialog", "BTC Pending:", 0));
        BitcoinPendingLabel->setText(QApplication::translate("tradingDialog", "0.00000000", 0));
        GenDepositBTN->setText(QApplication::translate("tradingDialog", "GenerateSPDCoin Deposit Address", 0));
        label_33->setText(QApplication::translate("tradingDialog", "Deposit Address:", 0));
        DepositAddressLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        DepositCopyButton->setToolTip(QApplication::translate("tradingDialog", "Copy to clipboard", 0));
#endif // QT_NO_TOOLTIP
        DepositCopyButton->setText(QString());
        DepositCopyButton->setShortcut(QApplication::translate("tradingDialog", "Alt+P", 0));
        label_34->setText(QApplication::translate("tradingDialog", "Withdraw SPD:", 0));
        label_26->setText(QApplication::translate("tradingDialog", "Amount:", 0));
        WithdrawUnitsInput->setText(QString());
        Withdraw_Max_Amount->setText(QApplication::translate("tradingDialog", "Max", 0));
        label_10->setText(QApplication::translate("tradingDialog", "Address:", 0));
#ifndef QT_NO_TOOLTIP
        WithdrawPasteButton->setToolTip(QApplication::translate("tradingDialog", "Paste from clipboard", 0));
#endif // QT_NO_TOOLTIP
        WithdrawPasteButton->setText(QString());
        WithdrawPasteButton->setShortcut(QApplication::translate("tradingDialog", "Alt+P", 0));
        WithdrawUnitsBtn->setText(QApplication::translate("tradingDialog", "Withdraw", 0));
        TradingTabWidget->setTabText(TradingTabWidget->indexOf(BalanceTab), QApplication::translate("tradingDialog", "Balance", 0));
        label_2->setText(QApplication::translate("tradingDialog", "API Key", 0));
        ApiKeyInput->setText(QString());
#ifndef QT_NO_TOOLTIP
        KeyPasteButton->setToolTip(QApplication::translate("tradingDialog", "Paste from clipboard", 0));
#endif // QT_NO_TOOLTIP
        KeyPasteButton->setText(QString());
        KeyPasteButton->setShortcut(QApplication::translate("tradingDialog", "Alt+P", 0));
        label->setText(QApplication::translate("tradingDialog", "Secret Key", 0));
#ifndef QT_NO_TOOLTIP
        SecretPasteButton->setToolTip(QApplication::translate("tradingDialog", "Paste from clipboard", 0));
#endif // QT_NO_TOOLTIP
        SecretPasteButton->setText(QString());
        SecretPasteButton->setShortcut(QApplication::translate("tradingDialog", "Alt+P", 0));
        label_28->setText(QApplication::translate("tradingDialog", "Password", 0));
        LoadKeys->setText(QApplication::translate("tradingDialog", "Load API Keys", 0));
        UpdateKeys->setText(QApplication::translate("tradingDialog", "Update API Keys", 0));
        SaveKeys->setText(QApplication::translate("tradingDialog", "Save API Keys", 0));
        label232_17->setText(QApplication::translate("tradingDialog", "<html><head/><body><p>Loading keys:</p><p>1) Enter Password</p><p>2) Load API Keys</p><p>3) Start trading on FuExchange</p></body></html>", 0));
        label232_16->setText(QApplication::translate("tradingDialog", "<html><head/><body><p>Saving keys:</p><p>1) Enter in API Keys found at <a href=\"https://future-exchange.com/Account/ManageApiKey\"><span style=\" text-decoration: underline; color:#0000ff;\">FuExchange</span></a></p><p>2) Enter Password</p><p>3) Save API Keys</p><p>4) Start trading on FuExchange</p></body></html>", 0));
        TradingTabWidget->setTabText(TradingTabWidget->indexOf(ApiSettings), QApplication::translate("tradingDialog", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class tradingDialog: public Ui_tradingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADINGDIALOG_H
