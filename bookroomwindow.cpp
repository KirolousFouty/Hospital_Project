#include "bookroomwindow.h"
#include "ui_bookroomwindow.h"

BookRoomWindow::BookRoomWindow(QWidget *parent) : QDialog(parent),
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

    ui->timesComboBox->addItem("09:00 AM");
    ui->timesComboBox->addItem("10:00 AM");
    ui->timesComboBox->addItem("11:00 AM");
    ui->timesComboBox->addItem("12:00 PM");
    ui->timesComboBox->addItem("01:00 PM");
    ui->timesComboBox->addItem("02:00 PM");
    ui->timesComboBox->addItem("03:00 PM");

}

BookRoomWindow::~BookRoomWindow()
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
    if (this->p->getLoggedIn() == false)
    {
        QMessageBox::about(this, "Error", "Please log in first");
    }
    else
    {
        if (ui->doctorsComboBox->currentText() == "")
        {
            ui->statusTitle->setText("Room Status: Please choose a department.");
            return;
        }

        if (ui->feesDisplay->text() == "")
        {
            ui->statusTitle->setText("Room Status: Please choose room type.");
            return;
        }

        QString s = ui->doctorsComboBox->currentText();
        //s.erase(s.end() - 9, s.end());

        DateAndTime dtTemp;

        if (ui->timesComboBox->currentText() == "09:00 AM")
        {
            dtTemp.setHour(9);
            dtTemp.setMinute(0);
        }
        else if (ui->timesComboBox->currentText() == "10:00 AM")
        {
            dtTemp.setHour(10);
            dtTemp.setMinute(0);
        }
        else if (ui->timesComboBox->currentText() == "11:00 AM")
        {
            dtTemp.setHour(11);
            dtTemp.setMinute(0);
        }
        else if (ui->timesComboBox->currentText() == "12:00 PM")
        {
            dtTemp.setHour(12);
            dtTemp.setMinute(0);
        }
        else if (ui->timesComboBox->currentText() == "01:00 PM")
        {
            dtTemp.setHour(1);
            dtTemp.setMinute(0);
        }
        else if (ui->timesComboBox->currentText() == "02:00 PM")
        {
            dtTemp.setHour(2);
            dtTemp.setMinute(0);
        }
        else if (ui->timesComboBox->currentText() == "03:00 PM")
        {
            dtTemp.setHour(3);
            dtTemp.setMinute(0);
        }




        for (int j = 0; j < this->appointmentsLog->size(); j++){
            if (this->appointmentsLog->at(j).doctorName == s && this->appointmentsLog->at(j).dt.getDt() == ui->timesComboBox->currentText()){
                ui->statusTitle->setText("Room Status: Doctor is already booked for an Appointment. Please select another Time or Doctor.");
                return;
            }
        }



        for (int i = 0; i < this->roomLog->size(); i++)
        {
            if (this->roomLog->at(i).getDt().getHour() == dtTemp.getHour() && this->roomLog->at(i).getDt().getMinute() == dtTemp.getMinute() && this->roomLog->at(i).getRoomType() == ui->roomTypesComboBox->currentText())
            {
                ui->statusTitle->setText("Room Status: Room is unavailable! Try another!");
                return;
            }
        }

        Room tempRoom(ui->departmentsComboBox->currentText(), s, dtTemp, ui->roomTypesComboBox->currentText());

        if (this->p->getBalance() < tempRoom.getFees())
        {
            ui->statusTitle->setText("Room Status: Failed! Insufficient balance.");
            return;
        }

        this->roomLog->push_back(tempRoom);

        this->p->setBalance(this->p->getBalance() - tempRoom.getFees() + this->p->getPoints()); // Accumulative non-decreasing points system
        this->p->setPoints(this->p->getPoints() + 30);

        ui->statusTitle->setText("Room Status: Room booked successfully!");
    }
}

void BookRoomWindow::on_backButton_clicked()
{
    this->close();
}

void BookRoomWindow::on_selectRoomTypeButton_clicked()
{
    if (ui->roomTypesComboBox->currentText() == "Standard")
    {
        ui->feesDisplay->setText("$" + QString::number(1000));
    }
    else if (ui->roomTypesComboBox->currentText() == "Suit")
    {
        ui->feesDisplay->setText("$" + QString::number(1800));
    }
    else
    {
        ui->feesDisplay->setText("$" + QString::number(3000));
    }

    ui->discountDisplay->setText("$" + QString::number(this->p->getPoints()));
}
