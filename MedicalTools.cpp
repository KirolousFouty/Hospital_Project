#include "MedicalTools.h"

MedicalTools::MedicalTools()
{
    this->price = 0.0;
}
MedicalTools::MedicalTools(double p_price)
{
    this->price = p_price;
}
void MedicalTools::setPrice(double p_price)
{
    this->price = p_price;
}
double MedicalTools::getPrice()
{
    return this->price;
}
void MedicalTools::Purchase()
{
    ////////////////////////
}