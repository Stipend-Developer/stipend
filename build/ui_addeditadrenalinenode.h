/********************************************************************************
** Form generated from reading UI file 'addeditadrenalinenode.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITADRENALINENODE_H
#define UI_ADDEDITADRENALINENODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditAdrenalineNode
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *aliasLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *privkeyLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txhashLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *outputindexLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *donationaddressLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *donationpercentageLineEdit;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddEditAdrenalineNode)
    {
        if (AddEditAdrenalineNode->objectName().isEmpty())
            AddEditAdrenalineNode->setObjectName(QStringLiteral("AddEditAdrenalineNode"));
        AddEditAdrenalineNode->resize(331, 387);
        AddEditAdrenalineNode->setModal(true);
        verticalLayout = new QVBoxLayout(AddEditAdrenalineNode);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_9 = new QLabel(AddEditAdrenalineNode);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setWordWrap(true);

        verticalLayout->addWidget(label_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        label_4 = new QLabel(AddEditAdrenalineNode);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        aliasLineEdit = new QLineEdit(AddEditAdrenalineNode);
        aliasLineEdit->setObjectName(QStringLiteral("aliasLineEdit"));

        horizontalLayout_4->addWidget(aliasLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        label_6 = new QLabel(AddEditAdrenalineNode);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        addressLineEdit = new QLineEdit(AddEditAdrenalineNode);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));

        horizontalLayout_5->addWidget(addressLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_5 = new QLabel(AddEditAdrenalineNode);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        privkeyLineEdit = new QLineEdit(AddEditAdrenalineNode);
        privkeyLineEdit->setObjectName(QStringLiteral("privkeyLineEdit"));

        horizontalLayout_3->addWidget(privkeyLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(AddEditAdrenalineNode);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txhashLineEdit = new QLineEdit(AddEditAdrenalineNode);
        txhashLineEdit->setObjectName(QStringLiteral("txhashLineEdit"));

        horizontalLayout_2->addWidget(txhashLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 0);
        label_8 = new QLabel(AddEditAdrenalineNode);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        outputindexLineEdit = new QLineEdit(AddEditAdrenalineNode);
        outputindexLineEdit->setObjectName(QStringLiteral("outputindexLineEdit"));

        horizontalLayout_8->addWidget(outputindexLineEdit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        label_3 = new QLabel(AddEditAdrenalineNode);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        donationaddressLineEdit = new QLineEdit(AddEditAdrenalineNode);
        donationaddressLineEdit->setObjectName(QStringLiteral("donationaddressLineEdit"));

        horizontalLayout_6->addWidget(donationaddressLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 0);
        label_7 = new QLabel(AddEditAdrenalineNode);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        donationpercentageLineEdit = new QLineEdit(AddEditAdrenalineNode);
        donationpercentageLineEdit->setObjectName(QStringLiteral("donationpercentageLineEdit"));

        horizontalLayout_7->addWidget(donationpercentageLineEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QStringLiteral("horizontalLayout_Buttons"));
        okButton = new QPushButton(AddEditAdrenalineNode);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(AddEditAdrenalineNode);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);


        retranslateUi(AddEditAdrenalineNode);

        QMetaObject::connectSlotsByName(AddEditAdrenalineNode);
    } // setupUi

    void retranslateUi(QDialog *AddEditAdrenalineNode)
    {
        AddEditAdrenalineNode->setWindowTitle(QApplication::translate("AddEditAdrenalineNode", "Add/Edit Stipend Node", 0));
        label_9->setText(QApplication::translate("AddEditAdrenalineNode", "<html><head/><body><p>Enter an Alias (friendly name) for your Master Node and its address (either clearnet IP and port or Tor onion address and port). The address should be in the format 123.456.789.123:9999 or akjdsafxjkhasdf.onion:9999. You must send exactly 5000 SPD to the collateral address.</p></body></html>", 0));
        label_4->setText(QApplication::translate("AddEditAdrenalineNode", "Alias*", 0));
        label_6->setText(QApplication::translate("AddEditAdrenalineNode", "Address*", 0));
        label_5->setText(QApplication::translate("AddEditAdrenalineNode", "PrivKey*", 0));
        label_2->setText(QApplication::translate("AddEditAdrenalineNode", "TxHash*", 0));
        label_8->setText(QApplication::translate("AddEditAdrenalineNode", "Output Index*", 0));
        label_3->setText(QApplication::translate("AddEditAdrenalineNode", "Donation Address", 0));
        label_7->setText(QApplication::translate("AddEditAdrenalineNode", "Donation %", 0));
        okButton->setText(QApplication::translate("AddEditAdrenalineNode", "&OK", 0));
        cancelButton->setText(QApplication::translate("AddEditAdrenalineNode", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddEditAdrenalineNode: public Ui_AddEditAdrenalineNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITADRENALINENODE_H
