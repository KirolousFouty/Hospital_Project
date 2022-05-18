#include "bookhomevisitwindow.h"
#include "ui_bookhomevisitwindow.h"

bookHomeVisitWindow::bookHomeVisitWindow(QWidget *parent) : QDialog(parent),
                                                            ui(new Ui::bookHomeVisitWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->homeVisitLog = new QVector<HomeVisit>;
}

bookHomeVisitWindow::~bookHomeVisitWindow()
{
    delete ui;
}

void bookHomeVisitWindow::on_confirmHomeVisitButton_clicked()
{
    if (this->p->getLoggedIn() == false)
    {
        QMessageBox::about(this, "Error", "Please log in first");
    }
    else
    {
        if (ui->symptomsDisplay->text() == "")
        {
            ui->statusTitle->setText("Status: Please enter your symptoms.");
            return;
        }

        if (ui->homeAddressDisplay->text() == "")
        {
            ui->statusTitle->setText("Status: Please enter your home address.");
            return;
        }

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

        for (int i = 0; i < this->homeVisitLog->size(); i++)
        {
            if (this->homeVisitLog->at(i).getDt().getHour() == dtTemp.getHour() && this->homeVisitLog->at(i).getDt().getMinute() == dtTemp.getMinute())
            {
                ui->statusTitle->setText("Status: Home Visit at is unavailable at this time! Try another!");
                return;
            }
        }

        HomeVisit tempHomeVisit(this->p->getName(), dtTemp, ui->homeAddressDisplay->text(), ui->symptomsDisplay->text());

        if (this->p->getBalance() < 900)
        {
            ui->statusTitle->setText("Status: Failed! Insufficient balance.");
            return;
        }

        this->homeVisitLog->push_back(tempHomeVisit);

        this->p->setBalance(this->p->getBalance() - 900 + this->p->getPoints()); // Accumulative non-decreasing points system
        this->p->setPoints(this->p->getPoints() + 40);

        ui->statusTitle->setText("Status: Home Visit booked successfully!");
    }
}

void bookHomeVisitWindow::on_backButton_clicked()
{
    this->close();
}

void bookHomeVisitWindow::on_checkDiscountButton_clicked()
{
    ui->discountDisplay->setText("$" + QString::number(this->p->getPoints()));
}
