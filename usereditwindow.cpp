#include "usereditwindow.h"
#include "ui_usereditwindow.h"

UserEditWindow::UserEditWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserEditWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
}

UserEditWindow::~UserEditWindow()
{
    delete ui;
}

void UserEditWindow::on_clearFieldsButton_clicked()
{

    ui->new_ageDisplay->setText("");
    ui->new_allergiesDisplay->setText("");
    ui->new_balanceDisplay->setText("");
    ui->new_bloodTypesDisplay->setText("");
    ui->new_genderDisplay->setText("");
    ui->new_idDisplay->setText("");
    ui->new_insuranceDisplay->setText("");
    ui->new_nameDisplay->setText("");
    ui->new_pointsDisplay->setText("");

}


void UserEditWindow::on_editButton_clicked()
{

    if (ui->new_ageDisplay->text() == "" && ui->new_allergiesDisplay->text() == "" && ui->new_balanceDisplay->text() == "" && ui->new_bloodTypesDisplay->text() == "" && ui->new_genderDisplay->text() == ""&& ui->new_idDisplay->text() == "" && ui->new_insuranceDisplay->text() == "" && ui->new_nameDisplay->text() == "" && ui->new_pointsDisplay->text() == ""){
        ui->editStatusTitle->setText("Edit Status: Please enter a new value to edit with.");
        return;
    } else{

        if (ui->new_ageDisplay->text() != ""){
            this->p->setAge(ui->new_ageDisplay->text().toInt());
        }

        if (ui->new_allergiesDisplay->text() != ""){
            this->p->setAllergies(ui->new_allergiesDisplay->text());
        }

        if (ui->new_balanceDisplay->text() != ""){
            this->p->setBalance(ui->new_balanceDisplay->text().toDouble());
        }

        if (ui->new_bloodTypesDisplay->text() != ""){
            this->p->setBloodType(ui->new_bloodTypesDisplay->text());
        }

        if (ui->new_genderDisplay->text() != ""){
            this->p->setGender(ui->new_genderDisplay->text());
        }

        if (ui->new_idDisplay->text() != ""){
            this->p->setpatientID(ui->new_idDisplay->text().toInt());
        }

        if (ui->new_insuranceDisplay->text() != ""){
            if (ui->new_insuranceDisplay->text().toLower() == "true" || ui->new_insuranceDisplay->text().toLower() == "yes"){
                this->p->setInsured(true);
            }
            else{
                this->p->setInsured(false);
            }

        }

        if (ui->new_nameDisplay->text() != ""){
            this->p->setName(ui->new_nameDisplay->text());
        }

        if (ui->new_pointsDisplay->text() != ""){
            this->p->setPoints(ui->new_pointsDisplay->text().toInt());
        }




        ui->nameDisplay->setText(this->p->getName());
        ui->idDisplay->setText(QString::number(this->p->getPatientID()));
        ui->ageDisplay->setText(QString::number(this->p->getAge()));
        ui->balanceDisplay->setText("$" + QString::number(this->p->getBalance()));
        ui->genderDisplay->setText(this->p->getGender());
        ui->bloodTypesDisplay->setText(this->p->getBloodType());
        ui->allergiesDisplay->setText(this->p->getAllergies());

        if (this->p->getInsured())
        {
            ui->insuranceDisplay->setText("Yes");
        }
        else
        {
            ui->insuranceDisplay->setText("No");
        }

        ui->pointsDisplay->setText(QString::number(this->p->getPoints()));



        ui->new_ageDisplay->setText("");
        ui->new_allergiesDisplay->setText("");
        ui->new_balanceDisplay->setText("");
        ui->new_bloodTypesDisplay->setText("");
        ui->new_genderDisplay->setText("");
        ui->new_idDisplay->setText("");
        ui->new_insuranceDisplay->setText("");
        ui->new_nameDisplay->setText("");
        ui->new_pointsDisplay->setText("");


        ui->editStatusTitle->setText("Edit Status: Edit done successfully!");



    }









}


void UserEditWindow::on_showButton_clicked()
{
    ui->nameDisplay->setText(this->p->getName());
    ui->idDisplay->setText(QString::number(this->p->getPatientID()));
    ui->ageDisplay->setText(QString::number(this->p->getAge()));
    ui->balanceDisplay->setText("$" + QString::number(this->p->getBalance()));
    ui->genderDisplay->setText(this->p->getGender());
    ui->bloodTypesDisplay->setText(this->p->getBloodType());
    ui->allergiesDisplay->setText(this->p->getAllergies());

    if (this->p->getInsured())
    {
        ui->insuranceDisplay->setText("Yes");
    }
    else
    {
        ui->insuranceDisplay->setText("No");
    }

    ui->pointsDisplay->setText(QString::number(this->p->getPoints()));
}


void UserEditWindow::on_backButton_clicked()
{
    this->close();
}

