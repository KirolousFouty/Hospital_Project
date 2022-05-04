#ifndef PHARMACY_H
#define PHARMACY_H

#include <iostream>
#include <QString>

using namespace std;

class Pharmacy
{
private:
    QString assignedMedicineFromDoctor;

public:
    Pharmacy();
    Pharmacy(QString p_assignedMedicineFromDoctor);

    void setMed(QString p_assignedMedicineFromDoctor);
    QString getMed();
    QString getMedicineFromDoctor();
};

#endif
