#ifndef DRUGS_H
#define DRUGS_H

#include <iostream>
#include <QString>
#include "Pharmacy.h"

using namespace std;

template <class T>
class Drugs : public Pharmacy
{
private:
    double price;

public:
    Drugs<T>();
    Drugs<T>(double p_price);
    void setPrice(double p_price);

    double getPrice();
    void purchase();
};

#endif
