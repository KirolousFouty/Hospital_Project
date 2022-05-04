#include "Pharmacy.h"

Pharmacy ::Pharmacy()
{
    assigned_medicine_from_doctor = " ";
}
Pharmacy ::Pharmacy(QString M)
{
    assigned_medicine_from_doctor = M;
}
void Pharmacy::setMed(QString M)
{
    assigned_medicine_from_doctor = M;
}
QString Pharmacy::getMed()
{
    return assigned_medicine_from_doctor;
}
QString Pharmacy::getMedicine_fromDoctor()
{
    ////////////////////////
}
