#include "Doctor.h"
#include "Laboratory.h"
Doctor::Doctor()
{
    //    id = 0;
    rating = 0.0;
    //    earliestdate=0;
}

Doctor::Doctor(QString p_name,  int p_id, double p_rating, QString p_department)
{
    this->name = p_name;
    this->id = p_id;
    this->rating = p_rating;
    this->department = p_department;
}

Doctor::Doctor(QString p_name,  int p_id, double p_rating, DateAndTime p_earliestDate)
{
    this->name = p_name;
    this->id = p_id;
    this->rating = p_rating;
    this->earliestdate = p_earliestDate;
}

QString Doctor::getName(){
    return name;
}

int Doctor::getId()
{
     return id;
}
double Doctor::getrating()
{
    return rating;
}
DateAndTime Doctor::getearliestdate()
{
    return earliestdate;
}
void Doctor::setid(int ID)
{
    // id = ID;
}
void Doctor::setrating(double R)
{
    rating = R;
}
void Doctor::setearliestdate(DateAndTime ED)
{
    earliestdate = ED;
}
double Doctor::showrating()
{
    // ui->display->SetText("Rating: " + rating);
    return 0;
}
void Doctor::set_appointment(Patient p)
{
    // need to know the database we will use
    //  use Department::assign_doctor()?
}
// void Doctor::examine()
// {
//////////////////////////
// }

void Doctor::requestBloodTest()
{
    Laboratory BloodTest; // Declared in mainwindow and passed as a parameter
    BloodTest.test_results();
}

QString Doctor::getDepartment(){
    return this->department;
}
