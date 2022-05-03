#include <iostream>
#include <QString>
#include "DateAndTime.h"
using namespace std;

#ifndef DEPARTMENT_H
#define DEPARTMENT_H
class Department:public DateAndTime
{
    protected:
    QString department_type;
    public:
    Department();
    Department(QString DT);

    QString getdepartment_type();
    void setdepartment_type(QString DT);

    QString assign_doctor();
    QString assign_room();


};
#endif
