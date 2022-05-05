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
}

BookAppointmentWindow::~BookAppointmentWindow()
{
    delete ui;
}

void BookAppointmentWindow::on_confirmAppointmentButton_clicked()
{
    Appointment a1;

    appointmentsLog.push_back(a1);
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

//    for (int i = 0; i < 5; i++)
//    {
//        if (this->arrDoc->at(i).department == ui->departmentsComboBox->currentText())
//        {

//            ui->doctorsComboBox->addItem(this->arrDoc->at(i).name + "      " + QString::number(this->arrDoc->at(i).rating));
//        }
//    }



}
