#include "Department.h"

Department::Department()
{
    this->departmentType = "cardio";
}

Department::Department(QString DT)
{
    this->departmentType = DT;
}

QString Department::getDepartmentType()
{
    return this->departmentType;
}

void Department::setDepartmentType(QString DT)
{
    this->departmentType = DT;
}

QString Department::assign_doctor()
{
    // for(int i=0; i<3; i++)
    //{
    if (this->departmentType == "cardiology")
        return "Ahmad";
    //}
    if (this->departmentType == "dermaotology")
        return "Ayman";

    if (this->departmentType == "neurology")
        return "Adam";
}

QString Department::assign_room()
{
    //////////////////////////////////////////
    return "";
}
