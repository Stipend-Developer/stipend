/********************************************************************************
** Form generated from reading UI file 'adrenalinenodeconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADRENALINENODECONFIGDIALOG_H
#define UI_ADRENALINENODECONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdrenalineNodeConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *detailText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AdrenalineNodeConfigDialog)
    {
        if (AdrenalineNodeConfigDialog->objectName().isEmpty())
            AdrenalineNodeConfigDialog->setObjectName(QStringLiteral("AdrenalineNodeConfigDialog"));
        AdrenalineNodeConfigDialog->resize(620, 250);
        verticalLayout = new QVBoxLayout(AdrenalineNodeConfigDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        detailText = new QTextEdit(AdrenalineNodeConfigDialog);
        detailText->setObjectName(QStringLiteral("detailText"));
        detailText->setReadOnly(true);

        verticalLayout->addWidget(detailText);

        buttonBox = new QDialogButtonBox(AdrenalineNodeConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AdrenalineNodeConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AdrenalineNodeConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AdrenalineNodeConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AdrenalineNodeConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *AdrenalineNodeConfigDialog)
    {
        AdrenalineNodeConfigDialog->setWindowTitle(QApplication::translate("AdrenalineNodeConfigDialog", "Master Node Configuration Template", 0));
#ifndef QT_NO_TOOLTIP
        detailText->setToolTip(QApplication::translate("AdrenalineNodeConfigDialog", "<html><head/><body><p>This pane shows an example stipend.conf template with the necessary masternode settings.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class AdrenalineNodeConfigDialog: public Ui_AdrenalineNodeConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADRENALINENODECONFIGDIALOG_H
