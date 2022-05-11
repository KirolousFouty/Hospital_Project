#ifndef SHOWPATIENTINFORMATION_H
#define SHOWPATIENTINFORMATION_H

#include <QDialog>

#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"

namespace Ui
{
    class ShowPatientInformation;
}

class ShowPatientInformation : public QDialog
{
    Q_OBJECT

public:
    explicit ShowPatientInformation(QWidget *parent = nullptr);
    ~ShowPatientInformation();

    Patient *p;
    QVector<Appointment> *appointmentsLog;
    QVector<Doctor> *arrDoc;

private:
    Ui::ShowPatientInformation *ui;
};

#endif // SHOWPATIENTINFORMATION_H
