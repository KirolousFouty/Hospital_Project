#include "Department.h"
Department::Department()
{
    department_type="cardio";
}
Department::Department(QString DT)
{
    department_type=DT;
}
QString Department::getdepartment_type()
{
    return department_type;
}
void Room:: setdepartment_type(QString DT)
{
    department_type=DT;
}
QString Department::assign_doctor()
{
    ///////////////////////////////////////////
}
QString Department::assign_room()
{
    //////////////////////////////////////////
}