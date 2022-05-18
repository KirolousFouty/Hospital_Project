#include "rechargebalancewindow.h"
#include "ui_rechargebalancewindow.h"

rechargeBalanceWindow::rechargeBalanceWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rechargeBalanceWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
}

rechargeBalanceWindow::~rechargeBalanceWindow()
{
    delete ui;
}






void rechargeBalanceWindow::on_backButton_clicked()
{
    this->close();
}


void rechargeBalanceWindow::on_depositButton_clicked()
{
    if (ui->amountDisplay->text() == ""){
        ui->balanceStatusDisplay->setText("Balance Status: Please enter an amount.");
        return;
    }

    QString abc = "abcdefghijklmnopqrstuvwxyz~!@#$%^&*()-_=+";
        QString qs = ui->amountDisplay->text();

        for (int i = 0; i < qs.length(); i++){
            for (int j = 0; j < abc.length(); j++){
                if (abc[j] == qs[i]){

                    ui->balanceStatusDisplay->setText("Please enter only numbers.");
                    ui->amountDisplay->setText("");
                    return;
                }
            }
        }

    this->p->setBalance(this->p->getBalance() + ui->amountDisplay->text().toDouble());
        ui->currentBalanceDisplay->setText("$" + QString::number(this->p->getBalance()));
        ui->amountDisplay->setText("");
    ui->balanceStatusDisplay->setText("Balance Status: $" + ui->amountDisplay->text() + " deposited successfully!");
}


void rechargeBalanceWindow::on_withdrawButton_clicked()
{
    if (ui->amountDisplay->text() == ""){
        ui->balanceStatusDisplay->setText("Balance Status: Please enter an amount.");
        return;
    }

    QString abc = "abcdefghijklmnopqrstuvwxyz~!@#$%^&*()-_=+";
        QString qs = ui->amountDisplay->text();

        for (int i = 0; i < qs.length(); i++){
            for (int j = 0; j < abc.length(); j++){
                if (abc[j] == qs[i]){

                    ui->balanceStatusDisplay->setText("Please enter only numbers.");
                    ui->amountDisplay->setText("");
                    return;
                }
            }
        }


    this->p->setBalance(this->p->getBalance() - ui->amountDisplay->text().toDouble());
        ui->currentBalanceDisplay->setText("$" + QString::number(this->p->getBalance()));
        ui->amountDisplay->setText("");
    ui->balanceStatusDisplay->setText("Balance Status: $" + ui->amountDisplay->text() + " withdrawn successfully!");
}

void rechargeBalanceWindow::on_showCurrentButton_clicked()
{
    ui->currentBalanceDisplay->setText("$" + QString::number(this->p->getBalance()));
}

