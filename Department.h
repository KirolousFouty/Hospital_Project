#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <QString>
#include "DateAndTime.h"
#include "Room.h"
#include "Doctor.h"

using namespace std;

class Department : public DateAndTime :public Doctor
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
