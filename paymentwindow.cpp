#include "paymentwindow.h"
#include "ui_paymentwindow.h"

PaymentWindow::PaymentWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PaymentWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->arrDoc = new QVector<Doctor>;
    this->isPaymentSuccessfull = new bool;
    *isPaymentSuccessfull = false;
    isDone = false;

}

PaymentWindow::~PaymentWindow()
{
    delete ui;
}

void PaymentWindow::on_showCurrentDataButton_clicked()
{
    if (this->p->getLoggedIn() == false)
    {
        QMessageBox::about(this, "Error", "Please log in first");
    }
    else
    {
        ui->amountDueDisplay->setText("$" + QString::number(this->p->getAmountDue()));
        ui->currentBalanceDisplay->setText("$" + QString::number(this->p->getBalance()));
        ui->pointsDisplay->setText(QString::number(this->p->getPoints()));        
    }
}


void PaymentWindow::on_backButton_clicked()
{
    this->close();
}


void PaymentWindow::on_payButton_clicked()
{

    if (!(ui->balanceRadioButton->isChecked() || ui->cashRadioButton->isChecked() || ui->creditRadioButton->isChecked())){
        ui->paymentStatus->setText("Payment Status: Please select a payment method!");
        return;
    }


if (this->isDone == false){
    if(ui->balanceRadioButton->isChecked()){
        if (this->p->getBalance() < this->p->getAmountDue())
        {
            ui->paymentStatus->setText("Payment Status: Failed! Insufficient balance.");
            return;
        }
        else{

        paymentsLogFile.open("paymentsLogFile.txt", ios::app);

        if (paymentsLogFile.is_open()){

            QString txt = "";
            txt = txt + "   Service: Appointment";
            txt = txt + "   Doctor Name: " + this->docName;
            txt = txt + "   Patient Name: " + this->p->getName();
            txt = txt + "   Appointment Time: " + this->appTime;
            txt = txt + "   Payment Time: " + __TIMESTAMP__;
            txt = txt + "   Amount: $" + QString::number(this->p->getAmountDue());
            txt = txt + "   Discount By Points: $" + QString::number(this->p->getPoints());
            txt = txt + "   Payment Method: Balance";



            paymentsLogFile << txt.toStdString() << '\n';
            paymentsLogFile.close();

        }


        this->p->setBalance(this->p->getBalance() - this->p->getAmountDue() + this->p->getPoints()); // Accumulative non-decreasing points system
        this->p->setAmountDue(0);
        this->p->setPoints(this->p->getPoints() + 10);

        ui->amountDueDisplay->setText("$" + QString::number(this->p->getAmountDue()));
        ui->currentBalanceDisplay->setText("$" + QString::number(this->p->getBalance()));
        ui->pointsDisplay->setText(QString::number(this->p->getPoints()));


        *this->isPaymentSuccessfull = true;
        this->isDone = true;
        ui->paymentStatus->setText("Payment Status: Payment made successfully by Balance!");

        }



    } else if(ui->cashRadioButton->isChecked()){

        paymentsLogFile.open("paymentsLogFile.txt", ios::app);

        if (paymentsLogFile.is_open()){

            QString txt = "";
            txt = txt + "   Service: Appointment";
            txt = txt + "   Doctor Name: " + this->docName;
            txt = txt + "   Patient Name: " + this->p->getName();
            txt = txt + "   Appointment Time: " + this->appTime;
            txt = txt + "   Payment Time: " + __TIMESTAMP__;
            txt = txt + "   Amount: $" + QString::number(this->p->getAmountDue());
            txt = txt + "   Discount By Points: $" + QString::number(this->p->getPoints());
            txt = txt + "   Payment Method: Cash";



            paymentsLogFile << txt.toStdString() << '\n';
            paymentsLogFile.close();

        }


        this->p->setAmountDue(0);
        this->p->setPoints(this->p->getPoints() + 10);

        ui->amountDueDisplay->setText("$" + QString::number(this->p->getAmountDue()));
        ui->currentBalanceDisplay->setText("$" + QString::number(this->p->getBalance()));
        ui->pointsDisplay->setText(QString::number(this->p->getPoints()));


        *this->isPaymentSuccessfull = true;
        this->isDone = true;
        ui->paymentStatus->setText("Payment Status: Payment made successfully by Cash!");



    } else if (ui->creditRadioButton->isChecked()){

        paymentsLogFile.open("paymentsLogFile.txt", ios::app);

        if (paymentsLogFile.is_open()){

            QString txt = "";
            txt = txt + "   Service: Appointment";
            txt = txt + "   Doctor Name: " + this->docName;
            txt = txt + "   Patient Name: " + this->p->getName();
            txt = txt + "   Appointment Time: " + this->appTime;
            txt = txt + "   Payment Time: " + __TIMESTAMP__;
            txt = txt + "   Amount: $" + QString::number(this->p->getAmountDue());
            txt = txt + "   Discount By Points: $" + QString::number(this->p->getPoints());
            txt = txt + "   Payment Method: Credit Card";



            paymentsLogFile << txt.toStdString() << '\n';
            paymentsLogFile.close();

        }


        this->p->setAmountDue(0);
        this->p->setPoints(this->p->getPoints() + 10);

        ui->amountDueDisplay->setText("$" + QString::number(this->p->getAmountDue()));
        ui->currentBalanceDisplay->setText("$" + QString::number(this->p->getBalance()));
        ui->pointsDisplay->setText(QString::number(this->p->getPoints()));


        *this->isPaymentSuccessfull = true;
        this->isDone = true;
        ui->paymentStatus->setText("Payment Status: Payment made successfully using Credit Card!");



    }

} else{
    ui->paymentStatus->setText("Payment Status: Payment already done!");

}


}

