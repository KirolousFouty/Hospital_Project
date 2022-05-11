#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;

        this->p_userLoginTitle = ui->userLoginTitle;

        Doctor d1("Ahmed", 121, 2.4, "Cardio");
        Doctor d2("Tarek", 122, 2.3, "Emergency");
        Doctor d3("Youssef", 123, 4.4, "Cardio");
        Doctor d4("Ziad", 124, 3.4, "Blood");
        Doctor d5("Ali", 125, 4.6, "Neurology");
        Doctor d6("Farah", 126, 4.5, "Neurology");
        Doctor d7("Kiro", 127, 4.4, "Blood");
        Doctor d8("Nour", 128, 3.7, "Emergency");

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
    ShowPatientInformation showpatientinfo;
    showpatientinfo.setModal(true);

    showpatientinfo.p = this->p;
    showpatientinfo.appointmentsLog = this->appointmentsLog;
    showpatientinfo.arrDoc = this->arrDoc;

    showpatientinfo.exec();
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
    for (int i = 0; i < this->appointmentsLog->size(); i++){
        //       ui->appointmentsTitle->setText("TEST");
        ui->appointmentsTitle->setText(this->appointmentsLog->at(i).showAppointment()); ////// Test&fix
    }

}

void MainWindow::on_bookRoomButton_clicked()
{
    BookRoomWindow bookroomwin;
    bookroomwin.setModal(true);

    bookroomwin.p = this->p;
    bookroomwin.appointmentsLog = this->appointmentsLog;
    bookroomwin.arrDoc = this->arrDoc;

    bookroomwin.exec();
}

