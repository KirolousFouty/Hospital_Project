#include "EmergencyVisit.h"

EmergencyVisit::EmergencyVisit()
{
    this->patientName = "Name";
}

EmergencyVisit::EmergencyVisit(QString p_patientName, DateAndTime p_dt)
{
    this->patientName = p_patientName;
    this->dt = p_dt;
}

DateAndTime EmergencyVisit::getDt() const{
    return this->dt;
}

QString EmergencyVisit::getPatientName(){
    return this->patientName;
}

//bool EmergencyVisit::checkAvailability()
//{
//	/////////////////////
//	return true;
//}
//QString EmergencyVisit::bookDateAndTime()
//{
//	//////////////////////////////
//	return "";
//}
