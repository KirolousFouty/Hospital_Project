#include "Patient.h"

Patient::Patient() // default constructor
{
	this->medicalHistory = "unknown";
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
	return this->medicalHistory;
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
	this->medicalHistory = p_medicalHistory;
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

bool Patient::reg(QString p_name, QString p_username, QString p_password, int p_age, QString p_gender, QString p_bloodType, QString p_allergies, bool p_insured, QString p_medicalHistory)
{
	if (userMap.count(this->getName()) == 0)
	{
		Patient temp;

		//                              Validation ///////////////////
		//                               // Patient ID creation

		temp.name = p_name;
		temp.username = p_username;
		temp.password = p_password;
		temp.age = p_age;
		temp.gender = p_gender;
		temp.bloodType = p_bloodType;
		temp.allergies = p_allergies;
		temp.insured = p_insured;
		temp.medicalHistory = p_medicalHistory;
		temp.loggedIn = false;
		temp.points = 0;

		*this = temp;

		this->userMap.insert(pair<QString, Patient>(temp.getUsername(), temp));

		return true;
	}
	else
	{
		return false;
	}
}

int Patient::login(QString p_username, QString p_password)
{

	if (this->userMap.find(p_username) != this->userMap.end() && this->userMap[p_username].getPassword() == p_password)
	{
		this->loggedIn = true;
		return 0; // if username and password are correct.
	}
	else
	{
		this->loggedIn = false;

		if (this->userMap.find(p_username) != this->userMap.end() && this->userMap[p_username].getPassword() != p_password)
		{
			return 1; // if username is correct, and the password is incorrect.
		}
		else
		{
			return 2; // if username does not exist.
		}
	}
}

QString Patient::getUsername()
{
	return this->username;
}

QString Patient::getPassword()
{
	return this->password;
}

bool Patient::getLoggedIn()
{
	return this->loggedIn;
}

void Patient::setUsername(QString p_username)
{
	this->username = p_username;
}

void Patient::setPassword(QString p_password)
{
	this->password = p_password;
}

void Patient::setLoggedIn(bool p_loggedIn)
{
	this->loggedIn = p_loggedIn;
}

void Patient::userInformationGetter()
{
	/////////////////////////////////////
}

void Patient::operator=(const Patient &c)
{
	this->name = c.name;
	this->username = c.username;
    this->password = c.password;
	this->age = c.age;
	this->gender = c.gender;
	this->bloodType = c.bloodType;
	this->allergies = c.allergies;
	this->insured = c.insured;
	this->medicalHistory = c.medicalHistory;
	this->loggedIn = c.loggedIn;
	this->points = c.points;
}

// MISSING: getshortestpath
////////////////////////////////////////////////
