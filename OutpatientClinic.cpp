#include "OutpatientClinic.h"
using namespace std;

OutpatientClinic::OutpatientClinic()
{
	speciality = "cardio";
}
OutpatientClinic::OutpatientClinic(string S)
{
	speciality = S;
}
string OutpatientClinic::getspecialty()
{
	return speciality;
}
void OutpatientClinic::setspeciality(string S)
{
	speciality = S;
}