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
    this->cancelledAppointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;
    this->roomLog = new QVector<Room>;

    this->isPaymentSuccessfull = new bool;
    *isPaymentSuccessfull = false;
}

BookAppointmentWindow::~BookAppointmentWindow()
{
    delete ui;
}

void BookAppointmentWindow::on_confirmAppointmentButton_clicked()
{
    if (this->p->getLoggedIn() == false)
    {
        QMessageBox::about(this, "Error", "Please log in first");
    }
    else
    {
        if (ui->doctorsComboBox->currentText() == "")
        {
            ui->appointmentStatusTitle->setText("Appointment Status: Please choose a department.");
            return;
        }

        if (ui->timeComboBox->currentText() == "")
        {
            ui->appointmentStatusTitle->setText("Appointment Status: Please choose a doctor.");
            return;
        }

        if (ui->feesDisplay->text().toDouble() > this->p->getBalance())
        {
            ui->appointmentStatusTitle->setText("Appointment Status: Failed! Insufficient balance.");
            return;
        }

        DateAndTime dtTemp;

        if (ui->timeComboBox->currentText() == "09:00 AM")
        {
            dtTemp.setHour(9);
            dtTemp.setMinute(0);
        }
        else if (ui->timeComboBox->currentText() == "10:00 AM")
        {
            dtTemp.setHour(10);
            dtTemp.setMinute(0);
        }
        else if (ui->timeComboBox->currentText() == "11:00 AM")
        {
            dtTemp.setHour(11);
            dtTemp.setMinute(0);
        }
        else if (ui->timeComboBox->currentText() == "12:00 PM")
        {
            dtTemp.setHour(12);
            dtTemp.setMinute(0);
        }
        else if (ui->timeComboBox->currentText() == "01:00 PM")
        {
            dtTemp.setHour(1);
            dtTemp.setMinute(0);
        }
        else if (ui->timeComboBox->currentText() == "02:00 PM")
        {
            dtTemp.setHour(2);
            dtTemp.setMinute(0);
        }
        else if (ui->timeComboBox->currentText() == "03:00 PM")
        {
            dtTemp.setHour(3);
            dtTemp.setMinute(0);
        }

        for (int i = 0; i < this->arrDoc->size(); i++)
        {

            if (i == 0)
            {
                QString s = ui->doctorsComboBox->currentText();
                s.erase(s.end() - 9, s.end());

                for (int j = 0; j < this->roomLog->size(); j++)
                {
                    if (this->roomLog->at(j).getDoc() == s && this->roomLog->at(j).getDt().getDt() == ui->timeComboBox->currentText())
                    {
                        ui->appointmentStatusTitle->setText("Appointment Status: Doctor is already booked for a Room Visit. Please select another time.");
                        return;
                    }
                }
            }

            if (this->arrDoc->at(i).getName() + "      " + QString::number(this->arrDoc->at(i).getRating()) == ui->doctorsComboBox->currentText())
            {

                for (int j = 0; j < this->appointmentsLog->size(); j++)
                {
                    if (this->appointmentsLog->at(j).doctorName == this->arrDoc->at(i).getName() && this->appointmentsLog->at(j).dt == dtTemp)
                    {
                        ui->appointmentStatusTitle->setText("Appointment Status: Appointment already booked. Please try another time.");
                        return;
                    }
                }

                this->p->setAmountDue(this->arrDoc->at(i).getFees());

                PaymentWindow paywin;
                paywin.setModal(true);

                paywin.p = this->p;
                paywin.docName = this->arrDoc->at(i).getName();
                paywin.appTime = ui->timeComboBox->currentText();

                paywin.exec();

                this->isPaymentSuccessfull = paywin.isPaymentSuccessfull;

                if (*isPaymentSuccessfull == true)
                {
                    Appointment a1(this->p, &(this->arrDoc->at(i)), dtTemp);
                    appointmentsLog->push_back(a1);

                    ui->appointmentStatusTitle->setText("Appointment Status: Booked Successfully!");
                    ui->discountDisplay->setText("$" + QString::number(this->p->getPoints()));
                    return;
                }
                else
                {

                    ui->appointmentStatusTitle->setText("Appointment Status: Failed! Payment failed");
                    return;
                }

                break;
            }
        }
    }
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
        if (this->arrDoc->at(i).getName() + "      " + QString::number(this->arrDoc->at(i).getRating()) == ui->doctorsComboBox->currentText())
        {

            for (int i = 0; i < this->arrDoc->at(i).timeList.size(); i++)
            {

                if (this->arrDoc->at(i).timeList.at(i).getHour() == 9)
                {
                    temp = "09:00 AM";
                }
                else if (this->arrDoc->at(i).timeList.at(i).getHour() == 12)
                {
                    temp = "12:00 PM";
                }
                else if (this->arrDoc->at(i).timeList.at(i).getHour() > 9)
                {
                    temp = QString::number(this->arrDoc->at(i).timeList.at(i).getHour()) + ":00 AM";
                }
                else
                {
                    temp = "0" + QString::number(this->arrDoc->at(i).timeList.at(i).getHour()) + ":00 PM";
                }

                ui->timeComboBox->addItem(temp);
            }

            ui->feesDisplay->setText("$" + QString::number(this->arrDoc->at(i).getFees()));
            ui->discountDisplay->setText("$" + QString::number(this->p->getPoints()));
            break;
        }
    }
}

void BookAppointmentWindow::on_backButton_clicked()
{
    this->close();
}

void BookAppointmentWindow::on_cancelAppointmentButton_clicked()
{
    CancelAppointmentWindow cancelwin;
    cancelwin.setModal(true);

    cancelwin.p = this->p;
    cancelwin.appointmentsLog = this->appointmentsLog;
    cancelwin.cancelledAppointmentsLog = this->cancelledAppointmentsLog;

    cancelwin.exec();
}

