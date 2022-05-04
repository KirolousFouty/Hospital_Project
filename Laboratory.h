#ifndef LABORATORY_H
#define LABORATORY_H

#include <iostream>
#include <QString>

using namespace std;

class Laboratory
{
private:
    QString typeOfTest;

public:
    Laboratory();
    Laboratory(QString p_typeOfTest);
    void setTest(QString p_typeOfTest);
    QString getTest();

    QString test_results();
};

#endif