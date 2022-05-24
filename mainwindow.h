#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userloginwindow.h"
#include "showpatientinformation.h"
#include "bookappointmentwindow.h"
#include "bookroomwindow.h"
#include "bookemergencyvisitwindow.h"
#include "rechargebalancewindow.h"
#include "dobloodtestwindow.h"
#include "bookhomevisitwindow.h"
#include "helpandpricingswindow.h"
#include "emailinboxwindow.h"
#include "shortestpathwindow.h"
#include "complexsearchwindow.h"

#include "DateAndTime.h"
#include "HomeVisit.h"
#include "EmergencyRoom.h"
#include "EmergencyVisit.h"
#include "Room.h"
#include "Department.h"
#include "Doctor.h"
#include "Patient.h"
#include "OutpatientClinic.h"
#include "Appointment.h"
#include "patchnoteswindow.h"

#include <iostream>
#include <fstream>
#include <QVector>
#include <map>
#include <algorithm>
#include <QLabel>
#include <QMessageBox>

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

    Patient *p;
    QVector<Appointment> *appointmentsLog;
    QVector<Appointment> *cancelledAppointmentsLog;
    QVector<Doctor> *arrDoc;
    QVector<EmergencyVisit> *emergencyVisitLog;
    QVector<Room> *roomLog;
    QVector<HomeVisit> *homeVisitLog;
    QLabel *p_userLoginTitle;
    fstream paymentsLogFile;

private slots:
    void on_loginButton_clicked();

    void on_showPatientInformationButton_clicked();

    void on_bookAppointmentButton_clicked();

    void on_showAppointmentsButton_clicked();

    void on_bookRoomButton_clicked();

    void on_emergencyVisitButton_clicked();

    void on_rechargeButton_clicked();

    void on_doBloodTestButton_clicked();

    void on_bookHomeVisitButton_clicked();

    void on_helpAndPricingsButton_clicked();

    void on_openEmailInboxButton_clicked();

    void on_shortestPathButton_clicked();

    void on_complexSearch_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
