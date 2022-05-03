#include "Payment.h"
Payment::Payment()
{
    payment_choice="cash";
    invoice_for_insured=0.0;
}
Payment::Payment(QString PC, float IFI)
{
    payment_choice=PC;
    invoice_for_insured=IFI;
}
QString Payment::getpayment_choice()
{
    return payment_choice;
}
float Payment::getinvoice_for_insured()
{
    return invoice_for_insured;
}
void Payment ::setpayment_choice(QString PC)
{
    payment_choice=PC;
}
void Payment::setinvoice_for_insured(float IFI)
{
    invoice_for_insured=IFI
}
float Payment::send_invoice()
{
    ///////////////////////////////
}
double Payment::calculate_amount()
{
    ///////////////////////////////
}
int Payment::calculate_new_points()
{
    ////////////////////////////////////
}