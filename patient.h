#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <QString>

using namespace std;

class Patient
{
private:
	QString medical_history;

protected:
	QString name;
	int points;
	int patientID;
	int age;
	QString gender;
	QString bloodType;
	QString allergies;
	bool insured;
	// Position : pair<double, double> ma3rafsh meen kan 3amel keda fel class diagram

public:
	Patient();
	Patient(QString MH, int P, int PID, int A, QString G, QString BT, QString All, bool INS);

	QString getName();
	QString getMedicalHistory();
	int getPoints();
	int getpatientID();
	int getAge();
	QString getGender();
	QString getBloodType();
	QString getAllergies();
	bool getInsured();

	void setMedicalHistory(QString MH);
	void setPoints(int P);
	void setpatientID(int PID);
	void setAge(int A);
	void setGender(QString G);
	void setBloodType(QString BT);
	void setAllergies(QString All);
	void setInsured(bool INS);

	void update_history();
	void patient_request();
	QString searchForDoctor(QString specialization);
	// dateTime : DateAndTime) ma3rash meen 3amel deeh
	bool getInsuranceApproval();
	long cancelReservation(int reservationID); // How does cancel reservation return long?
											   // getShortestPath(pos:pair<double, double>;
											   // vector<double, double>:: getShortestPath;
};

#endif // !patient_H
