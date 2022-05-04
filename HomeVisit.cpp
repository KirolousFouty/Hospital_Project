#include "HomeVisit.h"

HomeVisit::HomeVisit()
{
	this->homeAddress = "auc";
	this->symptoms = "unknown";
}
HomeVisit::HomeVisit(QString p_homeAddress, QString p_symptoms)
{
	this->homeAddress = p_homeAddress;
	this->symptoms = p_symptoms;
}
QString HomeVisit::getHomeAddress()
{
	return this->homeAddress;
}
QString HomeVisit::getSymptoms()
{
	return this->symptoms;
}
void HomeVisit::setHomeAddress(QString p_homeAddress)
{
	this->homeAddress = p_homeAddress;
}
void HomeVisit::setSymptoms(QString p_symptoms)
{
	this->symptoms = p_symptoms;
}
QString HomeVisit::requestDoctor()
{
	//////////////////////////////////
	return "";
}