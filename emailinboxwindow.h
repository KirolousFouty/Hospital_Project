#ifndef EMAILINBOXWINDOW_H
#define EMAILINBOXWINDOW_H

#include <QDialog>
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
#include "EmergencyVisit.h"
#include "Room.h"
#include "HomeVisit.h"

namespace Ui
{
    class EmailInboxWindow;
}

class EmailInboxWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EmailInboxWindow(QWidget *parent = nullptr);
    ~EmailInboxWindow();

    Patient *p;
    QVector<Appointment> *appointmentsLog;
    QVector<Appointment> *cancelledAppointmentsLog;
    QVector<Doctor> *arrDoc;
    QVector<EmergencyVisit> *emergencyVisitLog;
    QVector<Room> *roomLog;
    QVector<HomeVisit> *homeVisitLog;

private slots:
    void on_refreshButton_clicked();

private:
    Ui::EmailInboxWindow *ui;
};

#endif // EMAILINBOXWINDOW_H
