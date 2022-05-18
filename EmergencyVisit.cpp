#include "EmergencyVisit.h"

EmergencyVisit::EmergencyVisit()
{
    this->patientName = "Name";
}

EmergencyVisit::EmergencyVisit(QString p_patientName, DateAndTime p_dt)
{
    this->patientName = p_patientName;
    this->dt = p_dt;
}

DateAndTime EmergencyVisit::getDt() const
{
    return this->dt;
}

QString EmergencyVisit::getPatientName()
{
    return this->patientName;
}

QString EmergencyVisit::showVisit() const
{
    QString txt = "";
    txt = txt + "   Patient Name: " + this->patientName;
    txt = txt + "   Time: " + QString::number(this->dt.getHour()) + ":" + QString::number(this->dt.getMinute()) + "0";
    txt = txt + "   Fees: $5000";
    return txt;
}
