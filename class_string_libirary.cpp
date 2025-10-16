#include<iostream>
#include<vector>
#include"clsstring.h"
using namespace std;




int main()
{
	clsstring string1;
	string1.value = "            Hesham Ahmed Najub Abdel Hmed Ghzal     ";
	cout << "count_each_word_in_string : " << string1.count_each_word_in_string() << endl;
	cout << "count_lower_litter : " << string1.count_lower_litter() << endl;
	cout << "count_upper_litter : " << string1.count_upper_litter() << endl;
	cout << "splet_each_word_in_string : \n";
	string1.read_vector(string1.splet_each_word_in_string());
	cout << "to_lower_string : " << string1.to_lower_string() << "|" << endl;
	cout << "to_upper_string : " << string1.to_upper_string() << "|" << endl;
	cout << string(60, '#') << endl;
	cout << "Count_each_word_in_string Without object : " << clsstring::count_each_word_in_string("Ali Hassan Saloka Hmmad") << endl;
	cout << "left Term : " << string1.print_string_with_left_termed() << endl;
	cout << "Right & Lift Term : " << string1.print_string_with_right_and_left_termed() << endl;
	cout << "With out spaces : ";
	string1.print_string_without_space();
}#include<iostream>
#include<vector>
#include"clsstring.h"
using namespace std;




int main()
{
	clsstring string1;
	string1.value = "            Hesham Ahmed Najub Abdel Hmed Ghzal     ";
	cout << "count_each_word_in_string : " << string1.count_each_word_in_string() << endl;
	cout << "count_lower_litter : " << string1.count_lower_litter() << endl;
	cout << "count_upper_litter : " << string1.count_upper_litter() << endl;
	cout << "splet_each_word_in_string : \n";
	string1.read_vector(string1.splet_each_word_in_string());
	cout << "to_lower_string : " << string1.to_lower_string() << "|" << endl;
	cout << "to_upper_string : " << string1.to_upper_string() << "|" << endl;
	cout << string(60, '#') << endl;
	cout << "Count_each_word_in_string Without object : " << clsstring::count_each_word_in_string("Ali Hassan Saloka Hmmad") << endl;
	cout << "left Term : " << string1.print_string_with_left_termed() << endl;
	cout << "Right & Lift Term : " << string1.print_string_with_right_and_left_termed() << endl;
	cout << "With out spaces : ";
	string1.print_string_without_space();
}