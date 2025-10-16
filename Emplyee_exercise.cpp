#include<iostream>
#include<string>


using namespace std;


class clsemplyee
{
private:
	int _Id;
	string _FirstName;
	string _LastName;
	string _Title;
	string _Email;
	string _Phone;
	string _Salary;
	string _Department;
	string _Full_Name()
	{
		return _FirstName + " " + _LastName;
	}
public:
	clsemplyee(int Id, string FirstName, string Last_Name, string Titel,
		string Email, string Phone, string Salary, string Department)
	{
		_Id = Id;
		_FirstName = FirstName;
		_LastName = Last_Name;
		_Title = Titel;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
		_Department = Department;
	}
	int get_Id()
	{
		return _Id;
	}
	void set_First_Name(string FirstName)
	{
		_FirstName = FirstName;
	}
	string get_First_Name()
	{
		return _FirstName;
	}
	void set_Last_Name(string LastName)
	{
		_LastName = LastName;
	}
	string get_Last_Name()
	{
		return _LastName;
	}
	void set_Titel(string Title)
	{
		_Title = Title;
	}
	string getTitel()
	{
		return _Title;
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
	string getPhone()
	{
		return _Phone;
	}
	void set_Salary(string Salary)
	{
		Salary = Salary;
	}
	string get_Salary()
	{
		return _Salary;
	}
	void set_Department(string Department)
	{
		_Department = Department;
	}
	string get_Department()
	{
		return _Department;
	}
	string get_Full_Name()
	{
		return _Full_Name();
	}
	void print()
	{
		cout << _Full_Name() << " Information" << endl;
		cout << string(30, '*') << endl;
		cout << "ID         : " << _Id << endl;
		cout << "Name       : " << _Full_Name() << endl;
		cout << "Title      : " << _Title << endl;
		cout << "Email      : " << _Email << endl;
		cout << "Phone      : " << _Phone << endl;
		cout << "Salary     : " << _Salary << endl;
		cout << "Department : " << _Department << endl;
		cout << string(30, '*') << endl;

	}
	void Send_Email(string Subject, string Body)
	{
		cout << string(30, '=') << endl;
		cout << "Email sent to : " << _Full_Name() << "/ " << _Email << endl;
		cout << "Subject : " << Subject << endl;
		cout << Body << endl;
		cout << string(30, '=') << endl;
	}
	void Send_SMS(string txt_massege)
	{
		cout << string(30, '-') << endl;
		cout << "SMS sent to : " << _Full_Name() << "/" << _Phone << endl;
		cout << txt_massege << endl;
		cout << string(30, '-') << endl;
	}

};
int main()
{
	clsemplyee Emplyee1(01, "Hesham", "Ghzal",
		"Programmer", "Ghzal@gmail", "0120045", "50000", "IT");
	Emplyee1.print();
	Emplyee1.Send_Email("Hi", "This Email sent to you");
	Emplyee1.Send_SMS("This Txt message sent to you ");

	clsemplyee Emplyee2(02, "Koka", "Ghzal",
		"Student", "Koka@gmail", "022258", "Non", "school");
	Emplyee2.print();
	Emplyee2.Send_Email("Hi", "This Email sent to you");
	Emplyee2.Send_SMS("This Txt message sent to you ");
}