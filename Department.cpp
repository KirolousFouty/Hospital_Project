#include "Department.h"

Department::Department()
{
    department_type = "cardio";
}
Department::Department(QString DT)
{
    department_type = DT;
}
QString Department::getdepartment_type()
{
    return department_type;
}
void Department::setdepartment_type(QString DT)
{
    department_type = DT;
}
QString Department::assign_doctor()
{
    ///////////////////////////////////////////
    return "";
}
QString Department::assign_room()
{
    //////////////////////////////////////////
    return "";
}
