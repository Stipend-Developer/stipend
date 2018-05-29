/********************************************************************************
** Form generated from reading UI file 'messagepage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEPAGE_H
#define UI_MESSAGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mrichtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_MessagePage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *labelExplanation;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QGroupBox *messageDetails;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *backButton;
    QLabel *labelContact;
    QLabel *contactLabel;
    QSpacerItem *horizontalSpacer_3;
    QListView *listConversation;
    QVBoxLayout *verticalLayout_3;
    MRichTextEdit *messageEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *newButton;
    QPushButton *sendButton;
    QPushButton *copyFromAddressButton;
    QPushButton *copyToAddressButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MessagePage)
    {
        if (MessagePage->objectName().isEmpty())
            MessagePage->setObjectName(QStringLiteral("MessagePage"));
        MessagePage->resize(793, 419);
        verticalLayout_2 = new QVBoxLayout(MessagePage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelExplanation = new QLabel(MessagePage);
        labelExplanation->setObjectName(QStringLiteral("labelExplanation"));
        labelExplanation->setTextFormat(Qt::PlainText);
        labelExplanation->setWordWrap(true);

        verticalLayout_2->addWidget(labelExplanation);

        tableView = new QTableView(MessagePage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setTabKeyNavigation(false);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        messageDetails = new QGroupBox(MessagePage);
        messageDetails->setObjectName(QStringLiteral("messageDetails"));
        verticalLayout_4 = new QVBoxLayout(messageDetails);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 6, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        backButton = new QPushButton(messageDetails);
        backButton->setObjectName(QStringLiteral("backButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/quit"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);

        horizontalLayout_3->addWidget(backButton);

        labelContact = new QLabel(messageDetails);
        labelContact->setObjectName(QStringLiteral("labelContact"));

        horizontalLayout_3->addWidget(labelContact);

        contactLabel = new QLabel(messageDetails);
        contactLabel->setObjectName(QStringLiteral("contactLabel"));

        horizontalLayout_3->addWidget(contactLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        listConversation = new QListView(messageDetails);
        listConversation->setObjectName(QStringLiteral("listConversation"));
        listConversation->setStyleSheet(QStringLiteral("#listConversation { color: #000000; }"));

        verticalLayout_4->addWidget(listConversation);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout->addWidget(messageDetails);

        messageEdit = new MRichTextEdit(MessagePage);
        messageEdit->setObjectName(QStringLiteral("messageEdit"));
        messageEdit->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(messageEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newButton = new QPushButton(MessagePage);
        newButton->setObjectName(QStringLiteral("newButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        newButton->setIcon(icon1);

        horizontalLayout->addWidget(newButton);

        sendButton = new QPushButton(MessagePage);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon2);

        horizontalLayout->addWidget(sendButton);

        copyFromAddressButton = new QPushButton(MessagePage);
        copyFromAddressButton->setObjectName(QStringLiteral("copyFromAddressButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        copyFromAddressButton->setIcon(icon3);

        horizontalLayout->addWidget(copyFromAddressButton);

        copyToAddressButton = new QPushButton(MessagePage);
        copyToAddressButton->setObjectName(QStringLiteral("copyToAddressButton"));
        copyToAddressButton->setIcon(icon3);

        horizontalLayout->addWidget(copyToAddressButton);

        deleteButton = new QPushButton(MessagePage);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon4);

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MessagePage);

        QMetaObject::connectSlotsByName(MessagePage);
    } // setupUi

    void retranslateUi(QWidget *MessagePage)
    {
        MessagePage->setWindowTitle(QApplication::translate("MessagePage", "Address Book", 0));
        labelExplanation->setText(QApplication::translate("MessagePage", "These are your sent and received encrypted messages. Click on an item to read it.", 0));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("MessagePage", "Click on a message to view it", 0));
#endif // QT_NO_TOOLTIP
        messageDetails->setTitle(QString());
        backButton->setText(QApplication::translate("MessagePage", "&Back", 0));
        labelContact->setText(QApplication::translate("MessagePage", "Contact:", 0));
        contactLabel->setText(QString());
        newButton->setText(QApplication::translate("MessagePage", "&Conversation", 0));
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("MessagePage", "Sign a message to prove you own a Stipend address", 0));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("MessagePage", "&Send", 0));
#ifndef QT_NO_TOOLTIP
        copyFromAddressButton->setToolTip(QApplication::translate("MessagePage", "Copy the currently selected address to the system clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyFromAddressButton->setText(QApplication::translate("MessagePage", "&Copy From Address", 0));
#ifndef QT_NO_TOOLTIP
        copyToAddressButton->setToolTip(QApplication::translate("MessagePage", "Copy the currently selected address to the system clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyToAddressButton->setText(QApplication::translate("MessagePage", "Copy To &Address", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("MessagePage", "Delete the currently selected address from the list", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("MessagePage", "&Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class MessagePage: public Ui_MessagePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEPAGE_H
