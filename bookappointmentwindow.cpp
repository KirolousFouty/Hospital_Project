#include "bookappointmentwindow.h"
#include "ui_bookappointmentwindow.h"

BookAppointmentWindow::BookAppointmentWindow(QWidget *parent) : QDialog(parent),
                                                                ui(new Ui::BookAppointmentWindow)
{
    ui->setupUi(this);

    ui->departmentsComboBox->addItem("Cardio");
    ui->departmentsComboBox->addItem("Emergency");
    ui->departmentsComboBox->addItem("Blood");
    ui->departmentsComboBox->addItem("Nutrition");
    ui->departmentsComboBox->addItem("Neurology");

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;

}

BookAppointmentWindow::~BookAppointmentWindow()
{
    delete ui;
}

void BookAppointmentWindow::on_confirmAppointmentButton_clicked()
{

    if(ui->doctorsComboBox->currentText() == ""){
         ui->appointmentStatusTitle->setText("Appointment Status: Please choose a department.");
         return;
    }

    if(ui->timeComboBox->currentText() == ""){
         ui->appointmentStatusTitle->setText("Appointment Status: Please choose a doctor.");
         return;
    }


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



    for (int i = 0; i < this->arrDoc->size(); i++)
    {
        if (this->arrDoc->at(i).getName() + "      " + QString::number(this->arrDoc->at(i).getRating()) == ui->doctorsComboBox->currentText()){

            for (int j = 0; j < this->appointmentsLog->size(); j++){
                if (this->appointmentsLog->at(j).doctorName == this->arrDoc->at(i).getName() && this->appointmentsLog->at(j).dt == dtTemp){
                     ui->appointmentStatusTitle->setText("Appointment Status: Appointment already booked. Please try another.");
                     return;
                }
            }

           Appointment a1(this->p, &(this->arrDoc->at(i)), dtTemp);
           appointmentsLog->push_back(a1);
           break;
            }

        }

    ui->appointmentStatusTitle->setText("Appointment Status: Booked Successfully!");

}

void BookAppointmentWindow::on_selectDepartmentButton_clicked()
{

    ui->doctorsComboBox->clear();

    for (int i = 0; i < this->arrDoc->size(); i++)
    {
        if (this->arrDoc->at(i).getDepartment() == ui->departmentsComboBox->currentText())
        {

            ui->doctorsComboBox->addItem(this->arrDoc->at(i).getName() + "      " + QString::number(this->arrDoc->at(i).getRating()));
        }
    }

}

void BookAppointmentWindow::on_selectDoctorButton_clicked()
{
    ui->timeComboBox->clear();

    QString temp;


    for (int i = 0; i < this->arrDoc->size(); i++)
    {
        if (this->arrDoc->at(i).getName() + "      " + QString::number(this->arrDoc->at(i).getRating())== ui->doctorsComboBox->currentText()){

            for (int i = 0; i < this->arrDoc->at(i).timeList.size(); i++){

                if (this->arrDoc->at(i).timeList.at(i).getHour() == 9){
                    temp = "0" + QString::number(this->arrDoc->at(i).timeList.at(i).getHour()) + ":00 AM";
                }
                else if (this->arrDoc->at(i).timeList.at(i).getHour() > 9){
                    temp = QString::number(this->arrDoc->at(i).timeList.at(i).getHour()) + ":00 AM";
                }
                else {
                    temp = "0" + QString::number(this->arrDoc->at(i).timeList.at(i).getHour()) + ":00 PM";
                }

                ui->timeComboBox->addItem(temp);


            }

            break;
        }
    }


}


void BookAppointmentWindow::on_backButton_clicked()
{
    this->close();
}

