#include "dobloodtestwindow.h"
#include "ui_dobloodtestwindow.h"

doBloodTestWindow::doBloodTestWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::doBloodTestWindow)
{
    ui->setupUi(this);
    this->p = new Patient;
}

doBloodTestWindow::~doBloodTestWindow()
{
    delete ui;
}

void doBloodTestWindow::on_submitSampleButton_clicked()
{
    if (this->p->getLoggedIn() == false){
        QMessageBox::about(this, "Error", "Please log in first");
    }
    else{

    if (this->p->getBalance() < 200){
        ui->resultDisplay->setText("Result: Failed! Insufficient balance.");
        return;
    }

    srand(time(NULL));
    int x = rand()%30 + 70;
    this->p->setBalance(this->p->getBalance() - 200);
    ui->resultDisplay->setText("Result:  %" + QString::number(x) + " Healthy.");
}
}
