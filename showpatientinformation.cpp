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
