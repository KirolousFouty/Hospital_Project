#ifndef BOOKEMERGENCYVISITWINDOW_H
#define BOOKEMERGENCYVISITWINDOW_H

#include <QDialog>
#include <QVector>
#include <QMessageBox>
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
#include "EmergencyVisit.h"

namespace Ui
{
    class bookEmergencyVisitWindow;
}

class bookEmergencyVisitWindow : public QDialog
{
    Q_OBJECT

public:
    explicit bookEmergencyVisitWindow(QWidget *parent = nullptr);
    ~bookEmergencyVisitWindow();

    Patient *p;
    QVector<Appointment> *appointmentsLog;
    QVector<Doctor> *arrDoc;
    QVector<EmergencyVisit> *emergencyVisitLog;

private slots:
    void on_confirmVisitButton_clicked();

    void on_backButton_clicked();

private:
    Ui::bookEmergencyVisitWindow *ui;
};

#endif // BOOKEMERGENCYVISITWINDOW_H
