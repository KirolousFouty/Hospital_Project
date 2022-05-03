#include "Doctor.h"
#include "Laboratory.h"
Doctor::Doctor()
{
    id = 0;
    rating = 0.0;
    //    earliestdate=0;
}
Doctor::Doctor(int ID, double R, DateAndTime ED)
{
    id = ID;
    rating = R;
    earliestdate = ED;
}
int Doctor::getid()
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
    id = ID;
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
    //ui->display->SetText("Rating: " + rating);
    return 0;
}
void Doctor::set_appointment()
{
    //need to know the database we will use
    // use Department::assign_doctor()?

}
// void Doctor::examine()
// {
//////////////////////////
// }

void Doctor::requestBloodTest()
{
    Laboratory BloodTest;
    BloodTest.test_Results;

}
