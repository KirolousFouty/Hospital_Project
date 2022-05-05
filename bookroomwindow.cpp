#include "bookroomwindow.h"
#include "ui_bookroomwindow.h"

BookRoomWindow::BookRoomWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookRoomWindow)
{
    ui->setupUi(this);

    ui->departmentsComboBox->addItem("Cardio");
    ui->departmentsComboBox->addItem("Emergency");
    ui->departmentsComboBox->addItem("Blood");
    ui->departmentsComboBox->addItem("Nutrition");
    ui->departmentsComboBox->addItem("Neurology");

}

BookRoomWindow::~BookRoomWindow()
{
    delete ui;
}

void BookRoomWindow::on_selectDepartmentButton_clicked()
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

