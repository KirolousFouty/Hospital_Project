#include "bookappointmentwindow.h"
#include "ui_bookappointmentwindow.h"
#include "Doctor.h"

Doctor d1("Ahmed", 121, 2.4, "Cardio");
Doctor d2("Tarek", 122, 2.3, "Emergency");
Doctor d3("Youssef", 123, 4.4, "Cardio");
Doctor d4("Ziad", 124, 3.4, "Blood");
Doctor d5("Ali", 125, 4.6, "Neurology");
Doctor d6("Farah", 126, 4.5, "Neurology");
Doctor d7("Kiro", 127, 4.4, "Blood");
Doctor d8("Nour", 128, 3.7, "Emergency");

Doctor arrDoc[8] = {d1, d2, d3, d4, d5, d6, d7, d8};

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

    for (int i = 0; i < 9; i++)
    {
        if (arrDoc[i].getDepartment() == ui->departmentsComboBox->currentText())
        {

            ui->doctorsComboBox->addItem(arrDoc[i].getName());
        }
    }
}
