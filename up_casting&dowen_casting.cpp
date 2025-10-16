#include<iostream>
#include<string>


using namespace std;

class clsperson
{

public:
	string Name = "Hesham";
	int age = 25;
};
class clsemplyee : public clsperson
{

public:
	string titel;
	string department;
};
int main()
{
	clsperson p1;

	clsemplyee  e1;
	clsperson* p2 = &e1;

	cout << "p2->Name " << p2->Name << endl;
	//cout << p2.titel;
	cout << "its up casting" << endl;
	cout << string(20, '#');
	//clsemplyee* e2 = &p1; //down casting unavailable
}