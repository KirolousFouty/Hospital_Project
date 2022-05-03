#include <iostream>
#include <QString>
#include "DateAndTime.h"
using namespace std; 

#ifndef DOCTOR_H
#define DOCTOR_H
class Doctor
{
protected:
    int id;
    
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
  //void examine();  
    void requestBloodTest();
    


};
#endif
