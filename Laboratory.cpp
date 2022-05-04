#include "Laboratory.h"

Laboratory::Laboratory()
{
    this->typeOfTest = " ";
}

Laboratory::Laboratory(QString p_typeOfTest)
{
    this->typeOfTest = p_typeOfTest;
}

void Laboratory::setTest(QString p_typeOfTest)
{
    this->typeOfTest = p_typeOfTest;
}

QString Laboratory::getTest()
{
    return this->typeOfTest;
}

QString Laboratory::test_results()
{
    ////////////////////////
}