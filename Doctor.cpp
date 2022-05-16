#include "Doctor.h"
#include "Laboratory.h"
Doctor::Doctor()
{
//        id = 0;
    this->rating = 0.0;
    //    earliestDate=0;
}

Doctor::Doctor(QString p_name, int p_id, double p_rating, QString p_department)
{
    this->name = p_name;
    this->id = p_id;
    this->rating = p_rating;
    this->department = p_department;

//    (int p_hour, int p_minute, int p_day, int p_month, int p_year)


    DateAndTime dt1(9, 0, 21, 5, 2022);
    DateAndTime dt2(10, 0, 21, 5, 2022);
    DateAndTime dt3(11, 0, 21, 5, 2022);
    DateAndTime dt4(12, 0, 21, 5, 2022);
    DateAndTime dt5(1, 0, 21, 5, 2022);
    DateAndTime dt6(2, 0, 21, 5, 2022);
    DateAndTime dt7(3, 0, 21, 5, 2022);


    this->timeList.push_back(dt1);
    this->timeList.push_back(dt2);
    this->timeList.push_back(dt3);
    this->timeList.push_back(dt4);
    this->timeList.push_back(dt5);
    this->timeList.push_back(dt6);
    this->timeList.push_back(dt7);


    this->earliestDate = this->timeList.first();

}

Doctor::Doctor(QString p_name, int p_id, double p_rating, double p_fees, QString p_department){
    this->name = p_name;
    this->id = p_id;
    this->rating = p_rating;
    this->fees = p_fees;
    this->department = p_department;

//    (int p_hour, int p_minute, int p_day, int p_month, int p_year)


    DateAndTime dt1(9, 0, 21, 5, 2022);
    DateAndTime dt2(10, 0, 21, 5, 2022);
    DateAndTime dt3(11, 0, 21, 5, 2022);
    DateAndTime dt4(12, 0, 21, 5, 2022);
    DateAndTime dt5(1, 0, 21, 5, 2022);
    DateAndTime dt6(2, 0, 21, 5, 2022);
    DateAndTime dt7(3, 0, 21, 5, 2022);


    this->timeList.push_back(dt1);
    this->timeList.push_back(dt2);
    this->timeList.push_back(dt3);
    this->timeList.push_back(dt4);
    this->timeList.push_back(dt5);
    this->timeList.push_back(dt6);
    this->timeList.push_back(dt7);


    this->earliestDate = this->timeList.first();
}

Doctor::Doctor(QString p_name, int p_id, double p_rating, DateAndTime p_earliestDate)
{
    this->name = p_name;
    this->id = p_id;
    this->rating = p_rating;
    this->earliestDate = p_earliestDate;
}

QString Doctor::getName() const
{
    return this->name;
}

int Doctor::getId() const
{
    return this->id;
}
double Doctor::getRating() const
{
    return this->rating;
}
DateAndTime Doctor::getEarliestDate() const
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
    Laboratory BloodTest; // to be declared in mainwindow and passed as a parameter
    BloodTest.test_results();
}

QString Doctor::getDepartment() const
{
    return this->department;
}

void Doctor::setAddTimeList(DateAndTime dt){
    this->timeList.push_back(dt);
}

void Doctor::setRemoveTimeList(DateAndTime dt){
    this->timeList.removeOne(dt);
}

QVector<DateAndTime> Doctor::getTimeList() const{
    return this->timeList;
}

bool Doctor::operator==(const Doctor &d)
{
    return (this->id == d.id);
}

double Doctor::getFees() const{
    return this->fees;
}
