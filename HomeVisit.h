#ifndef HOMEVISIT_H
#define HOMEVISIT_H

#include <iostream>
#include <QString>
#include "Patient.h"

using namespace std;

class HomeVisit : public Patient
{
private:
	QString home_address;
	// date_and_time dateandtime;
	QString symptoms;

public:
	HomeVisit();
	HomeVisit(QString HA, QString S);

	QString gethome_address();
	QString getsymptoms();

	void sethome_address(QString HA);
	void setsymptoms(QString S);

	QString request_doctor();
};

#endif
