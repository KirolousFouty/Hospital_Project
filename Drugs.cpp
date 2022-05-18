#include "Drugs.h"

template <class T>
Drugs<T>::Drugs()
{
    this->price = 0.0;
}

template <class T>
Drugs<T>::Drugs(double p_price)
{
    this->price = p_price;
}

template <class T>
void Drugs<T>::setPrice(double p_price)
{
    this->price = p_price;
}

template <class T>
double Drugs<T>::getPrice()
{
    return this->price;
}

template <class T>
void Drugs<T>::purchase()
{
    //////////////
}