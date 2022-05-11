#include "bookemergencyvisitwindow.h"
#include "ui_bookemergencyvisitwindow.h"

bookEmergencyVisitWindow::bookEmergencyVisitWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookEmergencyVisitWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;
}

bookEmergencyVisitWindow::~bookEmergencyVisitWindow()
{
    delete ui;
}
