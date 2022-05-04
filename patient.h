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
	Patient(QString p_medicalHistory, int p_points, int p_patientID, int p_age, QString p_gender, QString p_bloodType, QString p_allergies, bool p_insured);

	QString getName();
	QString getMedicalHistory();
	int getPoints();
	int getpatientID();
	int getAge();
	QString getGender();
	QString getBloodType();
	QString getAllergies();
	bool getInsured();

	void setMedicalHistory(QString p_medicalHistory);
	void setPoints(int p_points);
	void setpatientID(int p_patientID);
	void setAge(int p_age);
	void setGender(QString p_gender);
	void setBloodType(QString p_bloodType);
	void setAllergies(QString p_allergies);
	void setInsured(bool p_insured);

	void update_history();
	void patient_request();
	QString searchForDoctor(QString p_specialization);
	// dateTime : DateAndTime) ma3rash meen 3amel deeh
	bool getInsuranceApproval();
	long cancelReservation(int p_reservationID); // How does cancel reservation return long?
												 // getShortestPath(pos:pair<double, double>;
												 // vector<double, double>:: getShortestPath;
};

#endif // !patient_H
