#include <iostream>  
#include <string>  

using namespace std;

class calculator
{
private:
	float _value = 0;
	float _result = 0;
	float _previousResult = 0;
	string _operation = "clear";
	string _previousOperation = "clear";

public:
	void add(float value)
	{
		_value = value;
		_previousResult = _result;
		_previousOperation = _operation;
		_result += value;
		_operation = "add";
	}
	void subtract(float value)
	{
		_value = value;
		_previousResult = _result;
		_previousOperation = _operation;
		_result -= value;
		_operation = "subtract";
	}
	void multiply(float value)
	{
		_value = value;
		_previousResult = _result;
		_previousOperation = _operation;
		_result *= value;
		_operation = "multiply";
	}
	void divide(float value)
	{
		_value = value;
		if (value == 0) {
			value = 1; // Prevent division by zero
		}
		_previousResult = _result;
		_previousOperation = _operation;
		_result /= value;
		_operation = "divide";
	}
	void clear()
	{
		_previousResult = _result;
		_previousOperation = _operation;
		_result = 0;
		_operation = "clear";
	}
	void getResult() const
	{
		cout << "Result after " << _operation << " " << _value << " is " << _result << endl;
	}
	void getPreviousResult() const
	{
		cout << "Previous result after " << _previousOperation << " "
			<< _value << " was " << _previousResult << endl;
	}


};
int main()
{
	calculator calc;
	calc.clear();
	calc.add(10);
	calc.getResult(); // Should return 10
	calc.add(10);
	//calc.clear();
	calc.getResult(); // Should return 20
	calc.subtract(5);
	calc.getResult(); // Should return 15/if clear 5
	calc.multiply(2);
	calc.getResult(); // Should return 30/if clear 10
	calc.divide(2);
	calc.getResult(); // Should return 15
	calc.getPreviousResult(); // Should return 30 after multiply


}
