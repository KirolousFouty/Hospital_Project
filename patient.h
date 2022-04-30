#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef patient_H
#define patient_H
class Patient
{
private:
	string medical_history;
protected:
	int points;
	int patientID;
	int age; 
	string gender;
	string bloodType;
	string allergies;
	bool insured;
	//Position : pair<double, double> ma3rafsh meen kan 3amel keda fel class diagram 

public:
	Patient();
	Patient(string MH, int P, int PID, int A, string G, string BT, string All, bool INS);

	string getMedicalHistory();
	int getPoints();
	int getpatientID();
	int getAge();
	string getGender();
	string getBloodType();
	string getAllergies();
	bool getInsured();

	void setMedicalHistory(string MH);
	void setPoints(int P);
	void setpatientID(int PID);
	void setAge(int A);
	void setGender(string G);
	void setBloodType(string BT);
	void setAllergies(string All);
	void setInsured(bool INS);

	void update_history();
	void patient_request();
	string searchForDoctor(string specialization);
			//dateTime : DateAndTime) ma3rash meen 3amel deeh
	bool getInsuranceApproval();
	long cancelReservation(int reservationID);
	//getShortestPath(pos:pair<double, double>)
};

#endif // !patient_H
