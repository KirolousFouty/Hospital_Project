#ifndef PHARMACY_H
#define PHARMACY_H

#include <iostream>
#include <QString>

using namespace std;

class Pharmacy
{
private:
    QString assigned_medicine_from_doctor;

public:
    Pharmacy();
    Pharmacy(QString M);

    void setMed(QString M);
    QString getMed();
    QString getMedicine_fromDoctor();
};

#endif
