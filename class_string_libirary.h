#pragma once
#include<iostream>
#include<string>


using namespace std;
class clsstring
{
private:
	string _value;

public:
	clsstring()
	{

	}
	clsstring(string s)
	{
		_value = s;
	}
	void setstring(string st)
	{
		_value = st;
	}
	string getstring()
	{
		return _value;
	}

	static int count_each_word_in_string(string s)
	{
		string seprator = " ";
		int pos = s.find(seprator);
		string word = "";
		int counter = 0;


		while ((pos = s.find(seprator)) != string::npos)
		{
			word = s.substr(0, pos);
			if (word != "")
			{
				counter++;
			}
			s = s.substr(pos + seprator.length());
		}
		if (s != "")
			counter++;
		return counter;
	}
	int count_each_word_in_string()
	{
		return  count_each_word_in_string(_value);
	}
	string to_upper_string(string s)
	{
		string s1;
		for (int i = 0; i < s.length(); i++)
			s1 += toupper(s[i]);
		return s1;
	}
	string to_upper_string()
	{
		return to_upper_string(_value);
	}
	string to_lower_string(string s)
	{
		string s1;
		for (int i = 0; i < s.length(); i++)
			s1 += tolower(s[i]);
		return s1;
	}
	string to_lower_string()
	{
		return to_lower_string(_value);
	}
	int count_upper_litter(string s)
	{
		int counter = 0;

		for (int i = 0; i < s.size(); i++)
		{
			if (isupper(s[i]))
			{
				counter++;
			}
		}
		return counter;
	}
	int count_upper_litter()
	{
		return count_upper_litter(_value);
	}
	int count_lower_litter(string s)
	{
		int counter = 0;

		for (int i = 0; i < s.size(); i++)
		{
			if (islower(s[i]))
			{
				counter++;
			}
		}
		return counter;
	}
	int count_lower_litter()
	{
		return 	count_lower_litter(_value);

	}
	vector<string> splet_each_word_in_string(string s)
	{
		vector<string> vs;
		string seprator = " ";
		int pos = s.find(seprator);
		string word = "";
		int counter = 0;


		while ((pos = s.find(seprator)) != string::npos)
		{
			word = s.substr(0, pos);
			if (word != "")
			{
				vs.push_back(word);
			}
			s = s.substr(pos + seprator.length());
		}
		if (s != "")
			vs.push_back(s);
		return vs;
	}
	vector<string> splet_each_word_in_string()
	{
		return splet_each_word_in_string(_value);
	}
	void read_vector(vector<string> vs)
	{
		for (string w : vs)
		{
			(w != vs.back() ? cout << w << "\n" : cout << w);
		}
		cout << "\nNumber of word in the string is : " << vs.size() << "\n";
	}
	string print_string_with_left_termed(string s)
	{
		string space = " ";
		int pos = (s.find(space) + space.length());

		string left = s.substr(0, pos);

		while (left == space)
		{

			s.erase(0, pos);
			left = s.substr(0, pos);
		}
		return s;
	}
	string print_string_with_left_termed()
	{
		return print_string_with_left_termed(_value);
	}
	string trim_left(string s)
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] != ' ')
				return s.substr(i, s.length() - i);
		}
		return "";
	}
	string trim_left()
	{
		return trim_left(_value);
	}
	string print_string_with_right_termed(string s)
	{
		string space = " ";

		string right = s.substr(s.length() - 1, s.length() - 2);

		while (right == space)
		{

			s.erase(s.length() - 1, s.length() - 2);
			right = s.substr(s.length() - 1, s.length() - 2);
		}
		return s;
	}
	string print_string_with_right_termed()
	{
		return print_string_with_right_termed(_value);
	}
	string trim_right(string s)
	{
		for (int i = s.length() - 1; i > 0; i--)
		{
			if (s[i] != ' ')
				return s.substr(0, i + 1);
		}
		return "";
	}
	string trim_right()
	{
		return trim_right(_value);
	}
	string print_string_with_right_and_left_termed(string s)
	{
		s = print_string_with_right_termed(s);
		s = print_string_with_left_termed(s);
		return s;
	}
	string print_string_with_right_and_left_termed()
	{
		return print_string_with_right_and_left_termed(_value);
	}
	string tirm(string s)
	{
		s = trim_left(s);
		return trim_right(s);
	}
	string tirm()
	{
		return	tirm(_value);
	}
	void print_string_without_space(string s)
	{
		string word;
		int pos = s.find(" ");

		while ((pos = s.find(" ")) != string::npos)
		{
			word = s.substr(0, pos);

			if (word != "")
			{
				cout << word;
			}

			s = s.substr(pos);

			s.erase(0, 1);
		}
		if (s != "")
		{
			cout << s;
		}
	}
	void print_string_without_space()
	{
		return print_string_without_space(_value);
	}
	__declspec(property(get = getstring, put = setstring)) string value;
};

