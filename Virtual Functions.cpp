#include<iostream>
#include<string>

using namespace std;

class clsperson
{
public:
	virtual void name()// Virtual function for polymorphism
	{
		cout << "i'am a Person" << endl;
	}
};
class clsemployee : public clsperson
{
public:
	void name()
	{
		cout << "i'am an Employee" << endl;
	}
};
class clsmanager : public clsperson
{
public:
	void name()
	{
		cout << "i'am a Manager" << endl;
	}
};

int main()
{
	clsperson person1;
	clsemployee employee1;
	clsmanager manager1;
	person1.name(); // Output: Person
	employee1.name(); // Output: Employee
	manager1.name(); // Output: Manager

	clsperson* ptr1 = &employee1; // Pointer to Employee	
	clsperson* ptr2 = &manager1; // Pointer to Manager
	ptr1->name();// Output: Employee
	ptr2->name(); // Output: Manager
}