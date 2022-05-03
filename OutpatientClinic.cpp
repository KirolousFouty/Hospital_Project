#include "OutpatientClinic.h"

OutpatientClinic::OutpatientClinic()
{
	speciality = "cardio";
}
OutpatientClinic::OutpatientClinic(QString S)
{
	speciality = S;
}
QString OutpatientClinic::getspecialty()
{
	return speciality;
}
void OutpatientClinic::setspeciality(QString S)
{
	speciality = S;
}