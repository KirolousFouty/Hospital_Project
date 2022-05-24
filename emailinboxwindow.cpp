#include "emailinboxwindow.h"
#include "ui_emailinboxwindow.h"

EmailInboxWindow::EmailInboxWindow(QWidget *parent) : QDialog(parent),
                                                      ui(new Ui::EmailInboxWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;
    this->emergencyVisitLog = new QVector<EmergencyVisit>;
    this->roomLog = new QVector<Room>;
    this->homeVisitLog = new QVector<HomeVisit>;

    ui->emailInbox->setText("");

    ui->emailInbox->setText("Refresh required.");
}

EmailInboxWindow::~EmailInboxWindow()
{
    delete ui;
}

void EmailInboxWindow::on_refreshButton_clicked()
{

    int counter = 1;

    ui->emailInbox->setText("");

    if (this->appointmentsLog->size() == 0 && this->emergencyVisitLog->size() == 0 && this->roomLog->size() == 0 && this->homeVisitLog->size() == 0)
    {
        ui->emailInbox->setText("Inbox is empty.");
        return;
    }

    for (int i = 0; i < this->emergencyVisitLog->size(); i++)
    {
        ui->emailInbox->setText(ui->emailInbox->text() + "\nEmail #" + QString::number(counter++) + "\tEmergency Visit #" + QString::number((i + 1)) + " " + this->emergencyVisitLog->at(i).showVisit());
    }

    for (int i = 0; i < this->appointmentsLog->size(); i++)
    {
        ui->emailInbox->setText(ui->emailInbox->text() + "\nEmail #" + QString::number(counter++) + "\tAppointment #" + QString::number((i + 1)) + " " + this->appointmentsLog->at(i).showAppointment());
    }

    for (int i = 0; i < this->roomLog->size(); i++)
    {
        ui->emailInbox->setText(ui->emailInbox->text() + "\nEmail #" + QString::number(counter++) + "\tRoom #" + QString::number((i + 1)) + " " + this->roomLog->at(i).showRoom());
    }

    for (int i = 0; i < this->homeVisitLog->size(); i++)
    {
        ui->emailInbox->setText(ui->emailInbox->text() + "\nEmail #" + QString::number(counter++) + "\tHome Visit #" + QString::number((i + 1)) + " " + this->homeVisitLog->at(i).showHomeVisit());
    }
}
