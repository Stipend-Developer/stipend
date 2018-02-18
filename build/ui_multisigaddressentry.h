/********************************************************************************
** Form generated from reading UI file 'multisigaddressentry.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISIGADDRESSENTRY_H
#define UI_MULTISIGADDRESSENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_MultisigAddressEntry
{
public:
    QGridLayout *gridLayout;
    QLabel *pubkeyLabel;
    QHBoxLayout *pubkeyLayout;
    QValidatedLineEdit *pubkey;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QLabel *addressLabel;
    QHBoxLayout *addressLayout;
    QValidatedLineEdit *address;
    QToolButton *addressBookButton;
    QLabel *labelLabel;
    QValidatedLineEdit *label;

    void setupUi(QFrame *MultisigAddressEntry)
    {
        if (MultisigAddressEntry->objectName().isEmpty())
            MultisigAddressEntry->setObjectName(QStringLiteral("MultisigAddressEntry"));
        MultisigAddressEntry->resize(729, 136);
        MultisigAddressEntry->setFrameShape(QFrame::StyledPanel);
        MultisigAddressEntry->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(MultisigAddressEntry);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pubkeyLabel = new QLabel(MultisigAddressEntry);
        pubkeyLabel->setObjectName(QStringLiteral("pubkeyLabel"));
        pubkeyLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(pubkeyLabel, 0, 0, 1, 1);

        pubkeyLayout = new QHBoxLayout();
        pubkeyLayout->setSpacing(0);
        pubkeyLayout->setObjectName(QStringLiteral("pubkeyLayout"));
        pubkey = new QValidatedLineEdit(MultisigAddressEntry);
        pubkey->setObjectName(QStringLiteral("pubkey"));

        pubkeyLayout->addWidget(pubkey);

        pasteButton = new QToolButton(MultisigAddressEntry);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon);

        pubkeyLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(MultisigAddressEntry);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon1);

        pubkeyLayout->addWidget(deleteButton);


        gridLayout->addLayout(pubkeyLayout, 0, 1, 1, 1);

        addressLabel = new QLabel(MultisigAddressEntry);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(addressLabel, 1, 0, 1, 1);

        addressLayout = new QHBoxLayout();
        addressLayout->setSpacing(0);
        addressLayout->setObjectName(QStringLiteral("addressLayout"));
        address = new QValidatedLineEdit(MultisigAddressEntry);
        address->setObjectName(QStringLiteral("address"));
        address->setEnabled(true);

        addressLayout->addWidget(address);

        addressBookButton = new QToolButton(MultisigAddressEntry);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon2);

        addressLayout->addWidget(addressBookButton);


        gridLayout->addLayout(addressLayout, 1, 1, 1, 1);

        labelLabel = new QLabel(MultisigAddressEntry);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));
        labelLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLabel, 2, 0, 1, 1);

        label = new QValidatedLineEdit(MultisigAddressEntry);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setReadOnly(true);

        gridLayout->addWidget(label, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        pubkeyLabel->setBuddy(pubkey);
        addressLabel->setBuddy(address);
#endif // QT_NO_SHORTCUT

        retranslateUi(MultisigAddressEntry);

        QMetaObject::connectSlotsByName(MultisigAddressEntry);
    } // setupUi

    void retranslateUi(QFrame *MultisigAddressEntry)
    {
        MultisigAddressEntry->setWindowTitle(QApplication::translate("MultisigAddressEntry", "Form", 0));
        pubkeyLabel->setText(QApplication::translate("MultisigAddressEntry", "Public &key:", 0));
#ifndef QT_NO_TOOLTIP
        pubkey->setToolTip(QApplication::translate("MultisigAddressEntry", "The public key of an address", 0));
#endif // QT_NO_TOOLTIP
        pubkey->setPlaceholderText(QApplication::translate("MultisigAddressEntry", "Enter a public key", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("MultisigAddressEntry", "Paste public key from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("MultisigAddressEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("MultisigAddressEntry", "Remove this public key", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        addressLabel->setText(QApplication::translate("MultisigAddressEntry", "&Address:", 0));
#ifndef QT_NO_TOOLTIP
        address->setToolTip(QApplication::translate("MultisigAddressEntry", "Address associated to the public key", 0));
#endif // QT_NO_TOOLTIP
        address->setPlaceholderText(QApplication::translate("MultisigAddressEntry", "Enter one of your addresses to get its public key", 0));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("MultisigAddressEntry", "Choose address from address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("MultisigAddressEntry", "Alt+A", 0));
        labelLabel->setText(QApplication::translate("MultisigAddressEntry", "Label:", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MultisigAddressEntry", "Address associated to the public key", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MultisigAddressEntry: public Ui_MultisigAddressEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISIGADDRESSENTRY_H
