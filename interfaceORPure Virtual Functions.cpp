#include<iostream>
#include<string>


using namespace std;
class clsMobile //pure virtual function 
{
	virtual void Dile_Number(string phone_number) = 0;
	virtual void Send_SMS(string Phone_number, string sms) = 0;
	virtual void Take_pictuer() = 0;
};

class clsIphone : clsMobile
{
public:
	void Dile_Number(string phone_number)
	{

	};
	void Send_SMS(string Phone_number, string sms)
	{

	};
	void Take_pictuer()
	{

	};

};

class clsSamsong : clsMobile
{
public:
		void Dile_Number(string phone_number)
	{

	};
	void Send_SMS(string Phone_number, string sms) 
	{

	};
	void Take_pictuer() 
	{

	};

	void calender() //added in samsong 
	{
	
	
	};

};
int main()
{
	//clsMobile Mobile; //can't make object from pure virtual function 

	clsIphone iphone;
	clsSamsong samsong;

	string number;
	string sms;

	iphone.Dile_Number(number);
	iphone.Send_SMS(number, sms);
	iphone.Take_pictuer();


	samsong.Dile_Number(number);
	samsong.Send_SMS(number, sms);
	samsong.Take_pictuer();
	samsong.calender();//------------------added in samsong

}