#ifndef LABORATORY_H
#define LABORATORY_H

#include <iostream>
#include <QString>

using namespace std;

class Laboratory
{
private:
    QString type_of_test;

public:
    Laboratory();
    Laboratory(QString T);
    void setTest(QString T);
    QString getTest();

    QString test_results();
};

#endif