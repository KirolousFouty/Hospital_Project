#include "Patient.h"

Patient::Patient() // default constructor
{
	medical_history = "unknown";
	points = 0;
	patientID = 900211928;
	age = 18;
	gender = "female";
	bloodType = "A+";
	allergies = "none";
	insured = false;
}
Patient::Patient(QString MH, int P, int PID, int A, QString G, QString BT, QString All, bool INS) // parameterized constructor
{
	medical_history = MH;
	points = P;
	patientID = PID;
	age = A;
	gender = G;
	bloodType = BT;
	allergies = All;
	insured = INS;
}
QString Patient::getMedicalHistory()
{
	return medical_history;
}
int Patient::getPoints()
{
	return points;
}
int Patient::getpatientID()
{
	return patientID;
}
int Patient::getAge()
{
	return age;
}
QString Patient::getGender()
{
	return gender;
}
QString Patient::getBloodType()
{
	return bloodType;
}
QString Patient::getAllergies()
{
	return allergies;
}
bool Patient::getInsured()
{
	return insured;
}
void Patient::setMedicalHistory(QString MH)
{
	medical_history = MH;
}
void Patient::setPoints(int P)
{
	points = P;
}
void Patient::setpatientID(int PID)
{
	patientID = PID;
}
void Patient::setAge(int A)
{
	age = A;
}
void Patient::setGender(QString G)
{
	gender = G;
}
void Patient::setBloodType(QString BT)
{
	bloodType = BT;
}
void Patient::setAllergies(QString All)
{
	allergies = All;
}
void Patient::setInsured(bool INS)
{
	insured = INS;
}
void Patient::update_history()
{
}
void Patient::patient_request()
{
}
QString Patient::searchForDoctor(QString specialization)
{
	/////////////////////////////////////////
	return "";
}
bool Patient::getInsuranceApproval()
{
	//////////////////////////////////////////
	return true;
}
long Patient::cancelReservation(int reservationID)  // How does cancel reservation return long?
{
	///////////////////////////////////////////
	return 0;
}
// MISSING: getshortestpath