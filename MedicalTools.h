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
    MedicalTools(double p_price);
    void setPrice(double p_price);

    double getPrice();
    void Purchase();
};

#endif