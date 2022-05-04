#include "Patient.h"

Patient::Patient() // default constructor
{
	this->medical_history = "unknown";
	this->points = 0;
	this->patientID = 900211928;
	this->age = 18;
	this->gender = "female";
	this->bloodType = "A+";
	this->allergies = "none";
	this->insured = false;
}
Patient::Patient(QString p_medicalHistory, int p_points, int p_patientID, int p_age, QString p_gender, QString p_bloodType, QString p_allergies, bool p_insured) // parameterized constructor
{
	this->medicalHistory = p_medicalHistory;
	this->points = p_points;
	this->patientID = p_patientID;
	this->age = p_age;
	this->gender = p_gender;
	this->bloodType = p_bloodType;
	this->allergies = p_allergies;
	this->insured = p_insured;
}

QString Patient::getName()
{
	return this->name;
}

QString Patient::getMedicalHistory()
{
	return this->medical_history;
}
int Patient::getPoints()
{
	return this->points;
}
int Patient::getpatientID()
{
	return this->patientID;
}
int Patient::getAge()
{
	return this->age;
}
QString Patient::getGender()
{
	return this->gender;
}
QString Patient::getBloodType()
{
	return this->bloodType;
}
QString Patient::getAllergies()
{
	return this->allergies;
}
bool Patient::getInsured()
{
	return this->insured;
}
void Patient::setMedicalHistory(QString p_medicalHistory)
{
	this->medical_history = p_medicalHistory;
}
void Patient::setPoints(int p_points)
{
	this->points = p_points;
}
void Patient::setpatientID(int p_patientID)
{
	this->patientID = p_patientID;
}
void Patient::setAge(int p_age)
{
	this->age = p_age;
}
void Patient::setGender(QString p_gender)
{
	this->gender = p_gender;
}
void Patient::setBloodType(QString p_bloodType)
{
	this->bloodType = p_bloodType;
}
void Patient::setAllergies(QString p_allergies)
{
	this->allergies = p_allergies;
}
void Patient::setInsured(bool p_insured)
{
	this->insured = p_insured;
}
void Patient::update_history()
{
	/////////////////////////////////////////
}
void Patient::patient_request()
{
	/////////////////////////////////////////
}
QString Patient::searchForDoctor(QString p_specialization)
{
	/////////////////////////////////////////
	return "";
}
bool Patient::getInsuranceApproval()
{
	//////////////////////////////////////////
	return true;
}
long Patient::cancelReservation(int p_reservationID) // How does cancel reservation return long?
{
	///////////////////////////////////////////
	return 0;
}

// MISSING: getshortestpath
////////////////////////////////////////////////