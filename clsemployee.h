#pragma once
#include "clsperson.h"
using namespace std;
class clsemployee : public clsperson
{
private:
	string _jobTitle;
	double _salary;
public:
	clsemployee(string ID, string first_name, string last_name, string addrss,
		string phone, string Emaile, int age, string jobTitle, double salary)
		: clsperson(ID, first_name, last_name, addrss, phone, Emaile, age)
	{
		_jobTitle = jobTitle;
		_salary = salary;
	}
	void setJobTitle(string jobTitle)
	{
		_jobTitle = jobTitle;
	}
	void setSalary(double salary)
	{
		_salary = salary;
	}
	string getJobTitle()
	{
		return _jobTitle;
	}
	double getSalary()
	{
		return _salary;
	}
	void print()
	{
		clsperson::print(); // Call the base class print method
		cout << string(50, '*') << endl;
		cout << "\tJob Title: " << _jobTitle << endl;
		cout << "\tSalary   : " << _salary << endl;
	}

};
