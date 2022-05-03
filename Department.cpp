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
    //for(int i=0; i<3; i++)
    //{
        if (department_type=="cardiology")
        return "Ahmad";
    //}
        if(department_type=="dermaotology")
        return "Ayman";

        if(department_typr=="neurology")
        return "Adam";

    
}
QString Department::assign_room()
{
    //////////////////////////////////////////
    return "";
}
