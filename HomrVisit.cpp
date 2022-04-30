#include "HomeVisit.h"
using namespace std;

HomeVisit::HomeVisit()
{
	home_address = "auc";
	symptoms = "unknown";
}
HomeVisit::HomeVisit(QString HA, QString S)
{
	home_address = HA;
	symptoms = S;
}
QString HomeVisit::gethome_address()
{
	return home_address;
}
QString HomeVisit::getsymptoms()
{
	return symptoms;
}
void HomeVisit::sethome_address(QString HA)
{
	home_address = HA;
}
void HomeVisit::setsymptoms(QString S)
{
	symptoms = S;
}
QString HomeVisit::request_doctor()
{
	//////////////////////////////////
}