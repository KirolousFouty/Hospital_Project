#include "Appointment.h"

Appointment::Appointment()
{
    this->patientName = "PatientName";
    this->doctorName = "DoctorName";
    this->fees = 1000;
    // this->dt = dateTime;
}

Appointment::Appointment(Patient *p_patient, const Doctor *p_doctor, DateAndTime p_dt)
{
    this->patientName = p_patient->getName();
    this->doctorName = p_doctor->getName();
    this->fees = p_doctor->getFees();
    this->dt = p_dt;
}

QString Appointment::showAppointment() const
{
    QString txt = "";
    txt = txt + "   Doctor Name: " + this->doctorName;
    txt = txt + "   Patient Name: " + this->patientName;
    txt = txt + "   Fees: " + QString::number(this->fees);
    txt = txt + "   Date: " + QString::number(this->dt.getHour()) + ":" + QString::number(this->dt.getMinute()) + "0";

    return txt;
}
