#include "UserLogin.h"

UserLogin::UserLogin()
{
	this->username = "nour";
	this->password = "selim";
}
UserLogin::UserLogin(QString p_username, QString p_password)
{
	this->username = username;
	this->password = p_password;
}
QString UserLogin::getUsername()
{
	return this->username;
}
QString UserLogin::getPassword()
{
	return this->password;
}
void UserLogin::setUsername(QString p_username)
{
	this->username = p_username;
}
void UserLogin::setPassword(QString p_password)
{
	this->password = p_password;
}
void UserLogin::login()
{
	/////////////////////////////////////////
}
void UserLogin::userInformationGetter()
{
	/////////////////////////////////////
}
