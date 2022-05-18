#ifndef HOMEVISIT_H
#define HOMEVISIT_H

#include <iostream>
#include <QString>
#include "Patient.h"
#include "DateAndTime.h"

using namespace std;

class HomeVisit : public Patient
{
private:
    QString patientName;
    DateAndTime dt;
    QString homeAddress;
    QString symptoms;

public:
    HomeVisit();
    HomeVisit(QString p_patientName, DateAndTime p_dt, QString p_homeAddress, QString p_symptoms);

    QString getPatientName() const;
    DateAndTime getDt() const;
    QString getHomeAddress() const;
    QString getSymptoms() const;

    void setPatientName(QString p_patientName);
    void setDt(DateAndTime p_dt);
    void setHomeAddress(QString p_homeAddress);
    void setSymptoms(QString p_symptoms);

    QString requestDoctor();

    QString showHomeVisit() const;
};

#endif
