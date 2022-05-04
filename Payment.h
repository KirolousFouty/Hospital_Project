#include <iostream>
#include <QString>
#include "Patient.h"
using namespace std;

#ifndef payment_H
#define payment_H
class Payment
{
protected:
    QString paymentChoice;
    float invoiceForInsured;

public:
    Payment();
    Payment(QString p_paymentChoice, float p_invoiceForInsured);

    QString getPaymentChoice();
    float getInvoiceForInsured();

    void setPaymentChoice(QString p_paymentChoice);
    void setInvoiceForInsured(float p_invoiceForInsured);

    float sendInvoice();
    double calculateAmount();
    int calculateNewPoints();
};
#endif