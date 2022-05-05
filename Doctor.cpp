#include "Doctor.h"
#include "Laboratory.h"
Doctor::Doctor()
{
    //    id = 0;
    this->rating = 0.0;
    //    earliestDate=0;
}

Doctor::Doctor(QString p_name, int p_id, double p_rating, QString p_department)
{
    this->name = p_name;
    this->id = p_id;
    this->rating = p_rating;
    this->department = p_department;
}

Doctor::Doctor(QString p_name, int p_id, double p_rating, DateAndTime p_earliestDate)
{
    this->name = p_name;
    this->id = p_id;
    this->rating = p_rating;
    this->earliestDate = p_earliestDate;
}

QString Doctor::getName()
{
    return this->name;
}

int Doctor::getId()
{
    return this->id;
}
double Doctor::getRating()
{
    return this->rating;
}
DateAndTime Doctor::getEarliestDate()
{
    return this->earliestDate;
}
void Doctor::setId(int p_id)
{
    id = p_id;
}
void Doctor::setRating(double p_rating)
{
    this->rating = p_rating;
}
void Doctor::setEarliestDate(DateAndTime p_earliestDate)
{
    this->earliestDate = p_earliestDate;
}
double Doctor::showRating()
{
    // ui->display->SetText("Rating: " + rating);
    return 0;
}
void Doctor::setAppointment(Patient p_patient)
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

QString Doctor::getDepartment()
{
    return this->department;
}
