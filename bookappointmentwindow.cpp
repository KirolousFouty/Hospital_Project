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
    Appointment a1;

    appointmentsLog->push_back(a1);
}

void BookAppointmentWindow::on_selectDepartmentButton_clicked()
{

    ui->doctorsComboBox->clear();

    for (int i = 0; i < this->arrDoc->size(); i++)
    {
        if (this->arrDoc->at(i).department == ui->departmentsComboBox->currentText())
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

