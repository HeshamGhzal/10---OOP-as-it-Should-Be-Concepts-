#pragma once

using namespace std;
class clsperson
{
private:
	string _ID;
	string _FirstName;
	string _LastName;
	string _address;
	string _phone;
	string _emaile;
	string _name() { return _FirstName + " " + _LastName; }
	int _age;

public:
	clsperson(string ID, string first_name, string last_name, string address,
		string phone, string Email, int age)
	{
		_ID = ID;
		_FirstName = first_name;
		_LastName = last_name;
		_address = address;
		_phone = phone;
		_emaile = Email;
		_age = age;
	}
	void setFirstName(string name)
	{
		_FirstName = name;
	}
	void setLastName(string name)
	{
		_LastName = name;
	}
	void setAddress(string address)
	{
		_address = address;
	}
	void setPhone(string phone)
	{
		_phone = phone;
	}
	void setEmail(string email)
	{
		_emaile = email;
	}
	void setAge(int age)
	{
		_age = age;
	}

	string getID()
	{
		return _ID;
	}
	string getName()
	{
		return _name();
	}
	string getAddress()
	{
		return _address;
	}
	string getPhone()
	{
		return _phone;
	}
	string getEmail()
	{
		return _emaile;
	}
	int getAge()
	{
		return _age;
	}

	void sendEmail(string email)
	{
		cout << "--Email sent to " << email << endl;
	}
	void sendSMS(string phone)
	{
		cout << "--SMS sent to " << phone << endl;
	}

	virtual void print()
	{
		cout << "\tID     : " << _ID << endl;
		cout << "\tName   : " << _name() << endl;
		cout << "\tAddress: " << _address << endl;
		cout << "\tPhone  : " << _phone << endl;
		cout << "\tEmail  : " << _emaile << endl;
		cout << "\tAge    : " << _age << endl;
	}
};


