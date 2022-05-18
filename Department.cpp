#include "Department.h"

Department::Department()
{
    this->departmentType = "cardio";
}

Department::Department(QString p_departmentType)
{
    this->departmentType = p_departmentType;
}

QString Department::getDepartmentType()
{
    return this->departmentType;
}

void Department::setDepartmentType(QString p_departmentType)
{
    this->departmentType = p_departmentType;
}

QString Department::assignDoctor()
{

    if (this->departmentType == "cardiology")
        return "Ahmad";

    if (this->departmentType == "dermaotology")
        return "Ayman";

    if (this->departmentType == "neurology")
        return "Adam";
    return "";
}

QString Department::assignRoom()
{
    //////////////////////////////////////////
    return "";
}
