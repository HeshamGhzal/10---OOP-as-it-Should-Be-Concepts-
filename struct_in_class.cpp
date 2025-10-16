#include<iostream>
#include<string>


using namespace std;

class clsperson
{

	struct stperson
	{
		string name;
		string adress;
		string phone;
	};

public:
	string country;
	string school;
	stperson person;

	clsperson()
	{
		person.name = "Hesham ghzal";
		person.adress = "Alex";
		person.phone = "11122254";
		country = "Egypt";
		school = "techable";
	}

	void print()
	{
		cout << "Name   : " << person.name << endl;
		cout << "Adress : " << person.adress << endl;
		cout << "Phone  : " << person.phone << endl;
		cout << "Country: " << country << endl;
		cout << "school : " << school << endl;
	}

};

int main()
{
	clsperson person1;
	person1.print();
	person1.person.name = "koka";
	person1.person.adress = "Cairo";
	person1.person.phone = "7777777";
	person1.print();

}