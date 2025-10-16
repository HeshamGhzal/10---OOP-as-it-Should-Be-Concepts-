#include<iostream>

#include"clsperson.h"
#include"clsemployee.h"
#include"clsmanager.h"


using namespace std;

int main()
{
	/*clsperson person1("001", "Hesham", "ghzal", "Egypt-Alex",
		"012255", "ghzal@gmail", 50);// Creating a person object
	person1.print();

	cout << string(50, '#') << endl;

	clsperson person2("002", "Ahmed", "ghzal", "Egypt-Cairo",
		"012345", "ahmed@gmail", 30);
	person2.setFirstName("Ali");
	person2.setLastName("Shahen");
	person2.setAddress("Egypt-Giza");
	person2.setPhone("0123456789");
	person2.setEmail("ali@gmail");
	person2.setAge(25);
	person2.print();

	cout << string(50, '#') << endl;

	person1.sendEmail(person1.getEmail());
	person2.sendEmail(person2.getEmail());
	person1.sendSMS(person1.getPhone());
	person2.sendSMS(person2.getPhone());*/

	cout << string(50, '#') << endl;

	clsemployee employee1("E001", "Sara", "Saeed", "Egypt-Mansoura",
		"012456", "sara@gmail", 28, "Software Engineer", 5000.0);// Creating an employee object
	employee1.print();

	cout << string(50, '#') << endl;

	employee1.setFirstName("Sara");
	employee1.setLastName("Ali");
	employee1.print();

	cout << string(50, '#') << endl;

	clsmanager manager1("M001", "Mohamed", "Ali", "Egypt-Aswan",
		"012789", "mohamed@gmail", 40, "Project Manager", 8000.0, "IT Department");
	/*manager1.print();
	manager1.sendEmail(manager1.getEmail());
	manager1.sendSMS(manager1.getPhone());

	cout << string(50, '#') << endl;*/

	//clsperson* personPtr = &employee1;// Upcasting to base class pointer
	//personPtr->print(); // Polymorphism in action
	//cout << string(50, '#') << endl;

	//clsperson* personPtr2 = &manager1;
	//personPtr2->print(); // Polymorphism in action

}