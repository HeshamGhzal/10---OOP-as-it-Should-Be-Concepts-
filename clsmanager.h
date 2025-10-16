#pragma once
#include"clsemployee.h"
using namespace std;
class clsmanager : public clsemployee
{
private:
	string _department;

public:
	clsmanager(string ID, string first_name, string last_name, string addrss,
		string phone, string Emaile, int age, string jobTitle, double salary, string department)
		: clsemployee(ID, first_name, last_name, addrss, phone, Emaile, age, jobTitle, salary)
	{
		_department = department;
	}
	void setDepartment(string department)
	{
		_department = department;
	}
	string getDepartment()
	{
		return _department;
	}
	void print()
	{
		cout << "\t\tManager Details:" << endl;
		cout << string(50, '*') << endl;
		cout << "\tID        : " << getID() << endl;
		cout << "\tName      : " << getName() << endl;
		cout << "\tAddress   : " << getAddress() << endl;
		cout << "\tPhone     : " << getPhone() << endl;
		cout << "\tEmail     : " << getEmail() << endl;
		cout << "\tAge       : " << getAge() << endl;
		cout << "\tJob Title : " << getJobTitle() << endl;
		cout << "\tSalary    : " << getSalary() << endl;
		cout << "\tDepartment: " << _department << endl;
	}
};