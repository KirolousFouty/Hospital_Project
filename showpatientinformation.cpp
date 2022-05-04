#include "showpatientinformation.h"
#include "ui_showpatientinformation.h"

ShowPatientInformation::ShowPatientInformation(QWidget *parent) : QDialog(parent),
                                                                  ui(new Ui::ShowPatientInformation)
{
    ui->setupUi(this);
}

ShowPatientInformation::~ShowPatientInformation()
{
    delete ui;
}
