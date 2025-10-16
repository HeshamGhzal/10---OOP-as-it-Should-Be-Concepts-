#include<iostream>


using namespace std;

class clsA
{
private:
	int _var1;

public:
	int var2 = 20;
	clsA()
	{
		_var1 = 10;
		var2 = 50;
	}

	friend class clsB; // Declare clsB as a friend class
};
class clsB :public clsA
{
public:
	void func2(clsA a)
	{

		cout << "The value of var1 is :" << a._var1 << endl;// Accessing private member _var1 of clsA
		cout << "The value of var2 is :" << a.var2 << endl; // Accessing public member var2 of clsA
	}
	
};
int main()
{
	clsA a;
	clsB b;
	b.func2(a);
	

	return 0;
}