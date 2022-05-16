#include "bookroomwindow.h"
#include "ui_bookroomwindow.h"

BookRoomWindow::BookRoomWindow(QWidget *parent) : //done slect dpt
    QDialog(parent),
    ui(new Ui::BookRoomWindow)
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

BookRoomWindow::~BookRoomWindow() //done
{
    delete ui;
}

void BookRoomWindow::on_selectDepartmentButton_clicked()//done slct dr
{

    if (this->p == NULL){
        ui->statusTitle->setText("Status: Registration Required!");
        return;
    }

    ui->doctorsComboBox->clear();

    for (int i = 0; i < this->arrDoc->size(); i++)
    {
        if (this->arrDoc->at(i).getDepartment() == ui->departmentsComboBox->currentText())
        {

            ui->doctorsComboBox->addItem(this->arrDoc->at(i).getName() + "      " + QString::number(this->arrDoc->at(i).getRating()));
        }
    }
}

void BookRoomWindow::on_confirmAppointmentButton_clicked()  //half done
{
   DateAndTime dtTemp;

   if (ui->timesComboBox->currentText() == "09:00 AM"){
       dtTemp.setHour(9);
       dtTemp.setMinute(0);
   }
   else if (ui->timesComboBox->currentText() == "10:00 AM"){
       dtTemp.setHour(10);
       dtTemp.setMinute(0);
   }
   else if (ui->timesComboBox->currentText() == "11:00 AM"){
       dtTemp.setHour(11);
       dtTemp.setMinute(0);
   }
   else if (ui->timesComboBox->currentText() == "12:00 PM"){
       dtTemp.setHour(12);
       dtTemp.setMinute(0);
   }
   else if (ui->timesComboBox->currentText() == "01:00 PM"){
       dtTemp.setHour(1);
       dtTemp.setMinute(0);
   }
   else if (ui->timesComboBox->currentText() == "02:00 PM"){
       dtTemp.setHour(2);
       dtTemp.setMinute(0);
   }
   else if (ui->timesComboBox->currentText() == "03:00 PM"){
       dtTemp.setHour(3);
       dtTemp.setMinute(0);
   }



    for (int i = 0; i < this->arrDoc->size(); i++)  //Incomplete
    {
        if (this->arrDoc->at(i).getName() + "      " + QString::number(this->arrDoc->at(i).getRating()) == ui->doctorsComboBox->currentText()){

            for (int j = 0; j < this->appointmentsLog->size(); j++){
                if (this->appointmentsLog->at(j).doctorName == this->arrDoc->at(i).getName() && this->appointmentsLog->at(j).dt == dtTemp)
                {
                     ui->statusTitle->setText("Room Status: Room already booked. Please choose another.");
                     return;
                }
            }

           Appointment a1(this->p, &(this->arrDoc->at(i)), dtTemp);
           appointmentsLog->push_back(a1);
           break;
            }

        }

    ui->statusTitle->setText("Room Status: Room Booked Successfully!");

}

void BookRoomWindow::on_doctorsComboBox_activated(int i) //done
{
    ui->timesComboBox->clear();

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

                ui->timesComboBox->addItem(temp);


            }

            break;
        }
    }

}

void BookRoomWindow::on_backButton_clicked() //done
{
    this->close();
}


