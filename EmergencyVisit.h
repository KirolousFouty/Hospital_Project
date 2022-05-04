#ifndef EMERGENCYVISIT_H
#define EMERGENCYVISIT_H

#include <iostream>
#include <QString>
#include "DateAndTime.h"

using namespace std;

class EmergencyVisit
{
protected:
	// date_and_time dateandtime;
public:
	EmergencyVisit();
	bool checkAvailability();
	QString bookDateAndTime();
};

#endif
