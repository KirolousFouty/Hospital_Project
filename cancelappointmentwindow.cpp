#include "cancelappointmentwindow.h"
#include "ui_cancelappointmentwindow.h"

CancelAppointmentWindow::CancelAppointmentWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CancelAppointmentWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->cancelledAppointmentsLog = new QVector<Appointment>;

}

CancelAppointmentWindow::~CancelAppointmentWindow()
{
    delete ui;
}

void CancelAppointmentWindow::on_showAppointmentsButton_clicked()
{
    ui->appointmentsComboBox->clear();
    ui->cancellationStatusDisplay->setText("Cancellation Status:");

        for (int i = 0; i < this->appointmentsLog->size(); i++){
            ui->appointmentsComboBox->addItem(this->appointmentsLog->at(i).showAppointment());
        }
}


void CancelAppointmentWindow::on_cancelSelectedAppointmentButton_clicked()
{

    for (int i = 0; i < this->appointmentsLog->size(); i++){

        if (this->appointmentsLog->at(i).showAppointment() == ui->appointmentsComboBox->currentText()){

            this->p->setBalance(this->p->getBalance() + this->appointmentsLog->at(i).fees);

            this->cancelledAppointmentsLog->push_back(this->appointmentsLog->at(i));
            this->appointmentsLog->remove(i);


            ui->cancellationStatusDisplay->setText("Cancellation Status: Appointment Cancelled Successfully! Fees Amount Returned to Balance.");

            ui->appointmentsComboBox->clear();

            return;
        }
    }


}


void CancelAppointmentWindow::on_backButton_clicked()
{
    this->close();
}

