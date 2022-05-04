#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include <QString>
#include "DateAndTime.h"
#include "Patient.h"

using namespace std;
class Doctor
{
public:
//     int id[3] = {1, 2, 3};
//     QByteArray name[3] = {"Ahmed", "Adam", "Ayman"};

private:
    double rating;
    DateAndTime earliestdate;

public:
    Doctor();
    Doctor(QString p_name,  int p_id, double p_rating, QString p_department);
    Doctor(QString p_name,  int p_id, double p_rating, DateAndTime p_earliestDate);

    QString name;
    int id;
    QString department;

    QString getName();
    int getId();
    double getrating();
    DateAndTime getearliestdate();
    QString getDepartment();

    void setid(int ID);
    void setrating(double R);
    void setearliestdate(DateAndTime ED);

    double showrating();
    void set_appointment(Patient p);


    // void examine();
    void requestBloodTest();
};
#endif
