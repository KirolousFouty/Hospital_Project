#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <QString>
#include <map>

using namespace std;

class Patient
{
private:
	QString name;
	QString username;
	QString password;
	bool loggedIn;
	double balance;
	int points;
	int patientID;
	int age;
	QString gender;
	QString bloodType;
	QString allergies;
	bool insured;
	QString medicalHistory;
    double amountDue;
    // Position : pair<double, double>


public:
	Patient();
	Patient(QString p_medicalHistory, double p_balance, int p_points, int p_patientID, int p_age, QString p_gender, QString p_bloodType, QString p_allergies, bool p_insured);

	map<QString, Patient> userMap;

	QString getName();
	QString getMedicalHistory();
	double getBalance() const;
	int getPoints();
	int getPatientID();
	int getAge();
	QString getGender();
	QString getBloodType();
	QString getAllergies();
	bool getInsured();
	bool getLoggedIn() const;
    double getAmountDue() const;

	void setMedicalHistory(QString p_medicalHistory);
	void setBalance(double p_balance);
	void setPoints(int p_points);
	void setpatientID(int p_patientID);
	void setAge(int p_age);
	void setGender(QString p_gender);
	void setBloodType(QString p_bloodType);
	void setAllergies(QString p_allergies);
	void setInsured(bool p_insured);
	void setLoggedIn(bool p_loggedIn);
    void setAmountDue(double p_amountDue);

	bool reg(QString p_name, QString p_username, QString p_password, int p_age, double p_balance, QString p_gender, QString p_bloodType, QString p_allergies, bool p_insured, QString p_medicalHistory);
	int login(QString p_username, QString p_password);

	QString getUsername();
	QString getPassword();
	void setUsername(QString p_username);
	void setPassword(QString p_password);
	void userInformationGetter();

	void update_history();
	void patient_request();
	QString searchForDoctor(QString p_specialization);
	// dateTime : DateAndTime) ma3rash meen 3amel deeh
	bool getInsuranceApproval();
	long cancelReservation(int p_reservationID); // How does cancel reservation return long?
												 // getShortestPath(pos:pair<double, double>;
												 // QVector<double, double>:: getShortestPath;

	void operator=(const Patient &c);
};

#endif // !patient_H
