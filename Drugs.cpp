#include "Drugs.h"

Drugs::Drugs()
{
    price=0.0;
}
Drugs::Drugs(double P)
{
    price=P;
}
void Drugs::setPrice(double P)
{
    price=P;
}
double Drugs::getPrice()
{
    return price;
}
void Drugs::Purchase()
{
    ////////////////////////
}