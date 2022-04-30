#include "Patient.h"
using namespace std; 

Patient::Patient()//default constructor
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
Patient::Patient(string MH, int P, int PID, int A, string G, string BT, string All, bool INS)//parameterized constructor
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
string Patient::getMedicalHistory()
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
string Patient::getGender()
{
	return gender;
}
string Patient::getBloodType()
{
	return bloodType;
}
string Patient::getAllergies()
{
	return allergies;
}
bool Patient::getInsured()
{
	return insured;
}
void Patient::setMedicalHistory(string MH)
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
void Patient::setGender(string G)
{
	gender = G;
}
void Patient::setBloodType(string BT)
{
	bloodType = BT;
}
void Patient::setAllergies(string All)
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
string Patient::searchForDoctor(string specialization)
{
	/////////////////////////////////////////
}
bool Patient::getInsuranceApproval()
{
	//////////////////////////////////////////
}
long Patient::cancelReservation(int reservationID)
{
	///////////////////////////////////////////
}
//MISSING: getshortestpath 