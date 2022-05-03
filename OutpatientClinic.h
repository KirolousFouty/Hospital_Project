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
	OutpatientClinic(QString S);

	QString getspecialty();

	void setspeciality(QString S);
};
#endif // !outpatientclinic_H
