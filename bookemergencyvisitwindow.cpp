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
    this->emergencyVisitLog = new QVector<EmergencyVisit>;
}


bookEmergencyVisitWindow::~bookEmergencyVisitWindow()
{
    delete ui;
}

void bookEmergencyVisitWindow::on_confirmVisitButton_clicked()///////////////////////////////////////////////////////////////////
{
   DateAndTime dtTemp;

   if (ui->timeComboBox->currentText() == "09:00 AM"){
       dtTemp.setHour(9);
       dtTemp.setMinute(0);
   }
   else if (ui->timeComboBox->currentText() == "10:00 AM"){
       dtTemp.setHour(10);
       dtTemp.setMinute(0);
   }
   else if (ui->timeComboBox->currentText() == "11:00 AM"){
       dtTemp.setHour(11);
       dtTemp.setMinute(0);
   }
   else if (ui->timeComboBox->currentText() == "12:00 PM"){
       dtTemp.setHour(12);
       dtTemp.setMinute(0);
   }
   else if (ui->timeComboBox->currentText() == "01:00 PM"){
       dtTemp.setHour(1);
       dtTemp.setMinute(0);
   }
   else if (ui->timeComboBox->currentText() == "02:00 PM"){
       dtTemp.setHour(2);
       dtTemp.setMinute(0);
   }
   else if (ui->timeComboBox->currentText() == "03:00 PM"){
       dtTemp.setHour(3);
       dtTemp.setMinute(0);
   }

   for (int i = 0; i < this->emergencyVisitLog->size(); i++){

       if (this->emergencyVisitLog->at(i).getDt().getHour() == dtTemp.getHour() && this->emergencyVisitLog->at(i).getDt().getMinute() == dtTemp.getMinute()){
            ui->visitStatusTitle->setText("Visit Status: Time is unavailable! Try another!");
            return;
       }
   }


   this->emergencyVisitLog->push_back(EmergencyVisit(this->p->getName(), dtTemp));
   ui->visitStatusTitle->setText("Visit Status: Booked Successfully!");

}


void bookEmergencyVisitWindow::on_backButton_clicked()
{
    this->close();
}
