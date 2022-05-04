#ifndef OUTPATIENTCLINIC_H
#define OUTPATIENTCLINIC_H

#include <iostream>
#include <QString>

using namespace std;

class OutpatientClinic
{
private:
	//-Position : pair<x : double, y : double>
	QString speciality;

public:
	OutpatientClinic();
	OutpatientClinic(QString p_speciality);

	QString getSpecialty();

	void setSpeciality(QString p_speciality);
};
#endif // !outpatientclinic_H
