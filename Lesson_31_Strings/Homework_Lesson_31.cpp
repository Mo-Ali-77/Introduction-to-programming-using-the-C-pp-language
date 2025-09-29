#include<iostream>
#include<string>
using namespace std;

int main()
{
	// Homework: Lesson 31

	string string1, string2, string3;

	cout << "Please, enter string1: " << "\n";
	getline(cin, string1);
	cout << endl;

	cout << "Please, enter string2: " << "\n";
	cin >> string2;
	cout << endl;

	cout << "Please, enter string3: " << "\n";
	cin >> string3;
	cout << endl;

	cout << "*******************************************" << "\n";
	cout << "The lengh of string1 is: " << string1.length() << "\n";
	cout << "charactores at 0, 2, 4, 7 are: " << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << "\n";
	cout << "Concatenating string2 and string3 = " << string2 + string3 << "\n";

	int Result = stoi(string2) * stoi(string3);
	cout << string2 << " * " << string3 << " = " << Result << endl;

	return 0;
}