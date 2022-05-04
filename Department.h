#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <QString>
#include "DateAndTime.h"
#include "Room.h"
#include "Doctor.h"

using namespace std;

// class Department : public DateAndTime : public Doctor
class Department
{
protected:
    QString departmentType;

public:
    Department();
    Department(QString DT);

    QString getDepartmentType();
    void setDepartmentType(QString DT);

    QString assign_doctor();
    QString assign_room();
};
#endif
