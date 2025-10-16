#include<iostream>
#include<string>


using namespace std;

class clsperson
{
private:
	int _Id;
	string _FirstName;
	string _LastName;
	string _Mail;
	string _Phone;
	string _Fullname()
	{
		return _FirstName + " " + _LastName;
	}
public:
	clsperson(int Id, string FirstName, string LastName, string Mail, string Phone)
	{
		_Id = Id;
		_FirstName = FirstName;
		_LastName = LastName;
		_Mail = Mail;
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
	void set_Mail(string Mail)
	{
		_Mail = Mail;
	}
	string get_Mail()
	{
		return _Mail;
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
		cout << "Full name : " << _Fullname() << endl;
		cout << "Email     : " << _Mail << endl;
		cout << "Phone     : " << _Phone << endl;
	}
	void send_Email(string subjct, string contanant)
	{
		cout << string(50, '*') << endl;
		cout << "\tMail sent to : " << _Fullname() << "/ " << get_Mail() << endl;
		cout << subjct << endl;
		cout << contanant << endl;
		cout << string(50, '*') << endl;
	}
	void send_SMS(string subjct, string contanant)
	{
		cout << string(50, '-') << endl;
		cout << "\tSMS sent to : " << _Fullname() << "/ " << _Phone << endl;
		cout << subjct << endl;
		cout << contanant << endl;
		cout << string(50, '-') << endl;
	}

};

int main()
{

	clsperson person1(01, "Hesham", "Ghzal", "Ghzal@gmail.com", "012225554");
	person1.print();
	person1.send_Email("Hi", "How are you- Email");
	person1.send_SMS("Hi", "How are you-SMS");

	cout << string(50, '-') << endl;

	clsperson person2(02, "Koka", "Ghzal", "Koka@gmail.com", "02255889");
	person2.print();
	person2.send_Email("Hi", "How are you- Email");
	person2.send_SMS("Hi", "How are you-SMS");

}