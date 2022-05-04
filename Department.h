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
    Department(QString p_departmentType);

    QString getDepartmentType();
    void setDepartmentType(QString p_departmentType);

    QString assignDoctor();
    QString assignRoom();
};
#endif
