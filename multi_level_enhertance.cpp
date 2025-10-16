#include<iostream>
#include<string>


using namespace std;

class clsA
{
private:
	int var1 = 1;
	int func1()
	{
		return 1;
	}
protected:
	int var2 = 2;
	int func2()
	{
		return 2;
	}
public:
	int var3 = 3;
	int func3()
	{
		var1 = 10;
		func1();

		var2 = 20;
		func2();

		return 3;
	}
};

class clsB :public clsA
{
public:
	int var4 = 4;
	int func4()
	{
		clsA::func2(); // Accessing protected member from clsA
		clsA::func3(); // Accessing public member from clsA

		clsA::var2;    // Accessing protected member from clsA
		clsA::var3;    // Accessing public member from clsA
		return 4;
	}
};

class clsC :public clsB
{
public:
	int var5 = 5;
	int func5()
	{
		clsA::func2();  // Accessing protected member from clsA
		clsA::func3();	// Accessing public member from clsA
		clsA::var2;	    // Accessing protected member from clsA
		clsA::var3;	    // Accessing public member from clsA
		clsB::func4();	// Accessing public member from clsB
		clsB::var4;	    // Accessing public member from clsB
		return 5;
	}
};

int main()
{
	clsA a;
	cout << "clsA Calling public function from clsA    :" << a.func3() << endl; // Calling public function from clsA
	cout << "clsA Accessing public variable from clsA  :" << a.var3 << endl;    // Accessing public variable from clsA

	clsB b;
	cout << "clsB Calling public function from clsA    :" << b.func3() << endl; // Calling public function from clsA
	cout << "clsB Accessing public variable from clsA  :" << b.var3 << endl;    // Accessing public variable from clsA
	cout << "clsB Calling public function from clsB    :" << b.func4() << endl; // Calling public function from clsB
	cout << "clsB Accessing public variable from clsB  :" << b.var4 << endl;    // Accessing public variable from clsB

	clsC c;
	cout << "clsC Calling public function from clsB    :" << c.func4() << endl; // Calling public function from clsB
	cout << "clsC Accessing public variable from clsB  :" << c.var4 << endl;    // Accessing public variable from clsB
	cout << "clsC Calling public function from clsC    :" << c.func5() << endl; // Calling public function from clsC
}