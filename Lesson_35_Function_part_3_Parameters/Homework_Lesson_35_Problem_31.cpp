#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #31

int PowerOf2(int Number)
{
	return Number * Number;
}
int PowerOf3(int Number)
{
	return Number * Number * Number;
}
int PowerOf4(int Number)
{
	return Number * Number * Number * Number;
}

int main()
{
	int Number, Result;

	cout << "Enter the number to power two ,three and four:\n";
	cin >> Number;
	Result = PowerOf2(Number);
	cout << "The power2 of " << Number << " = " << Result << endl << endl;

	Result = PowerOf3(Number);
	cout << "The power3 of " << Number << " = " << Result << endl << endl;

	Result = PowerOf4(Number);
	cout << "The power4 of " << Number << " = " << Result << endl << endl;

	return 0;
}