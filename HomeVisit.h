#ifndef HOMEVISIT_H
#define HOMEVISIT_H

#include <iostream>
#include <QString>
#include "Patient.h"

using namespace std;

class HomeVisit : public Patient
{
private:
	QString homeAddress;
	// date_and_time dateandtime;
	QString symptoms;

public:
	HomeVisit();
	HomeVisit(QString p_homeAddress, QString p_symptoms);

	QString getHomeAddress();
	QString getSymptoms();

	void setHomeAddress(QString p_homeAddress);
	void setSymptoms(QString p_symptoms);

	QString requestDoctor();
};

#endif
