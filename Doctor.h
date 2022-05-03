#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include <QString>
#include "DateAndTime.h"

using namespace std;
class Doctor
{
protected:
    int id[3]={1,2,3};
    QByteArray name[3]={"Ahmed", "Adam", "Ayman"};

private:
    double rating;
    DateAndTime earliestdate;

public:
    Doctor();
    Doctor(int ID, double R, DateAndTime ED);

    int getid();
    double getrating();
    DateAndTime getearliestdate();

    void setid(int ID);
    void setrating(double R);
    void setearliestdate(DateAndTime ED);

    double showrating();
    void set_appointment();
    // void examine();
    void requestBloodTest();
};
#endif
