#ifndef LABORATORY_H
#define LABORATORY_H

#include <iostream>
#include <QString>

using namespace std;

class Laboratory
{
private:
Qstring type_of_test;

public:
Laboratory();
Laboratory(Qstring T);
void setTest(Qstring T);
Qstring getTest();

Qstring test_results();
}

#endif