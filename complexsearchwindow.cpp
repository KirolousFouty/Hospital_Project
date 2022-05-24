#include "complexsearchwindow.h"
#include "ui_complexsearchwindow.h"

ComplexSearchWindow::ComplexSearchWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComplexSearchWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;
    this->emergencyVisitLog = new QVector<EmergencyVisit>;
    this->roomLog = new QVector<Room>;
    this->homeVisitLog = new QVector<HomeVisit>;
}

ComplexSearchWindow::~ComplexSearchWindow()
{
    delete ui;
}

void ComplexSearchWindow::on_backButton_clicked()
{
    this->close();
}


void ComplexSearchWindow::on_showAllButton_clicked()
{

    // This function displays all instances of the selected type

    if (!(ui->patientRadioButton->isChecked() || ui->doctorRadioButton->isChecked() || ui->appointmentRadioButton->isChecked() || ui->roomVisitRadioButton->isChecked() || ui->homeVisitRadioButton->isChecked() || ui->emergencyVisitRadioButton->isChecked())){
        ui->searchResultDisplay->setText("Please Select a Type to Search for.");
        return;
    }

    // If user selected to saerch for Patient
    if (ui->patientRadioButton->isChecked()){

        // Clear current search results
        ui->searchResultDisplay->setText("");

        // This is a for each loop. It goes over each element in the userMap.
        for (auto i : this->p->userMap){

            // Display Patient Name and Patient ID. // You can add more details (look for the attributes in Patient.h)
            ui->searchResultDisplay->setText(ui->searchResultDisplay->text() + "Patient Name: " + i.second.getName() + " Patient ID: " + QString::number(i.second.getPatientID())+ " Patient Balance: " + QString::number(i.second.getBalance()) + '\n');
        }

        // Return after the loop (end function, do not run the code below)
        return;

    }

    // If user selected to search for Appointment
    else if(ui->appointmentRadioButton->isChecked()){

        // Clear current search results
        ui->searchResultDisplay->setText("");

        for (int i = 0; i < this->appointmentsLog->size(); i++){
            ui->searchResultDisplay->setText(ui->searchResultDisplay->text() + this->appointmentsLog->at(i).showAppointment() + '\n');


        }

        // Return after the loop (end function, do not run the code below)
        return;

    }




}


void ComplexSearchWindow::on_pushButton_clicked()
{
    // This function displays a specific instance of the selected type according to the written criteria
    // Very similar to the showAllButton, but it only displays when the if condition is true (which is the criteria we want)

    if (!(ui->patientRadioButton->isChecked() || ui->doctorRadioButton->isChecked() || ui->appointmentRadioButton->isChecked() || ui->roomVisitRadioButton->isChecked() || ui->homeVisitRadioButton->isChecked() || ui->emergencyVisitRadioButton->isChecked())){
        ui->searchResultDisplay->setText("Please Select a Type to Search for.");
        return;
    }

    // If user selected to saerch for Patient
    if (ui->patientRadioButton->isChecked()){

        // Clear current search results
        ui->searchResultDisplay->setText("");

        // This is a for each loop. It goes over each element in the userMap.
        for (auto i : this->p->userMap){


            // Display Patient Name and Patient ID. // You can add more details (look for the attributes in Patient.h)
            // Only of the instance that meets the criteria
            if (QString::number(i.second.getPatientID()) == ui->criteriaLineEdit->text()){
            ui->searchResultDisplay->setText(ui->searchResultDisplay->text() + "Patient Name: " + i.second.getName() + " Patient ID: " + QString::number(i.second.getPatientID()) + " Patient Balance: " + QString::number(i.second.getBalance()) + '\n');
            }

        }

        // If the loop ended, and no instance was found, display as Not Found.
        if ( ui->searchResultDisplay->text() == ""){
             ui->searchResultDisplay->setText("Not Found!");
        }

        // Return after the loop (end function, do not run the code below)
        return;

    }


    // If user selected to search for Appointment
    else if(ui->appointmentRadioButton->isChecked()){

        // Clear current search results
        ui->searchResultDisplay->setText("");

        for (int i = 0; i < this->appointmentsLog->size(); i++){

            if (ui->criteriaLineEdit->text() == this->appointmentsLog->at(i).doctorName || ui->criteriaLineEdit->text() == this->appointmentsLog->at(i).dt.getDt() || ui->criteriaLineEdit->text() == this->appointmentsLog->at(i).patientName || ui->criteriaLineEdit->text() == QString::number(this->appointmentsLog->at(i).fees)){
            ui->searchResultDisplay->setText(ui->searchResultDisplay->text() + this->appointmentsLog->at(i).showAppointment() + '\n');
            }
        }

        // Return after the loop (end function, do not run the code below)
        return;

    }



}


void ComplexSearchWindow::on_selectTypeButton_clicked()
{
    // This button clarifies what the user needs to enter as a criteria in the lineEdit

    // If user wants to search for a Patient
    if (ui->patientRadioButton->isChecked()){

        // Tell them that they can search by the Patient ID
        ui->searchByTitle->setText("Search By Patient ID:");
        return;

    }


    // If user wants to search for an Appointment
    else if (ui->appointmentRadioButton->isChecked()){

        // Tell them they can search by the Doctor Name, Patient Name, Fees, or Time
        ui->searchByTitle->setText("Search By Appointment Doctor Name, Patient Name, Fees, or Time");
        return;
    }
}

