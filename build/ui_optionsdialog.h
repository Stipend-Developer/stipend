/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"
#include "qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMain;
    QGridLayout *gridLayout;
    QSpinBox *anonymizeStipend;
    QHBoxLayout *horizontalLayoutReserveBalance;
    QLabel *reserveBalanceLabel;
    BitcoinAmountField *reserveBalance;
    QSpacerItem *horizontalSpacerReserveBalance;
    QLabel *reserveBalanceInfoLabel;
    QLabel *transactionFeeInfoLabel;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayoutFee;
    QLabel *transactionFeeLabel;
    BitcoinAmountField *transactionFee;
    QSpacerItem *horizontalSpacerFee;
    QSpacerItem *verticalSpacer_Main;
    QCheckBox *bitcoinAtStartup;
    QHBoxLayout *horizontalLayoutStakeThreshold;
    QLabel *StakeThresholdLabel;
    QSpinBox *stakeThreshold;
    QSpacerItem *horizontalSpacerStakeThreshold;
    QSpinBox *darksendRounds;
    QLabel *label_3;
    QWidget *tabNetwork;
    QVBoxLayout *verticalLayout_Network;
    QCheckBox *mapPortUpnp;
    QCheckBox *connectSocks;
    QHBoxLayout *horizontalLayout_Network;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QSpacerItem *horizontalSpacer_Network;
    QSpacerItem *verticalSpacer_Network;
    QWidget *tabWindow;
    QVBoxLayout *verticalLayout_Window;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QSpacerItem *verticalSpacer_Window;
    QWidget *tabDisplay;
    QVBoxLayout *verticalLayout_Display;
    QHBoxLayout *horizontalLayout_1_Display;
    QLabel *langLabel;
    QValueComboBox *lang;
    QHBoxLayout *horizontalLayout_2_Display;
    QLabel *unitLabel;
    QValueComboBox *unit;
    QCheckBox *coinControlFeatures;
    QCheckBox *useBlackTheme;
    QSpacerItem *verticalSpacer_Display;
    QHBoxLayout *horizontalLayout_Buttons;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *applyButton;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QStringLiteral("OptionsDialog"));
        OptionsDialog->resize(540, 438);
        OptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(OptionsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabMain = new QWidget();
        tabMain->setObjectName(QStringLiteral("tabMain"));
        gridLayout = new QGridLayout(tabMain);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        anonymizeStipend = new QSpinBox(tabMain);
        anonymizeStipend->setObjectName(QStringLiteral("anonymizeStipend"));
        anonymizeStipend->setMinimum(2);
        anonymizeStipend->setMaximum(10000);
        anonymizeStipend->setSingleStep(10);
        anonymizeStipend->setValue(1000);

        gridLayout->addWidget(anonymizeStipend, 9, 1, 1, 1);

        horizontalLayoutReserveBalance = new QHBoxLayout();
        horizontalLayoutReserveBalance->setObjectName(QStringLiteral("horizontalLayoutReserveBalance"));
        reserveBalanceLabel = new QLabel(tabMain);
        reserveBalanceLabel->setObjectName(QStringLiteral("reserveBalanceLabel"));
        reserveBalanceLabel->setTextFormat(Qt::PlainText);

        horizontalLayoutReserveBalance->addWidget(reserveBalanceLabel);

        reserveBalance = new BitcoinAmountField(tabMain);
        reserveBalance->setObjectName(QStringLiteral("reserveBalance"));

        horizontalLayoutReserveBalance->addWidget(reserveBalance);

        horizontalSpacerReserveBalance = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutReserveBalance->addItem(horizontalSpacerReserveBalance);


        gridLayout->addLayout(horizontalLayoutReserveBalance, 3, 0, 1, 1);

        reserveBalanceInfoLabel = new QLabel(tabMain);
        reserveBalanceInfoLabel->setObjectName(QStringLiteral("reserveBalanceInfoLabel"));
        reserveBalanceInfoLabel->setTextFormat(Qt::PlainText);
        reserveBalanceInfoLabel->setWordWrap(true);

        gridLayout->addWidget(reserveBalanceInfoLabel, 2, 0, 1, 2);

        transactionFeeInfoLabel = new QLabel(tabMain);
        transactionFeeInfoLabel->setObjectName(QStringLiteral("transactionFeeInfoLabel"));
        transactionFeeInfoLabel->setTextFormat(Qt::PlainText);
        transactionFeeInfoLabel->setWordWrap(true);

        gridLayout->addWidget(transactionFeeInfoLabel, 0, 0, 1, 2);

        label = new QLabel(tabMain);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 8, 0, 1, 1);

        label_2 = new QLabel(tabMain);
        label_2->setObjectName(QStringLiteral("label_2"));
#ifndef QT_NO_STATUSTIP
        label_2->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        label_2->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY

        gridLayout->addWidget(label_2, 9, 0, 1, 1);

        horizontalLayoutFee = new QHBoxLayout();
        horizontalLayoutFee->setObjectName(QStringLiteral("horizontalLayoutFee"));
        transactionFeeLabel = new QLabel(tabMain);
        transactionFeeLabel->setObjectName(QStringLiteral("transactionFeeLabel"));
        transactionFeeLabel->setTextFormat(Qt::PlainText);

        horizontalLayoutFee->addWidget(transactionFeeLabel);

        transactionFee = new BitcoinAmountField(tabMain);
        transactionFee->setObjectName(QStringLiteral("transactionFee"));

        horizontalLayoutFee->addWidget(transactionFee);

        horizontalSpacerFee = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee->addItem(horizontalSpacerFee);


        gridLayout->addLayout(horizontalLayoutFee, 1, 0, 1, 1);

        verticalSpacer_Main = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_Main, 7, 0, 1, 1);

        bitcoinAtStartup = new QCheckBox(tabMain);
        bitcoinAtStartup->setObjectName(QStringLiteral("bitcoinAtStartup"));

        gridLayout->addWidget(bitcoinAtStartup, 4, 0, 1, 1);

        horizontalLayoutStakeThreshold = new QHBoxLayout();
        horizontalLayoutStakeThreshold->setObjectName(QStringLiteral("horizontalLayoutStakeThreshold"));
        StakeThresholdLabel = new QLabel(tabMain);
        StakeThresholdLabel->setObjectName(QStringLiteral("StakeThresholdLabel"));

        horizontalLayoutStakeThreshold->addWidget(StakeThresholdLabel);

        stakeThreshold = new QSpinBox(tabMain);
        stakeThreshold->setObjectName(QStringLiteral("stakeThreshold"));
        stakeThreshold->setMinimum(100);
        stakeThreshold->setMaximum(100000);
        stakeThreshold->setValue(100);

        horizontalLayoutStakeThreshold->addWidget(stakeThreshold);

        horizontalSpacerStakeThreshold = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutStakeThreshold->addItem(horizontalSpacerStakeThreshold);


        gridLayout->addLayout(horizontalLayoutStakeThreshold, 6, 0, 1, 1);

        darksendRounds = new QSpinBox(tabMain);
        darksendRounds->setObjectName(QStringLiteral("darksendRounds"));
        darksendRounds->setMinimum(2);
        darksendRounds->setMaximum(16);
        darksendRounds->setValue(3);

        gridLayout->addWidget(darksendRounds, 8, 1, 1, 1);

        label_3 = new QLabel(tabMain);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        tabWidget->addTab(tabMain, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName(QStringLiteral("tabNetwork"));
        verticalLayout_Network = new QVBoxLayout(tabNetwork);
        verticalLayout_Network->setObjectName(QStringLiteral("verticalLayout_Network"));
        mapPortUpnp = new QCheckBox(tabNetwork);
        mapPortUpnp->setObjectName(QStringLiteral("mapPortUpnp"));

        verticalLayout_Network->addWidget(mapPortUpnp);

        connectSocks = new QCheckBox(tabNetwork);
        connectSocks->setObjectName(QStringLiteral("connectSocks"));

        verticalLayout_Network->addWidget(connectSocks);

        horizontalLayout_Network = new QHBoxLayout();
        horizontalLayout_Network->setObjectName(QStringLiteral("horizontalLayout_Network"));
        proxyIpLabel = new QLabel(tabNetwork);
        proxyIpLabel->setObjectName(QStringLiteral("proxyIpLabel"));
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Network->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(tabNetwork);
        proxyIp->setObjectName(QStringLiteral("proxyIp"));
        proxyIp->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_Network->addWidget(proxyIp);

        proxyPortLabel = new QLabel(tabNetwork);
        proxyPortLabel->setObjectName(QStringLiteral("proxyPortLabel"));
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Network->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(tabNetwork);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        proxyPort->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_Network->addWidget(proxyPort);

        horizontalSpacer_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Network->addItem(horizontalSpacer_Network);


        verticalLayout_Network->addLayout(horizontalLayout_Network);

        verticalSpacer_Network = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Network->addItem(verticalSpacer_Network);

        tabWidget->addTab(tabNetwork, QString());
        tabWindow = new QWidget();
        tabWindow->setObjectName(QStringLiteral("tabWindow"));
        verticalLayout_Window = new QVBoxLayout(tabWindow);
        verticalLayout_Window->setObjectName(QStringLiteral("verticalLayout_Window"));
        minimizeToTray = new QCheckBox(tabWindow);
        minimizeToTray->setObjectName(QStringLiteral("minimizeToTray"));

        verticalLayout_Window->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(tabWindow);
        minimizeOnClose->setObjectName(QStringLiteral("minimizeOnClose"));

        verticalLayout_Window->addWidget(minimizeOnClose);

        verticalSpacer_Window = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Window->addItem(verticalSpacer_Window);

        tabWidget->addTab(tabWindow, QString());
        tabDisplay = new QWidget();
        tabDisplay->setObjectName(QStringLiteral("tabDisplay"));
        verticalLayout_Display = new QVBoxLayout(tabDisplay);
        verticalLayout_Display->setObjectName(QStringLiteral("verticalLayout_Display"));
        horizontalLayout_1_Display = new QHBoxLayout();
        horizontalLayout_1_Display->setObjectName(QStringLiteral("horizontalLayout_1_Display"));
        langLabel = new QLabel(tabDisplay);
        langLabel->setObjectName(QStringLiteral("langLabel"));
        langLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Display->addWidget(langLabel);

        lang = new QValueComboBox(tabDisplay);
        lang->setObjectName(QStringLiteral("lang"));

        horizontalLayout_1_Display->addWidget(lang);


        verticalLayout_Display->addLayout(horizontalLayout_1_Display);

        horizontalLayout_2_Display = new QHBoxLayout();
        horizontalLayout_2_Display->setObjectName(QStringLiteral("horizontalLayout_2_Display"));
        unitLabel = new QLabel(tabDisplay);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));
        unitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Display->addWidget(unitLabel);

        unit = new QValueComboBox(tabDisplay);
        unit->setObjectName(QStringLiteral("unit"));

        horizontalLayout_2_Display->addWidget(unit);


        verticalLayout_Display->addLayout(horizontalLayout_2_Display);

        coinControlFeatures = new QCheckBox(tabDisplay);
        coinControlFeatures->setObjectName(QStringLiteral("coinControlFeatures"));

        verticalLayout_Display->addWidget(coinControlFeatures);

        useBlackTheme = new QCheckBox(tabDisplay);
        useBlackTheme->setObjectName(QStringLiteral("useBlackTheme"));

        verticalLayout_Display->addWidget(useBlackTheme);

        verticalSpacer_Display = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Display->addItem(verticalSpacer_Display);

        tabWidget->addTab(tabDisplay, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QStringLiteral("horizontalLayout_Buttons"));
        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(OptionsDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        statusLabel->setFont(font);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_2);

        okButton = new QPushButton(OptionsDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(OptionsDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);

        applyButton = new QPushButton(OptionsDialog);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);

#ifndef QT_NO_SHORTCUT
        reserveBalanceLabel->setBuddy(reserveBalance);
        transactionFeeLabel->setBuddy(transactionFee);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        langLabel->setBuddy(lang);
        unitLabel->setBuddy(unit);
#endif // QT_NO_SHORTCUT

        retranslateUi(OptionsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Options", Q_NULLPTR));
        reserveBalanceLabel->setText(QApplication::translate("OptionsDialog", "Reserve", Q_NULLPTR));
        reserveBalanceInfoLabel->setText(QApplication::translate("OptionsDialog", "Reserved amount does not participate in staking and is therefore spendable at any time.", Q_NULLPTR));
        transactionFeeInfoLabel->setText(QApplication::translate("OptionsDialog", "Optional transaction fee per kB that helps make sure your transactions are processed quickly. Most transactions are 1 kB. Fee 0.01 recommended.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("OptionsDialog", "<html><head/><body><p>This setting determines the amount of individual masternodes that an input will be anonymized through. More rounds of anonymization gives a higher degree of privacy, but also costs more in fees.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OptionsDialog", "Darksend rounds to use", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("OptionsDialog", "This amount acts as a threshold to turn off Darksend once it's reached.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("OptionsDialog", "Amount of Stipend to keep anonymized", Q_NULLPTR));
        transactionFeeLabel->setText(QApplication::translate("OptionsDialog", "Pay transaction &fee", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        bitcoinAtStartup->setToolTip(QApplication::translate("OptionsDialog", "Automatically start Stipend after logging in to the system.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        bitcoinAtStartup->setText(QApplication::translate("OptionsDialog", "&Start Stipend on system login", Q_NULLPTR));
        StakeThresholdLabel->setText(QApplication::translate("OptionsDialog", "StakeThreshold", Q_NULLPTR));
        label_3->setText(QApplication::translate("OptionsDialog", "This will set the output size of your stakes.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabMain), QApplication::translate("OptionsDialog", "&Main", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mapPortUpnp->setToolTip(QApplication::translate("OptionsDialog", "Automatically open the Stipend client port on the router. This only works when your router supports UPnP and it is enabled.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mapPortUpnp->setText(QApplication::translate("OptionsDialog", "Map port using &UPnP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        connectSocks->setToolTip(QApplication::translate("OptionsDialog", "Connect to the Stipend network through a SOCKS5 proxy (e.g. when connecting through Tor).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        connectSocks->setText(QApplication::translate("OptionsDialog", "&Connect through SOCKS5 proxy:", Q_NULLPTR));
        proxyIpLabel->setText(QApplication::translate("OptionsDialog", "Proxy &IP:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyIp->setToolTip(QApplication::translate("OptionsDialog", "IP address of the proxy (e.g. 127.0.0.1)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        proxyPortLabel->setText(QApplication::translate("OptionsDialog", "&Port:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyPort->setToolTip(QApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabNetwork), QApplication::translate("OptionsDialog", "&Network", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minimizeToTray->setToolTip(QApplication::translate("OptionsDialog", "Show only a tray icon after minimizing the window.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        minimizeToTray->setText(QApplication::translate("OptionsDialog", "&Minimize to the tray instead of the taskbar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minimizeOnClose->setToolTip(QApplication::translate("OptionsDialog", "Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Quit in the menu.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        minimizeOnClose->setText(QApplication::translate("OptionsDialog", "M&inimize on close", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabWindow), QApplication::translate("OptionsDialog", "&Window", Q_NULLPTR));
        langLabel->setText(QApplication::translate("OptionsDialog", "User Interface &language:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lang->setToolTip(QApplication::translate("OptionsDialog", "The user interface language can be set here. This setting will take effect after restarting Stipend.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        unitLabel->setText(QApplication::translate("OptionsDialog", "&Unit to show amounts in:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        unit->setToolTip(QApplication::translate("OptionsDialog", "Choose the default subdivision unit to show in the interface and when sending coins.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        coinControlFeatures->setToolTip(QApplication::translate("OptionsDialog", "Whether to show coin control features or not.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        coinControlFeatures->setText(QApplication::translate("OptionsDialog", "Display coin &control features (experts only!)", Q_NULLPTR));
        useBlackTheme->setText(QApplication::translate("OptionsDialog", "Use black visual theme (requires restart)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabDisplay), QApplication::translate("OptionsDialog", "&Display", Q_NULLPTR));
        statusLabel->setText(QString());
        okButton->setText(QApplication::translate("OptionsDialog", "&OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("OptionsDialog", "&Cancel", Q_NULLPTR));
        applyButton->setText(QApplication::translate("OptionsDialog", "&Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
