#include<iostream>
#include<string>

using namespace std;

class clsA
{

public:
	int x = 1;
	static int y;
	clsA()
	{
		x += 1;
		y += 1;
	}
	void print(string object)
	{
		cout << object << ".x " << x << endl;
		cout << object << ".y " << y << endl;

	}

};
int clsA::y = 0;

int main()
{
	clsA aa, bb, cc, dd;
	cout << "y without object (y is a static members) " << clsA::y << endl;//without object
	cout << string(30, '-') << endl;
	aa.x = 10;
	bb.x = 20;
	cc.x = 30;
	dd.x = 40;

	aa.print("aa");
	bb.print("bb");
	cc.print("cc");
	dd.print("dd");

	cout << string(30, '-') << endl;
	aa.y = 500;
	bb.y = 70;
	cc.y = 900;
	dd.y = 800;
	cout << "\nafter changing (y) " << endl;
	aa.print("aa");
	bb.print("bb");
	cc.print("cc");
	dd.print("dd");

}