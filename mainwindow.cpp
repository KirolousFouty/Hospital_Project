#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    p = new Patient;

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

void MainWindow::on_startButton_clicked()
{
    ui->displayResult->setText("Clicked!");
}

void MainWindow::on_loginButton_clicked()
{
    UserLoginWindow userloginwin;
    userloginwin.setModal(true);
    userloginwin.arrDoc = this->arrDoc;
    userloginwin.p = this->p;
    userloginwin.exec();
}

void MainWindow::on_showPatientInformationButton_clicked()
{
    ShowPatientInformation showpatientinfo;
    showpatientinfo.setModal(true);
    showpatientinfo.exec();
}

void MainWindow::on_bookAppointmentButton_clicked()
{
    BookAppointmentWindow bookappointmentwin;
    bookappointmentwin.setModal(true);
    bookappointmentwin.arrDoc = this->arrDoc;
    bookappointmentwin.exec();

}

void MainWindow::on_showAppointmentsButton_clicked()
{
    for (Appointment x : bookappointmentwin.appointmentsLog)
    {
        //       ui->appointmentsTitle->setText("TEST");
        ui->appointmentsTitle->setText(x.showAppointment());
    }
}

void MainWindow::on_bookRoomButton_clicked()
{
    BookRoomWindow bookroomwin;
    bookroomwin.setModal(true);
    bookroomwin.arrDoc = this->arrDoc;
    bookroomwin.p = this->p;
    bookroomwin.exec();
}

