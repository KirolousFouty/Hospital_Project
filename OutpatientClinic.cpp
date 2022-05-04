#include "OutpatientClinic.h"

OutpatientClinic::OutpatientClinic()
{
	this->speciality = "cardio";
}
OutpatientClinic::OutpatientClinic(QString p_speciality)
{
	this->speciality = p_speciality;
}
QString OutpatientClinic::getSpecialty()
{
	return this->speciality;
}
void OutpatientClinic::setSpeciality(QString p_speciality)
{
	this->speciality = p_speciality;
}