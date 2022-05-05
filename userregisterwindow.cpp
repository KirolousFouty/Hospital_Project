#include "userregisterwindow.h"
#include "ui_userregisterwindow.h"



UserRegisterWindow::UserRegisterWindow(QWidget *parent) : QDialog(parent),
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

    if (this->p->reg(ui->nameDisplay->text(), ui->usernameDisplay->text(), ui->passwordDisplay->text(), ui->ageDisplay->text().toInt(), ui->genderComboBox->currentText(), ui->bloodTypeComboBox->currentText(), ui->allergiesDisplay->text(), ui->insuredYesRadioButton->isChecked(), ui->medicalHistoryDisplay->text()))
    {
        ui->registrationStatusTitle->setText("Registration Status: Registered successfully!");
    }
    else
    {
        ui->registrationStatusTitle->setText("Registration Status: Registered failed!");
    }
}

void UserRegisterWindow::on_backButton_clicked()
{
    this->close();
}

void UserRegisterWindow::on_clearFieldsButton_clicked()
{

    ui->nameDisplay->setText("");
    ui->usernameDisplay->setText("");
    ui->passwordDisplay->setText("");
    ui->ageDisplay->setText("");
    ui->allergiesDisplay->setText("");
    ui->genderComboBox->setCurrentIndex(0);
    ui->medicalHistoryDisplay->setText("");
}
