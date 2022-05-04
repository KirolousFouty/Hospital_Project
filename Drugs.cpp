#include "Drugs.h"

Drugs::Drugs()
{
    this->price = 0.0;
}
Drugs::Drugs(double p_price)
{
    this->price = p_price;
}
void Drugs::setPrice(double p_price)
{
    this->price = p_price;
}
double Drugs::getPrice()
{
    return this->price;
}
void Drugs::purchase()
{
    //////////////
}