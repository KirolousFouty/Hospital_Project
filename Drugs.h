#ifndef DRUGS_H
#define DRUGS_H

#include <iostream>

using namespace std;

class Drugs
{
private:
double price;

public:
Drugs();
Drugs(double P);
void setPrice(double P);

double getPrice();
void Purchase();
};

#endif