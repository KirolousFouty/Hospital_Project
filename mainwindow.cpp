#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
//    BookAppointmentWindow bookappointmentwin;
    bookappointmentwin.setModal(true);
    bookappointmentwin.exec();

}

void MainWindow::on_showAppointmentsButton_clicked()
{
    for (Appointment x : bookappointmentwin.appointmentsLog){
//       ui->appointmentsTitle->setText("TEST");
       ui->appointmentsTitle->setText(x.showAppointment());
    }
}

