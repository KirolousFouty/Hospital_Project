#include "userregisterwindow.h"
#include "ui_userregisterwindow.h"

UserRegisterWindow::UserRegisterWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserRegisterWindow)
{
    ui->setupUi(this);
}

UserRegisterWindow::~UserRegisterWindow()
{
    delete ui;
}

void UserRegisterWindow::on_registerButton_clicked()
{
    Patient temp;

    if(temp.reg()){
        ui->registrationStatusTitle->setText("Registered successfully!");
    }
    else{
        ui->registrationStatusTitle->setText("Registered failed!");
    }

}


void UserRegisterWindow::on_backButton_clicked()
{
    this->close();
}

