#include "userregisterwindow.h"
#include "ui_userregisterwindow.h"

UserRegisterWindow::UserRegisterWindow(QWidget *parent) : QDialog(parent),
                                                          ui(new Ui::UserRegisterWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;
}

UserRegisterWindow::~UserRegisterWindow()
{
    delete ui;
}

void UserRegisterWindow::on_registerButton_clicked()
{

    if (ui->nameDisplay->text() == "" || ui->usernameDisplay->text() == "" || ui->passwordDisplay->text() == "" || ui->ageDisplay->text() == "" || ui->balanceDisplay->text() == "" || ui->allergiesDisplay->text() == "" || ui->medicalHistoryDisplay->text() == "" || ((!ui->insuredYesRadioButton->isChecked()) && (!ui->insuredNoRadioButton->isChecked())))
    {
        ui->registrationStatusTitle->setText("Registration Status: Please fill in all the fields.");
        return;
    }

    if (ui->passwordDisplay->text().size() < 5)
    {
        ui->registrationStatusTitle->setText("Registration Status: Password must be at least 5 characters.");
        return;
    }

    if (ui->ageDisplay->text().toInt() < 18)
    {
        ui->registrationStatusTitle->setText("Registration Status: User must be at least 18 years old to register.");
        return;
    }

    if (ui->balanceDisplay->text().toDouble() <= 0)
    {
        ui->registrationStatusTitle->setText("Registration Status: Balance has to be greater than zero.");
        return;
    }

    QString abc = "abcdefghijklmnopqrstuvwxyz~!@#$%^&*()-_=+";
    QString qs = ui->ageDisplay->text();

    for (int i = 0; i < qs.length(); i++)
    {
        for (int j = 0; j < abc.length(); j++)
        {
            if (abc[j] == qs[i])
            {

                ui->registrationStatusTitle->setText("Registration Status: Failed! Please enter age as only numbers.");
                ui->ageDisplay->setText("");
                return;
            }
        }
    }

    qs = ui->balanceDisplay->text();

    for (int i = 0; i < qs.length(); i++)
    {
        for (int j = 0; j < abc.length(); j++)
        {
            if (abc[j] == qs[i])
            {

                ui->registrationStatusTitle->setText("Registration Status: Failed! Please enter balance as only numbers.");
                ui->balanceDisplay->setText("");
                return;
            }
        }
    }

    if (this->p->reg(ui->nameDisplay->text(), ui->usernameDisplay->text(), ui->passwordDisplay->text(), ui->ageDisplay->text().toInt(), ui->balanceDisplay->text().toDouble(), ui->genderComboBox->currentText(), ui->bloodTypeComboBox->currentText(), ui->allergiesDisplay->text(), ui->insuredYesRadioButton->isChecked(), ui->medicalHistoryDisplay->text()))
    {
        ui->registrationStatusTitle->setText("Registration Status: Registered successfully!");
        ui->nameDisplay->setText("");
        ui->usernameDisplay->setText("");
        ui->passwordDisplay->setText("");
        ui->ageDisplay->setText("");
        ui->balanceDisplay->setText("");
        ui->allergiesDisplay->setText("");
        ui->genderComboBox->setCurrentIndex(0);
        ui->bloodTypeComboBox->setCurrentIndex(0);
        ui->medicalHistoryDisplay->setText("");
        return;
    }
    else
    {
        ui->registrationStatusTitle->setText("Registration Status: User already exists!");
        return;
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
    ui->balanceDisplay->setText("");
    ui->allergiesDisplay->setText("");
    ui->genderComboBox->setCurrentIndex(0);
    ui->bloodTypeComboBox->setCurrentIndex(0);
    ui->medicalHistoryDisplay->setText("");
}
