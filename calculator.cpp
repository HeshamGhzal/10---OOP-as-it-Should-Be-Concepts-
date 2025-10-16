#include<iostream>


using namespace std;

class clscalculator
{
private:
	float _number = 0;
	float  _previous_number = 0;
	float _result = 0;
	float _previous_result = 0;
	float _befor_previous_result = 0;
	string _operator;
	string _previos_operator;
	float prevent_zero(float n)
	{
		if (n == 0) {
			cout << "*****Warning: Division by zero. Using 1 instead.*****" << endl;
		}
		return(n == 0 ? 1 : n);
	}
public:
	void clear()
	{
		_previous_result = _result;
		_previous_number = _number;
		_previos_operator = _operator;
		_result = 0;
		_number = 0;
		_operator = "cleared";
		cout << "\tcleared" << endl;
	}
	void add(float n)
	{
		_befor_previous_result = _previous_result;
		_previous_result = _result;
		_previous_number = _number;
		_previos_operator = _operator;
		_number = n;
		_operator = "adding";

		_result += n;
	}
	void subtract(float n)
	{
		_befor_previous_result = _previous_result;
		_previous_result = _result;
		_previous_number = _number;
		_previos_operator = _operator;
		_number = n;
		_operator = "subtracting";

		_result -= n;
	}
	void multiply(float n)
	{
		_befor_previous_result = _previous_result;
		_previous_result = _result;
		_previous_number = _number;
		_previos_operator = _operator;
		_number = n;
		_operator = "multiplying";

		_result *= n;
	}
	void divide(float n)
	{
		_befor_previous_result = _previous_result;
		_previous_result = _result;
		_previous_number = _number;
		_previos_operator = _operator;
		_number = n;
		_operator = "dividing";

		_result /= prevent_zero(n);
	}
	void print_result()
	{
		cout << " Result after [" << _previous_result << "] " << _operator << " [" << _number << "] is : " << _result << endl;
	}
	void print_previus_result()
	{
		cout << " Result before last operation [" << _befor_previous_result << "] " << _previos_operator
			<< " [" << _previous_number << "] was : " << _previous_result << endl;
	}

};

int main()
{
	clscalculator calc;
	calc.add(5);
	calc.print_result();
	calc.add(105);
	calc.print_result();
	//calc.clear();
	calc.divide(2);
	calc.print_result();
	calc.print_previus_result();
	calc.multiply(3);
	calc.print_result();
	calc.print_previus_result();
	calc.add(5);
	calc.print_result();
	calc.add(15);
	calc.print_result();
	//calc.clear();
	calc.divide(2);
	calc.print_result();
	calc.print_previus_result();
	calc.multiply(3);
	calc.print_result();
	calc.print_previus_result();

}