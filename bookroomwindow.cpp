#include "bookroomwindow.h"
#include "ui_bookroomwindow.h"

BookRoomWindow::BookRoomWindow(QWidget *parent) : // done slect dpt
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
    this->roomLog = new QVector<Room>;
}

BookRoomWindow::~BookRoomWindow() // done
{
    delete ui;
}

void BookRoomWindow::on_selectDepartmentButton_clicked()
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

void BookRoomWindow::on_confirmRoomButton_clicked()
{

    if(ui->doctorsComboBox->currentText() == ""){
         ui->statusTitle->setText("Room Status: Please choose a department.");
         return;
    }

    QString s = ui->doctorsComboBox->currentText();
    s.erase(s.end()-9, s.end());


ui->statusTitle->setText("Room Status: " + s + "!");

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



    for (int i = 0; i < this->roomLog->size(); i++){
        if (this->roomLog->at(i).getDt().getHour() == dtTemp.getHour() && this->roomLog->at(i).getDt().getMinute() == dtTemp.getMinute()){
             ui->statusTitle->setText("Room Status: Room is unavailable! Try another!");
             return;
        }
    }

    Room tempRoom(ui->departmentsComboBox->currentText(), s, dtTemp, ui->roomTypesComboBox->currentText());
    this->roomLog->push_back(tempRoom);
    ui->statusTitle->setText("Room Status: Room booked successfully!");
}

void BookRoomWindow::on_backButton_clicked() // done
{
    this->close();
}
