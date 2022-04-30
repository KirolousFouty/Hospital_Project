#pragma once
#include <iostream>
#include <string>
#include "Patient.h"

using namespace std;

#ifndef userlogin_H
#define userlogin_H
class UserLogin:public Patient
{
protected:
	string username;
	string password;
public:
    UserLogin();
    UserLogin(string US, string P);

    string getusername();
    string getpassword();

    void setusername(string US);
    void setpassword(string P);

	void login();
	void user_information_getter();

};

















#endif // !userlogin_H

