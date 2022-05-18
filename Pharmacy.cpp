#include "Pharmacy.h"

Pharmacy ::Pharmacy()
{
    this->assignedMedicineFromDoctor = " ";
}
Pharmacy ::Pharmacy(QString p_assignedMedicineFromDoctor)
{
    this->assignedMedicineFromDoctor = p_assignedMedicineFromDoctor;
}
void Pharmacy::setMed(QString p_assignedMedicineFromDoctor)
{
    this->assignedMedicineFromDoctor = p_assignedMedicineFromDoctor;
}
QString Pharmacy::getMed()
{
    return this->assignedMedicineFromDoctor;
}
QString Pharmacy::getMedicineFromDoctor()
{
    return "";
}
