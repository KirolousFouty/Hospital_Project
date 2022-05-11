#include "Appointment.h"

Appointment::Appointment()
{
    this->patientName = "PatientName";
    this->doctorName = "DoctorName";
    this->fees = 1000;
    // this->dt = dateTime;
}

Appointment::Appointment(Patient *p_patientName, Doctor *p_doctorName, DateAndTime p_dt)
{
    this->patientName = p_patientName->getName();
    //    this->doctorName = p_doctorName->getName();
    //    this->fees = d->getFees();
    //    this->dt = p_dt;
}

QString Appointment::showAppointment() const
{
    ///////////////////////////////////////////////
    return "Appointment #1";
}
