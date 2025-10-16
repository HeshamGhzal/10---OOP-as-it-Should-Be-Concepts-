#include<iostream>
#include<string>


using namespace std;

class clsA
{

public:
	static int func1()
	{
		return 10;
	}
	int func2()
	{
		return 20;
	}
};

int main()
{
	clsA aa, bb, cc;

	cout << "static fun1 without object : " << clsA::func1() << endl;
	cout << "static fun1 with object aa : " << aa.func1() << endl;
	cout << string(40, '-') << endl;
	cout << "Normal fun2 without object : " << "clsA::func2() show an error" << endl;
	cout << "Normal fun2 with object aa : " << aa.func2() << endl;

}