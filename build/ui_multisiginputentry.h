/********************************************************************************
** Form generated from reading UI file 'multisiginputentry.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISIGINPUTENTRY_H
#define UI_MULTISIGINPUTENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_MultisigInputEntry
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *transactionIdLayout;
    QValidatedLineEdit *transactionId;
    QToolButton *pasteTransactionIdButton;
    QToolButton *deleteButton;
    QLabel *transactionIdLabel;
    QLabel *transactionOutputLabel;
    QLabel *redeemScriptLabel;
    QHBoxLayout *redeemScriptLayout;
    QValidatedLineEdit *redeemScript;
    QToolButton *pasteRedeemScriptButton;
    QComboBox *transactionOutput;

    void setupUi(QFrame *MultisigInputEntry)
    {
        if (MultisigInputEntry->objectName().isEmpty())
            MultisigInputEntry->setObjectName(QStringLiteral("MultisigInputEntry"));
        MultisigInputEntry->resize(729, 136);
        MultisigInputEntry->setFrameShape(QFrame::StyledPanel);
        MultisigInputEntry->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(MultisigInputEntry);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        transactionIdLayout = new QHBoxLayout();
        transactionIdLayout->setSpacing(0);
        transactionIdLayout->setObjectName(QStringLiteral("transactionIdLayout"));
        transactionId = new QValidatedLineEdit(MultisigInputEntry);
        transactionId->setObjectName(QStringLiteral("transactionId"));

        transactionIdLayout->addWidget(transactionId);

        pasteTransactionIdButton = new QToolButton(MultisigInputEntry);
        pasteTransactionIdButton->setObjectName(QStringLiteral("pasteTransactionIdButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteTransactionIdButton->setIcon(icon);

        transactionIdLayout->addWidget(pasteTransactionIdButton);

        deleteButton = new QToolButton(MultisigInputEntry);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon1);

        transactionIdLayout->addWidget(deleteButton);


        gridLayout->addLayout(transactionIdLayout, 0, 1, 1, 1);

        transactionIdLabel = new QLabel(MultisigInputEntry);
        transactionIdLabel->setObjectName(QStringLiteral("transactionIdLabel"));
        transactionIdLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(transactionIdLabel, 0, 0, 1, 1);

        transactionOutputLabel = new QLabel(MultisigInputEntry);
        transactionOutputLabel->setObjectName(QStringLiteral("transactionOutputLabel"));
        transactionOutputLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(transactionOutputLabel, 2, 0, 1, 1);

        redeemScriptLabel = new QLabel(MultisigInputEntry);
        redeemScriptLabel->setObjectName(QStringLiteral("redeemScriptLabel"));
        redeemScriptLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(redeemScriptLabel, 3, 0, 1, 1);

        redeemScriptLayout = new QHBoxLayout();
        redeemScriptLayout->setSpacing(0);
        redeemScriptLayout->setObjectName(QStringLiteral("redeemScriptLayout"));
        redeemScript = new QValidatedLineEdit(MultisigInputEntry);
        redeemScript->setObjectName(QStringLiteral("redeemScript"));
        redeemScript->setEnabled(true);

        redeemScriptLayout->addWidget(redeemScript);

        pasteRedeemScriptButton = new QToolButton(MultisigInputEntry);
        pasteRedeemScriptButton->setObjectName(QStringLiteral("pasteRedeemScriptButton"));
        pasteRedeemScriptButton->setIcon(icon);

        redeemScriptLayout->addWidget(pasteRedeemScriptButton);


        gridLayout->addLayout(redeemScriptLayout, 3, 1, 1, 1);

        transactionOutput = new QComboBox(MultisigInputEntry);
        transactionOutput->setObjectName(QStringLiteral("transactionOutput"));

        gridLayout->addWidget(transactionOutput, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        transactionIdLabel->setBuddy(transactionId);
        redeemScriptLabel->setBuddy(redeemScript);
#endif // QT_NO_SHORTCUT

        retranslateUi(MultisigInputEntry);

        QMetaObject::connectSlotsByName(MultisigInputEntry);
    } // setupUi

    void retranslateUi(QFrame *MultisigInputEntry)
    {
        MultisigInputEntry->setWindowTitle(QApplication::translate("MultisigInputEntry", "Form", 0));
#ifndef QT_NO_TOOLTIP
        transactionId->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        transactionId->setPlaceholderText(QApplication::translate("MultisigInputEntry", "Enter a transaction id", 0));
#ifndef QT_NO_TOOLTIP
        pasteTransactionIdButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pasteTransactionIdButton->setText(QString());
        pasteTransactionIdButton->setShortcut(QApplication::translate("MultisigInputEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        transactionIdLabel->setText(QApplication::translate("MultisigInputEntry", "Transaction id:", 0));
        transactionOutputLabel->setText(QApplication::translate("MultisigInputEntry", "Transaction output:", 0));
        redeemScriptLabel->setText(QApplication::translate("MultisigInputEntry", "Redeem script:", 0));
#ifndef QT_NO_TOOLTIP
        redeemScript->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        redeemScript->setPlaceholderText(QApplication::translate("MultisigInputEntry", "Enter the redeem script of the address in the transaction output", 0));
#ifndef QT_NO_TOOLTIP
        pasteRedeemScriptButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pasteRedeemScriptButton->setText(QString());
        pasteRedeemScriptButton->setShortcut(QApplication::translate("MultisigInputEntry", "Alt+A", 0));
    } // retranslateUi

};

namespace Ui {
    class MultisigInputEntry: public Ui_MultisigInputEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISIGINPUTENTRY_H
