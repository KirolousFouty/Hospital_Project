#ifndef EMERGENCYVISIT_H
#define EMERGENCYVISIT_H

#include <iostream>
#include <QString>

using namespace std;

class EmergencyVisit
{
protected:
	// date_and_time dateandtime;
public:
	EmergencyVisit();
	bool check_availability();
	QString book_date_and_time();
};

#endif
