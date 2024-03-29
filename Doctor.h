#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include <QString>
#include <QVector>
#include <ctime>

#include "DateAndTime.h"
#include "Patient.h"

using namespace std;
class Doctor
{
private:
    double rating;
    DateAndTime earliestDate;
    QString name;
    int id;
    QString department;
    double fees;

public:
    Doctor();
    Doctor(QString p_name, int p_id, double p_rating, QString p_department);
    Doctor(QString p_name, int p_id, double p_rating, double p_fees, QString p_department);
    Doctor(QString p_name, int p_id, double p_rating, DateAndTime p_earliestDate);

    QString getName() const;
    int getId() const;
    double getRating() const;
    DateAndTime getEarliestDate() const;
    QString getDepartment() const;

    void setId(int p_id);
    void setRating(double p_rating);
    void setEarliestDate(DateAndTime p_earliestDate);

    double showRating();
    void setAppointment(Patient p_patient);

    // void examine();
    void requestBloodTest();
    QVector<DateAndTime> timeList;
    void setAddTimeList(DateAndTime dt);
    void setRemoveTimeList(DateAndTime dt);
    QVector<DateAndTime> getTimeList() const;
    bool operator==(const Doctor &d);
    double getFees() const;

    bool approve() const;
};
#endif
