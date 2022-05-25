#include "Patient.h"

Patient::Patient() // default constructor
{

	this->name = "Admin";
	this->username = "Admin";
	this->password = "Admin";
	this->age = 19;
	this->balance = 999999;
	this->gender = "Male";
	this->bloodType = "A+";
	this->allergies = "None";
	this->insured = true;
	this->medicalHistory = "Excellent";
	this->loggedIn = false;
	this->points = 0;
	this->patientID = 900200100 + this->userMap.size();
	this->amountDue = 0;
}
Patient::Patient(QString p_medicalHistory, double p_balance, int p_points, int p_patientID, int p_age, QString p_gender, QString p_bloodType, QString p_allergies, bool p_insured) // parameterized constructor
{
	this->medicalHistory = p_medicalHistory;
	this->balance = p_balance;
	this->points = p_points;
	this->patientID = p_patientID;
	this->age = p_age;
	this->gender = p_gender;
	this->bloodType = p_bloodType;
	this->allergies = p_allergies;
	this->insured = p_insured;
	this->loggedIn = false;
	this->amountDue = 0;
}

QString Patient::getName()
{
	return this->name;
}

QString Patient::getMedicalHistory()
{
	return this->medicalHistory;
}

double Patient::getBalance() const
{
	return this->balance;
}

int Patient::getPoints()
{
	return this->points;
}
int Patient::getPatientID()
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

void Patient::setName(QString p_name)
{
    this->name = p_name;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setName(p_name);
        }
    }

}


void Patient::setMedicalHistory(QString p_medicalHistory)
{
	this->medicalHistory = p_medicalHistory;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setMedicalHistory(p_medicalHistory);
        }
    }
}

void Patient::setBalance(double p_balance)
{
	this->balance = p_balance;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setBalance(p_balance);
        }
    }
}

void Patient::setPoints(int p_points)
{
	this->points = p_points;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setPoints(p_points);
        }
    }
}

void Patient::setpatientID(int p_patientID)
{
	this->patientID = p_patientID;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setpatientID(p_patientID);
        }
    }
}

void Patient::setAge(int p_age)
{
	this->age = p_age;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setAge(p_age);
        }
    }
}

void Patient::setGender(QString p_gender)
{
	this->gender = p_gender;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setGender(p_gender);
        }
    }
}

void Patient::setBloodType(QString p_bloodType)
{
	this->bloodType = p_bloodType;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setBloodType(p_bloodType);
        }
    }
}

void Patient::setAllergies(QString p_allergies)
{
	this->allergies = p_allergies;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setAllergies(p_allergies);
        }
    }
}

void Patient::setInsured(bool p_insured)
{
	this->insured = p_insured;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setInsured(p_insured);
        }
    }
}

bool Patient::reg(QString p_name, QString p_username, QString p_password, int p_age, double p_balance, QString p_gender, QString p_bloodType, QString p_allergies, bool p_insured, QString p_medicalHistory)
{
	if (userMap.count(p_name) == 0)
	{
		Patient temp;

		temp.name = p_name;
		temp.username = p_username;
		temp.password = p_password;
		temp.age = p_age;
		temp.balance = p_balance;
		temp.gender = p_gender;
		temp.bloodType = p_bloodType;
		temp.allergies = p_allergies;
		temp.insured = p_insured;
		temp.medicalHistory = p_medicalHistory;
		temp.loggedIn = false;
		temp.points = 0;
		temp.patientID = 900200100 + this->userMap.size();
		temp.amountDue = 0;

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

bool Patient::getLoggedIn() const
{
	return this->loggedIn;
}

void Patient::setUsername(QString p_username)
{

    Patient temp;

    for (auto i : this->userMap){
        if (i.first == this->username){
            temp = i.second;
        }
    }

    temp.username = p_username;
    temp.name = p_username;

    this->userMap.erase(this->userMap.find(this->username));

    this->userMap.insert(pair<QString, Patient> (temp.username, temp));
    this->username = p_username;


}

void Patient::setPassword(QString p_password)
{
	this->password = p_password;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setPassword(p_password);
        }
    }
}

void Patient::setLoggedIn(bool p_loggedIn)
{
	this->loggedIn = p_loggedIn;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setLoggedIn(p_loggedIn);
        }
    }
}

void Patient::setAmountDue(double p_amountDue)
{
	this->amountDue = p_amountDue;

    for (auto i : this->userMap){
        if (i.first == this->username){
            i.second.setAmountDue(p_amountDue);
        }
    }
}

double Patient::getAmountDue() const
{
	return this->amountDue;
}

void Patient::operator=(const Patient &c)
{
	this->name = c.name;
	this->username = c.username;
	this->password = c.password;
	this->age = c.age;
	this->balance = c.balance;
	this->gender = c.gender;
	this->bloodType = c.bloodType;
	this->allergies = c.allergies;
	this->insured = c.insured;
	this->medicalHistory = c.medicalHistory;
	this->loggedIn = c.loggedIn;
	this->points = c.points;
	this->patientID = c.patientID;
	this->amountDue = c.amountDue;
}
