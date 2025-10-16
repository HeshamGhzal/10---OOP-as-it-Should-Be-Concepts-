#include<iostream>
#include<string>


using namespace std;

class clsperson
{
	class clsaddress
	{


	public:
		string address;
		string country;

		void print()
		{
			cout << "Address : " << address << endl;
			cout << "Country : " << country << endl;
		}
	};

public:
	clsaddress address;
	string Name;
	clsperson()
	{
		Name = "Hesham ghzal";
		address.address = "Alex";
		address.country = "Egypt";

	}


};

int main()
{
	clsperson person1;

	cout << "Name    : " << person1.Name << endl;
	person1.address.print();
}