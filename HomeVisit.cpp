#include "HomeVisit.h"

HomeVisit::HomeVisit()
{
    this->homeAddress = "auc";
    this->symptoms = "unknown";
}

HomeVisit::HomeVisit(QString p_patientName, DateAndTime p_dt, QString p_homeAddress, QString p_symptoms)
{
    this->patientName = p_patientName;
    this->dt = p_dt;
    this->homeAddress = p_homeAddress;
    this->symptoms = p_symptoms;
}

QString HomeVisit::getHomeAddress() const
{
    return this->homeAddress;
}

QString HomeVisit::getSymptoms() const
{
    return this->symptoms;
}

void HomeVisit::setHomeAddress(QString p_homeAddress)
{
    this->homeAddress = p_homeAddress;
}

void HomeVisit::setSymptoms(QString p_symptoms)
{
    this->symptoms = p_symptoms;
}

QString HomeVisit::requestDoctor()
{
    //////////////////////////////////
    return "";
}

QString HomeVisit::getPatientName() const
{
    return this->patientName;
}
DateAndTime HomeVisit::getDt() const
{
    return this->dt;
}

void HomeVisit::setPatientName(QString p_patientName)
{
    this->patientName = p_patientName;
}

void HomeVisit::setDt(DateAndTime p_dt)
{
    this->dt = p_dt;
}

QString HomeVisit::showHomeVisit() const
{
    QString txt = "";
    txt = txt + "   Patient Name: " + this->patientName;
    txt = txt + "   Time: " + QString::number(this->dt.getHour()) + ":" + QString::number(this->dt.getMinute()) + "0";
    txt = txt + "   Home Address: " + this->homeAddress;
    txt = txt + "   Symptoms: " + this->symptoms;
    txt = txt + "   Fees: $900";

    return txt;
}
