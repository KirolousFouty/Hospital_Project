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
    UserLogin(QString p_username, QString p_password);

    QString getUsername();
    QString getPassword();

    void setUsername(QString p_username);
    void setPassword(QString p_password);

    void login();
    void userInformationGetter();
};

#endif // !userlogin_H
