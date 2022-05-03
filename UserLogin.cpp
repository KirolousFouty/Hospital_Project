#include "UserLogin.h"

UserLogin::UserLogin()
{
	username = "nour";
	password = "selim";
}
UserLogin::UserLogin(QString User, QString Pass)
{
	username = User;
	password = Pass;
}
QString UserLogin::getusername()
{
	return username;
}
QString UserLogin::getpassword()
{
	return password;
}
void UserLogin::setusername(QString U)
{
	username = U;
}
void UserLogin::setpassword(QString P)
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
