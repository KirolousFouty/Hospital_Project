#include "UserLogin.h"

UserLogin::UserLogin()
{
	username = "nour";
	password = "selim";
}
UserLogin::UserLogin(string User, string Pass)
{
	username = User;
	password = Pass;
}
string UserLogin::getusername()
{
	return username;
}
string UserLogin::getpassword()
{
	return password;
}
void UserLogin::setusername(string U)
{
	username = U;
}
void UserLogin::setpassword(string P)
{
	password = P;
}
void UserLogin::login()
{
	/////////////////////////////////////////
}
void UserLogin::user_information_getter()
{
	/////////////////////////////////////
}
