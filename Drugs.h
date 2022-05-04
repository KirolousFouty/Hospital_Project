#ifndef DRUGS_H
#define DRUGS_H

#include <iostream>
#include <QString>
#include "Pharmacy.h"

using namespace std;

class Drugs : public Pharmacy
{
private:
    double price;

public:
    Drugs();
    Drugs(double p_price);
    void setPrice(double p_price);

    double getPrice();
    void purchase();
};

#endif