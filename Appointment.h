#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <iostream>
#include "DateAndTime.h"
#include "Patient.h"
#include "Doctor.h"

class Appointment
{

public:
    QString patientName;
    QString doctorName;
    DateAndTime dt;
    double fees;
    // location

    Appointment();
    Appointment(Patient *p_patient, const Doctor *p_doctor, DateAndTime p_dt);

    QString showAppointment() const;
};

#endif
