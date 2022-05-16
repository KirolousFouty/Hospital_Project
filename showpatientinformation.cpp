#include "showpatientinformation.h"
#include "ui_showpatientinformation.h"

ShowPatientInformation::ShowPatientInformation(QWidget *parent) : QDialog(parent),
                                                                  ui(new Ui::ShowPatientInformation)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;

}

ShowPatientInformation::~ShowPatientInformation()
{
    delete ui;
}

void ShowPatientInformation::on_showButton_clicked()
{

 //    if (this->p->getLoggedIn() == false){

//        ui->nameDisplay->setText("Not logged in");
//        ui->idDisplay->setText("Not logged in");
//        ui->ageDisplay->setText("Not logged in");
//        ui->genderDisplay->setText("Not logged in");
//        ui->bloodTypesDisplay->setText("Not logged in");
//        ui->allergiesDisplay->setText("Not logged in");
//        ui->insuranceDisplay->setText("Not logged in");
//        ui->pointsDisplay->setText("Not logged in");

//        return;

//    }

    ui->nameDisplay->setText(this->p->getName());
    ui->idDisplay->setText("ID#900212931");
    ui->ageDisplay->setText(QString::number(this->p->getAge()));
    ui->genderDisplay->setText(this->p->getGender());
    ui->bloodTypesDisplay->setText(this->p->getBloodType());
    ui->allergiesDisplay->setText(this->p->getAllergies());

    if (this->p->getInsured()){
        ui->insuranceDisplay->setText("Yes");
    }
    else{
        ui->insuranceDisplay->setText("No");
    }

    ui->pointsDisplay->setText(QString::number(this->p->getPoints()));
}


void ShowPatientInformation::on_backButton_clicked()
{
    this->close();
}

