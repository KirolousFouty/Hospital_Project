#include <iostream>
#include <QString>
#include "Patient.h"
using namespace std;

#ifndef payment_H
#define payment_H
class Payment
{
protected:
    QString payment_choice;
    float invoice_for_insured;
public:
    Payment();
    Payment(QString PC, float IFI);

    QString getpayment_choice();
    float getinvoice_for_insured();

    void setpayment_choice(QString PC);
    void setinvoice_for_insured(float IFI);

    float send_invoice();
    double calculate_amount();
    int calculate_new_points();
    
};
#endif