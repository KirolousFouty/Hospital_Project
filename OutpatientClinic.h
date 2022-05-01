	#pragma once
	#include <iostream>
	#include <string>
	using namespace std;

	#ifndef outpatientclinic_H
	#define outpatientcline_H
	class OutpatientClinic
	{
	private:
		//-Position : pair<x : double, y : double>
		string speciality;
	public:
		OutpatientClinic();
		OutpatientClinic(string S);

		string getspecialty();

		void setspeciality(string S);

	};
	#endif // !outpatientclinic_H
