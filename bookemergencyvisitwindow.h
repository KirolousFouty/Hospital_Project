#ifndef BOOKEMERGENCYVISITWINDOW_H
#define BOOKEMERGENCYVISITWINDOW_H

#include <QDialog>
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"


namespace Ui {
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

private:
    Ui::bookEmergencyVisitWindow *ui;
};

#endif // BOOKEMERGENCYVISITWINDOW_H
