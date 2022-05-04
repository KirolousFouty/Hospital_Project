#include "Payment.h"

Payment::Payment()
{
    this->paymentChoice = "cash";
    this->invoiceForInsured = 0.0;
}
Payment::Payment(QString p_paymentChoice, float p_invoiceForInsured)
{
    this->paymentChoice = p_paymentChoice;
    this->invoiceForInsured = p_invoiceForInsured;
}
QString Payment::getPaymentChoice()
{
    return this->paymentChoice;
}
float Payment::getInvoiceForInsured()
{
    return this->invoiceForInsured;
}
void Payment ::setPaymentChoice(QString p_paymentChoice)
{
    this->paymentChoice = p_paymentChoice;
}
void Payment::setInvoiceForInsured(float p_invoiceForInsured)
{
    this->invoiceForInsured = p_invoiceForInsured;
}
float Payment::sendInvoice()
{
    ///////////////////////////////
    return 0.0;
}
double Payment::calculateAmount()
{
    ///////////////////////////////
    return 0.0;
}
int Payment::calculateNewPoints()
{
    ////////////////////////////////////
    return 0;
}
