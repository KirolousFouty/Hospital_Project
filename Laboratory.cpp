#include "Laboratory.h"

Laboratory ::Laboratory()
{
    type_of_test=" ";
}
Laboratory ::Laboratory(Qstring T)
{
    type_of_test=T;
}
Laboratory::setTest(Qstring T)
{
    type_of_test=T;
}
Laboratory::getTest()
{
    return type_of_test;
}
Laboratory::test_results()
{
    ////////////////////////
}