#pragma once
#include <iostream>
#include <string>
#include "Patient.h"

using namespace std;

#ifndef USERLOGIN_H
#define USERLOGIN_H
class UserLogin:public Patient
{
protected:
	string username;
	string password;
public:
    UserLogin();
    UserLogin(string User, string Pass);

    string getusername();
    string getpassword();

    void setusername(string U);
    void setpassword(string P);

	void login();
	void user_information_getter();

};

















#endif // !userlogin_H

