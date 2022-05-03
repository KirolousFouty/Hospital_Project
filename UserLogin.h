#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <iostream>
#include <QString>
#include "Patient.h"

using namespace std;

class UserLogin : public Patient
{
protected:
    QString username;
    QString password;

public:
    UserLogin();
    UserLogin(QString User, QString Pass);

    QString getusername();
    QString getpassword();

    void setusername(QString U);
    void setpassword(QString P);

    void login();
    void user_information_getter();
};

#endif // !userlogin_H
