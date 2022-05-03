#include "MedicalTools.h"

MedicalTools::MedicalTools()
{
    price=0.0;
}
MedicalTools::MedicalTools(double P)
{
    price=P;
}
void MedicalTools::setPrice(double P)
{
    price=P;
}
double MedicalTools::getPrice()
{
    return price;
}
void MedicalTools::Purchase()
{
    ////////////////////////
}