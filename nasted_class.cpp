#include<iostream>
#include<string>


using namespace std;

class clsperson // outer class
{

	class clsaddress// inner class
	{
		string _Address;
		string _Country;
	public:

		clsaddress(string address, string country)// constructor of inner class
		{
			_Address = address;
			_Country = country;
		}
		void set_Address(string add)
		{
			_Address = add;
		}
		string get_Address()
		{
			return _Address;
		}

		void set_Country(string Coun)
		{
			_Country = Coun;
		}
		string get_Country()
		{
			return _Country;
		}
		void print()
		{
			cout << "Address : " << _Address << endl;
			cout << "Country : " << _Country << endl;
		}
	};
private:
	string _Full_Name;
public:
	clsaddress ADdress = clsaddress("", "");// object of inner class
	clsperson(string name, string address, string country)// constructor of outer class
	{
		_Full_Name = name;
		ADdress = clsaddress(address, country);// initialize object of inner class
	}
	string get_fullname()
	{
		return _Full_Name;
	}
	void print()
	{
		cout << "NAME    : " << _Full_Name << endl;
		cout << "Address : " << ADdress.get_Address() << endl;
		cout << "Country : " << ADdress.get_Country() << endl;
	}

};

int main()
{

	clsperson person1("Hesham ghzal", "Alex", "Egypt");
	cout << "Name    : " << person1.get_fullname() << endl;
	person1.ADdress.print();// print inner class data

	cout << string(20, '#') << endl;
	person1.print();// print outer class data and inner class data
	cout << string(20, '#') << endl;

	clsperson person2("Koka ghzal", "Cairo", "Egypt");
	cout << "Name    : " << person2.get_fullname() << endl;
	person2.ADdress.print();// print inner class data

	cout << string(20, '#') << endl;
	person2.print();// print outer class data and inner class data

}