/********************************************************************************
** Form generated from reading UI file 'addressbookpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKPAGE_H
#define UI_ADDRESSBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelExplanation;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *newAddressButton;
    QPushButton *copyToClipboard;
    QPushButton *showQRCode;
    QPushButton *signMessage;
    QPushButton *verifyMessage;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *AddressBookPage)
    {
        if (AddressBookPage->objectName().isEmpty())
            AddressBookPage->setObjectName(QStringLiteral("AddressBookPage"));
        AddressBookPage->resize(760, 380);
        verticalLayout = new QVBoxLayout(AddressBookPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelExplanation = new QLabel(AddressBookPage);
        labelExplanation->setObjectName(QStringLiteral("labelExplanation"));
        labelExplanation->setTextFormat(Qt::PlainText);
        labelExplanation->setWordWrap(true);

        verticalLayout->addWidget(labelExplanation);

        tableView = new QTableView(AddressBookPage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setTabKeyNavigation(false);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newAddressButton = new QPushButton(AddressBookPage);
        newAddressButton->setObjectName(QStringLiteral("newAddressButton"));

        horizontalLayout->addWidget(newAddressButton);

        copyToClipboard = new QPushButton(AddressBookPage);
        copyToClipboard->setObjectName(QStringLiteral("copyToClipboard"));

        horizontalLayout->addWidget(copyToClipboard);

        showQRCode = new QPushButton(AddressBookPage);
        showQRCode->setObjectName(QStringLiteral("showQRCode"));

        horizontalLayout->addWidget(showQRCode);

        signMessage = new QPushButton(AddressBookPage);
        signMessage->setObjectName(QStringLiteral("signMessage"));

        horizontalLayout->addWidget(signMessage);

        verifyMessage = new QPushButton(AddressBookPage);
        verifyMessage->setObjectName(QStringLiteral("verifyMessage"));

        horizontalLayout->addWidget(verifyMessage);

        deleteButton = new QPushButton(AddressBookPage);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(AddressBookPage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookPage);

        QMetaObject::connectSlotsByName(AddressBookPage);
    } // setupUi

    void retranslateUi(QWidget *AddressBookPage)
    {
        AddressBookPage->setWindowTitle(QApplication::translate("AddressBookPage", "Address Book", 0));
        labelExplanation->setText(QApplication::translate("AddressBookPage", "These are your Stipend addresses for receiving payments. You may want to give a different one to each sender so you can keep track of who is paying you.", 0));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("AddressBookPage", "Double-click to edit address or label", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        newAddressButton->setToolTip(QApplication::translate("AddressBookPage", "Create a new address", 0));
#endif // QT_NO_TOOLTIP
        newAddressButton->setText(QApplication::translate("AddressBookPage", "&New Address", 0));
#ifndef QT_NO_TOOLTIP
        copyToClipboard->setToolTip(QApplication::translate("AddressBookPage", "Copy the currently selected address to the system clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyToClipboard->setText(QApplication::translate("AddressBookPage", "&Copy Address", 0));
        showQRCode->setText(QApplication::translate("AddressBookPage", "Show &QR Code", 0));
#ifndef QT_NO_TOOLTIP
        signMessage->setToolTip(QApplication::translate("AddressBookPage", "Sign a message to prove you own a Stipend address", 0));
#endif // QT_NO_TOOLTIP
        signMessage->setText(QApplication::translate("AddressBookPage", "Sign &Message", 0));
#ifndef QT_NO_TOOLTIP
        verifyMessage->setToolTip(QApplication::translate("AddressBookPage", "Verify a message to ensure it was signed with a specified Stipend address", 0));
#endif // QT_NO_TOOLTIP
        verifyMessage->setText(QApplication::translate("AddressBookPage", "&Verify Message", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("AddressBookPage", "Delete the currently selected address from the list", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("AddressBookPage", "&Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class AddressBookPage: public Ui_AddressBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKPAGE_H
