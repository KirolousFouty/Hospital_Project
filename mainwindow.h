#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "userregisterwindow.h"
#include "userloginwindow.h"
#include "showpatientinformation.h"
#include "bookappointmentwindow.h"

#include "DateAndTime.h"
#include "HomeVisit.h"
#include "EmergencyRoom.h"
#include "EmergencyVisit.h"
#include "Room.h"
#include "Department.h"
#include "Doctor.h"
#include "Patient.h"
//#include "userMapInclude.h"
#include "OutpatientClinic.h"
#include "Appointment.h"

#include <iostream>
#include <QVector>
#include <map>
#include <algorithm>

using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    BookAppointmentWindow bookappointmentwin;
    Patient *p;


private slots:
    void on_startButton_clicked();

    void on_loginButton_clicked();

    void on_showPatientInformationButton_clicked();

    void on_bookAppointmentButton_clicked();

    void on_showAppointmentsButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
