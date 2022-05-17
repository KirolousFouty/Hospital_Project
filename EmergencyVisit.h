#ifndef EMERGENCYVISIT_H
#define EMERGENCYVISIT_H

#include <iostream>
#include <QString>
#include "DateAndTime.h"

using namespace std;

class EmergencyVisit
{
protected:
    QString patientName;
    DateAndTime dt;
public:
	EmergencyVisit();
    EmergencyVisit(QString p_patientName, DateAndTime p_dt);
    DateAndTime getDt() const;
    QString getPatientName();

    QString showVisit() const;

//	bool checkAvailability();
//	QString bookDateAndTime();

};

#endif
