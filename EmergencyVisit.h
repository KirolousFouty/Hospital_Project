#pragma once
#include <iostream>
#include <QString>
using namespace std; 

#ifndef EMERGENCYVISIT_H
#define EMERGENCYVISIT_H
class EmergencyVisit
{
protected:
	//date_and_time dateandtime;
public:
	EmergencyVisit();
	bool check_availability();
	QString book_date_and_time(); 
};

#endif
