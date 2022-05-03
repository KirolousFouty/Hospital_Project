#ifndef OUTPATIENTCLINIC_H
#define OUTPATIENTCLINIC_H

#include <iostream>
#include <string>

using namespace std;

class OutpatientClinic
{
private:
	//-Position : pair<x : double, y : double>
	string speciality;

public:
	OutpatientClinic();
	OutpatientClinic(string S);

	string getspecialty();

	void setspeciality(string S);
};
#endif // !outpatientclinic_H
