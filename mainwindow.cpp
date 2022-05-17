#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;
    this->emergencyVisitLog = new QVector<EmergencyVisit>;
    this->roomLog = new QVector<Room>;

        this->p_userLoginTitle = ui->userLoginTitle;

        Doctor d1("Ahmed", 121, 2.4, 1000, "Cardio");
        Doctor d2("Tarek", 122, 2.3, 1500, "Emergency");
        Doctor d3("Youssef", 123, 4.4, 950, "Cardio");
        Doctor d4("Ziad", 124, 3.4, 1100, "Blood");
        Doctor d5("Ali", 125, 4.6, 900, "Neurology");
        Doctor d6("Farah", 126, 4.5, 1900, "Neurology");
        Doctor d7("Kiro", 127, 4.4, 1600, "Blood");
        Doctor d8("Nour", 128, 3.7, 1700, "Emergency");

        arrDoc->push_back(d1);
        arrDoc->push_back(d2);
        arrDoc->push_back(d3);
        arrDoc->push_back(d4);
        arrDoc->push_back(d5);
        arrDoc->push_back(d6);
        arrDoc->push_back(d7);
        arrDoc->push_back(d8);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    UserLoginWindow userloginwin;
    userloginwin.setModal(true);

    userloginwin.p = this->p;
    userloginwin.appointmentsLog = this->appointmentsLog;
    userloginwin.arrDoc = this->arrDoc;
    userloginwin.p_userLoginTitle = this->p_userLoginTitle;
    userloginwin.exec();
}

void MainWindow::on_showPatientInformationButton_clicked()
{

    if (this->p->getLoggedIn() == false){
        QMessageBox::about(this, "Error", "Please log in first");
    }
    else{

        ShowPatientInformation showpatientinfo;
        showpatientinfo.setModal(true);

        showpatientinfo.p = this->p;
        showpatientinfo.appointmentsLog = this->appointmentsLog;
        showpatientinfo.arrDoc = this->arrDoc;

        showpatientinfo.exec();

    }


}

void MainWindow::on_bookAppointmentButton_clicked()
{
    BookAppointmentWindow bookappointmentwin;
    bookappointmentwin.setModal(true);

    bookappointmentwin.p = this->p;
    bookappointmentwin.appointmentsLog = this->appointmentsLog;
    bookappointmentwin.arrDoc = this->arrDoc;

    bookappointmentwin.exec();

}

void MainWindow::on_showAppointmentsButton_clicked()
{
    ui->appointmentsTitle->setText("");

    if (this->appointmentsLog->size() == 0 && this->emergencyVisitLog->size() == 0 && this->roomLog->size() == 0){
        ui->appointmentsTitle->setText("No bookings.");
        return;
    }

    for (int i = 0; i < this->appointmentsLog->size(); i++){
        ui->appointmentsTitle->setText(ui->appointmentsTitle->text() + "\nAppointment #" + QString::number((i+1)) + " " + this->appointmentsLog->at(i).showAppointment());
    }
    for (int i = 0; i < this->emergencyVisitLog->size(); i++){
        ui->appointmentsTitle->setText(ui->appointmentsTitle->text() + "\nEmergency Visit #" + QString::number((i+1)) + " " + this->emergencyVisitLog->at(i).showVisit());
    }
    for (int i = 0; i < this->roomLog->size(); i++){
        ui->appointmentsTitle->setText(ui->appointmentsTitle->text() + "\nRoom #" + QString::number((i+1)) + " " + this->roomLog->at(i).showRoom());
    }

}

void MainWindow::on_bookRoomButton_clicked()
{
    BookRoomWindow bookroomwin;
    bookroomwin.setModal(true);

    bookroomwin.p = this->p;
    bookroomwin.appointmentsLog = this->appointmentsLog;
    bookroomwin.arrDoc = this->arrDoc;
    bookroomwin.roomLog = this->roomLog;

    bookroomwin.exec();
}

void MainWindow::on_emergencyVisitButton_clicked()
{
    bookEmergencyVisitWindow bookemervisit;
    bookemervisit.setModal(true);

    bookemervisit.p = this->p;
    bookemervisit.appointmentsLog = this->appointmentsLog;
    bookemervisit.arrDoc = this->arrDoc;
    bookemervisit.emergencyVisitLog = this->emergencyVisitLog;

    bookemervisit.exec();
}

