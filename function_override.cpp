#include<iostream>
#include<string>


using namespace std;

class clsperson
{
private:
	int _Id;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
	string _FullName()
	{
		return _FirstName + " " + _LastName;
	}
public:
	clsperson(int Id, string FirstName, string LastName, string Email, string Phone)
	{
		_Id = Id;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}
	int get_Id()
	{
		return _Id;
	}
	void set_FirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	string get_FirstName()
	{
		return _FirstName;
	}
	void set_LastName(string LastName)
	{
		_LastName = LastName;
	}
	string get_LastName()
	{
		return _LastName;
	}
	string get_FullName()
	{
		return _FullName();
	}
	void set_Email(string Email)
	{
		_Email = Email;
	}
	string get_Email()
	{
		return _Email;
	}
	void set_Phone(string Phone)
	{
		_Phone = Phone;
	}
	string get_Phone()
	{
		return _Phone;
	}
	void print()
	{
		cout << _FullName() << " Information" << endl;
		cout << string(30, '-') << endl;
		cout << "Full name : " << _FullName() << endl;
		cout << "Email     : " << _Email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << string(30, '-') << endl;
	}
	void Send_Email(string Subject, string Body)
	{
		cout << string(50, '=') << endl;
		cout << "Email sent to : " << _FullName() << "/ " << _Email << endl;
		cout << "Subject : " << Subject << endl;
		cout << Body << endl;
		cout << string(50, '=') << endl;
	}
	void Send_SMS(string txt_massege)
	{
		cout << string(50, '*') << endl;
		cout << "SMS sent to : " << _FullName() << "/" << _Phone << endl;
		cout << txt_massege << endl;
		cout << string(50, '*') << endl;
	}

};

class clsemplyee :public clsperson
{
private:
	string _Title;
	string _Department;
	float _Salary;

public:
	clsemplyee(int Id, string FirstName, string LastName, string Email,
		string Phone, string Title, string Department, float Salary)
		:clsperson(Id, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Salary = Salary;
		_Department = Department;
	}

	void set_Title(string Title)
	{
		_Title = Title;
	}
	string getTitle()
	{
		return _Title;
	}
	void set_Department(string Department)
	{
		_Department = Department;
	}
	string get_Department()
	{
		return _Department;
	}
	void set_Salary(string Salary)
	{
		Salary = Salary;
	}
	float get_Salary()
	{
		return _Salary;
	}

	void print()//to override print fun in person class
	{
		//	clsperson::print();//to call print fun in person class

		cout << "\t" << get_FullName() << " Information" << endl;
		cout << string(40, '-') << endl;
		cout << "Full name   : " << get_FullName() << endl;
		cout << "Email       : " << get_Email() << endl;
		cout << "Phone       : " << get_Phone() << endl;
		cout << "Title       : " << _Title << endl;
		cout << "Department  : " << _Department << endl;
		cout << "Salary      : " << _Salary << endl;
		cout << string(40, '-') << endl;
	}


};
int main()
{
	clsemplyee Emplyee1(01, "Hesham", "Ghzal",
		"Ghzal@gmail", "0120045", "Programmer", "IT", 50000);
	Emplyee1.print();
	Emplyee1.Send_Email("Hi", "This Email sent to you");
	Emplyee1.Send_SMS("This Txt message sent to you ");

}