#include "masternodemanager.h"
#include "ui_masternodemanager.h"
#include "addeditadrenalinenode.h"
#include "adrenalinenodeconfigdialog.h"

#include "main/init.h"
#include "clientmodel.h"
#include "walletmodel.h"
#include "misc/sync.h"

#include "masternode/activemasternode.h"
#include "masternode/masternodeconfig.h"
#include "masternode/masternodeman.h"
#include "masternode/masternode.h"

#include "wallet/walletdb.h"
#include "wallet/wallet.h"
#include "rpc/rpcserver.h"

#include <boost/lexical_cast.hpp>
#include <fstream>
using namespace json_spirit;
using namespace std;

#include <QAbstractItemDelegate>
#include <QPainter>
#include <QTimer>
#include <QDebug>
#include <QScrollArea>
#include <QScroller>
#include <QDateTime>
#include <QApplication>
#include <QClipboard>
#include <QMessageBox>
#include <QThread>
#include <QtConcurrent/QtConcurrent>
#include <QScrollBar>

// We keep track of the last error against each masternode and use them if available
// to provide additional feedback to user.
std::map<std::string, std::string> lastMasternodeErrors;
void setLastMasternodeError(const std::string& masternode, std::string error)
{
    lastMasternodeErrors[masternode] = error;
}
void getLastMasternodeError(const std::string& masternode, std::string& error)
{
    std::map<std::string, std::string>::iterator it = lastMasternodeErrors.find(masternode);
    if (it != lastMasternodeErrors.end()){
        error = (*it).second;
    }
}


MasternodeManager::MasternodeManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MasternodeManager),
    clientModel(0),
    walletModel(0)
{
    ui->setupUi(this);

    ui->editButton->setEnabled(false);
    ui->startButton->setEnabled(false);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    timer = new QTimer(this);
    if(!GetBoolArg("-reindexaddr", false))
        timer->start(1000);
    fFilterUpdated = true;
	nTimeFilterUpdated = GetTime();
}

MasternodeManager::~MasternodeManager()
{
    delete ui;
}

void MasternodeManager::on_tableWidget_2_itemSelectionChanged()
{
    if(ui->tableWidget_2->selectedItems().count() > 0)
    {
        ui->editButton->setEnabled(true);
        ui->startButton->setEnabled(true);
    }
}

void MasternodeManager::updateAdrenalineNode(QString alias, QString addr, QString privkey, QString txHash, QString txIndex, QString donationAddress, QString donationPercentage, QString status)
{
    LOCK(cs_adrenaline);
    bool bFound = false;
    int nodeRow = 0;
    for(int i=0; i < ui->tableWidget_2->rowCount(); i++)
    {
        if(ui->tableWidget_2->item(i, 0)->text() == alias)
        {
            bFound = true;
            nodeRow = i;
            break;
        }
    }

    if(nodeRow == 0 && !bFound)
        ui->tableWidget_2->insertRow(0);

    QTableWidgetItem *aliasItem = new QTableWidgetItem(alias);
    QTableWidgetItem *addrItem = new QTableWidgetItem(addr);
    QTableWidgetItem *donationAddressItem = new QTableWidgetItem(donationAddress);
    QTableWidgetItem *donationPercentageItem = new QTableWidgetItem(donationPercentage);
    QTableWidgetItem *statusItem = new QTableWidgetItem(status);

    ui->tableWidget_2->setItem(nodeRow, 0, aliasItem);
    ui->tableWidget_2->setItem(nodeRow, 1, addrItem);
    ui->tableWidget_2->setItem(nodeRow, 2, donationPercentageItem);
    ui->tableWidget_2->setItem(nodeRow, 3, donationAddressItem);
    ui->tableWidget_2->setItem(nodeRow, 4, statusItem);
}

static QString seconds_to_DHMS(quint32 duration)
{
  QString res;
  int seconds = (int) (duration % 60);
  duration /= 60;
  int minutes = (int) (duration % 60);
  duration /= 60;
  int hours = (int) (duration % 24);
  int days = (int) (duration / 24);
  if((hours == 0)&&(days == 0))
      return res.sprintf("%02dm:%02ds", minutes, seconds);
  if (days == 0)
      return res.sprintf("%02dh:%02dm:%02ds", hours, minutes, seconds);
  return res.sprintf("%dd %02dh:%02dm:%02ds", days, hours, minutes, seconds);
}

void MasternodeManager::setClientModel(ClientModel *model)
{
    this->clientModel = model;
    if(model)
    {
    }
}

void MasternodeManager::setWalletModel(WalletModel *model)
{
    this->walletModel = model;
    if(model && model->getOptionsModel())
    {
    }

}

void MasternodeManager::on_createButton_clicked()
{
    AddEditAdrenalineNode* aenode = new AddEditAdrenalineNode();
    aenode->exec();
}

void MasternodeManager::on_startButton_clicked()
{
    // start the node
    QItemSelectionModel* selectionModel = ui->tableWidget_2->selectionModel();
    QModelIndexList selected = selectionModel->selectedRows();
    if(selected.count() == 0)
        return;

    QModelIndex index = selected.at(0);
    int r = index.row();
    std::string sAlias = ui->tableWidget_2->item(r, 0)->text().toStdString();



    if(pwalletMain->IsLocked()) {
    }

    std::string statusObj;
    statusObj += "<center>Alias: " + sAlias;

    BOOST_FOREACH(CMasternodeConfig::CMasternodeEntry mne, masternodeConfig.getEntries()) {
        if(mne.getAlias() == sAlias) {
            std::string errorMessage;
            std::string strDonateAddress = mne.getDonationAddress();
            std::string strDonationPercentage = mne.getDonationPercentage();

            bool result = activeMasternode.Register(mne.getIp(), mne.getPrivKey(), mne.getTxHash(), mne.getOutputIndex(), strDonateAddress, strDonationPercentage, errorMessage);
            setLastMasternodeError(mne.getTxHash() +  mne.getOutputIndex(), errorMessage);

            if(result) {
                statusObj += "<br>Successfully started masternode." ;
            } else {
                statusObj += "<br>Failed to start masternode.<br>Error: " + errorMessage;
            }
            break;
        }
    }
    statusObj += "</center>";
    pwalletMain->Lock();

    QMessageBox msg;
    msg.setText(QString::fromStdString(statusObj));

    msg.exec();

    on_UpdateButton_clicked();
}

void MasternodeManager::on_startAllButton_clicked()
{
    if(pwalletMain->IsLocked()) {
    }

    std::vector<CMasternodeConfig::CMasternodeEntry> mnEntries;

    int total = 0;
    int successful = 0;
    int fail = 0;
    std::string statusObj;

    BOOST_FOREACH(CMasternodeConfig::CMasternodeEntry mne, masternodeConfig.getEntries()) {
        total++;

        std::string errorMessage;
        std::string strDonateAddress = mne.getDonationAddress();
        std::string strDonationPercentage = mne.getDonationPercentage();

        bool result = activeMasternode.Register(mne.getIp(), mne.getPrivKey(), mne.getTxHash(), mne.getOutputIndex(), strDonateAddress, strDonationPercentage, errorMessage);
        setLastMasternodeError(mne.getTxHash() +  mne.getOutputIndex(), errorMessage);

        if(result) {
            successful++;
        } else {
            fail++;
            statusObj += "\nFailed to start " + mne.getAlias() + ". Error: " + errorMessage;
        }
    }
    pwalletMain->Lock();

    std::string returnObj;
    returnObj = "Successfully started " + boost::lexical_cast<std::string>(successful) + " masternodes, failed to start " +
            boost::lexical_cast<std::string>(fail) + ", total " + boost::lexical_cast<std::string>(total);
    if (fail > 0)
        returnObj += statusObj;

    QMessageBox msg;
    msg.setText(QString::fromStdString(returnObj));
    msg.exec();

    on_UpdateButton_clicked();
}

void MasternodeManager::on_UpdateButton_clicked()
{
    BOOST_FOREACH(CMasternodeConfig::CMasternodeEntry mne, masternodeConfig.getEntries()) {
        std::string errorMessage;
        std::string strDonateAddress = mne.getDonationAddress();
        std::string strDonationPercentage = mne.getDonationPercentage();

        std::vector<CMasternode> vMasternodes = mnodeman.GetFullMasternodeVector();

        getLastMasternodeError(mne.getTxHash() +  mne.getOutputIndex(), errorMessage);

        // If an error is available we use it. Otherwise we print the update text as we are searching for the MN in the Stipend network.
        if (errorMessage == ""){
            updateAdrenalineNode(QString::fromStdString(mne.getAlias()), QString::fromStdString(mne.getIp()), QString::fromStdString(mne.getPrivKey()), QString::fromStdString(mne.getTxHash()),
                QString::fromStdString(mne.getOutputIndex()), QString::fromStdString(strDonateAddress), QString::fromStdString(strDonationPercentage), QString::fromStdString("Updating Network List."));
        }
        else {
            updateAdrenalineNode(QString::fromStdString(mne.getAlias()), QString::fromStdString(mne.getIp()), QString::fromStdString(mne.getPrivKey()), QString::fromStdString(mne.getTxHash()),
                QString::fromStdString(mne.getOutputIndex()), QString::fromStdString(strDonateAddress), QString::fromStdString(strDonationPercentage), QString::fromStdString(errorMessage));
        }

        BOOST_FOREACH(CMasternode& mn, vMasternodes) {
            if (mn.addr.ToString().c_str() == mne.getIp()){
                updateAdrenalineNode(QString::fromStdString(mne.getAlias()), QString::fromStdString(mne.getIp()), QString::fromStdString(mne.getPrivKey()), QString::fromStdString(mne.getTxHash()),
                QString::fromStdString(mne.getOutputIndex()), QString::fromStdString(strDonateAddress), QString::fromStdString(strDonationPercentage), QString::fromStdString("Masternode is Running."));
            }
        }
    }
}
