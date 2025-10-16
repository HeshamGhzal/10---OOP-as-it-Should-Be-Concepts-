#include<iostream>


using namespace std;

class clsA
{
private:
	int _var1;
protected:
	int _var2;
public:
	int var3 = 20;
	clsA()
	{
		_var1 = 10;
		_var2 = 30;
		var3 = 50;
	}

	friend int sum(clsA a);
};

int sum(clsA a)
{
	return a._var1 + a._var2 + a.var3;
}

int main()
{
	clsA a;
	cout << sum(a);
	return 0;
}