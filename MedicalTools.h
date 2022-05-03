#ifndef MEDICALTOOLS_H
#define MEDICALTOOLS_H

#include <iostream>

using namespace std;

class MedicalTools
{
private:
double price;

public:
MedicalTools();
MedicalTools(double P);
void setPrice(double P);

double getPrice();
void Purchase();
};

#endif