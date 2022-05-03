#include "Laboratory.h"

Laboratory::Laboratory()
{
    type_of_test = " ";
}

Laboratory::Laboratory(QString T)
{
    type_of_test = T;
}

void Laboratory::setTest(QString T)
{
    type_of_test = T;
}

QString Laboratory::getTest()
{
    return type_of_test;
}

QString Laboratory::test_results()
{
    ////////////////////////
}