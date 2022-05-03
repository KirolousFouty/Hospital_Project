#include "Pharmacy.h"

Pharmacy ::Pharmacy()
{
    assigned_medicine_from_doctor=" ";
}
Pharmacy ::Pharmacy(Qstring M)
{
    assigned_medicine_from_doctor=M;
}
Pharmacy::setMed(Qstring M)
{
    assigned_medicine_from_doctor=M;
}
Pharmacy::getMed()
{
    return assigned_medicine_from_doctor;
}
Pharmacy::getMedicine_fromDoctor()
{
    ////////////////////////
}