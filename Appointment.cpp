#include "Appointment.h"

Appointment::Appointment()
{
    this->patientName = "PatientName";
    this->doctorName = "DoctorName";
    this->fees = 1000;
    // this->dt = dateTime;
}

Appointment::Appointment(Patient *p, Doctor *d, DateAndTime dateTime)
{
    this->patientName = p->getName();
//    this->doctorName = d.getName();
//    this->fees = d->getFees();
    // this->dt = dateTime;
}


QString Appointment::showAppointment(){

    return "Appointment #1";

}
