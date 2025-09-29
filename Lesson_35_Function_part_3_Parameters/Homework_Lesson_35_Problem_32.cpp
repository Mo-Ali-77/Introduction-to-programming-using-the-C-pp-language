#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #32

int Power(int Number, int expon)
{
	return pow(Number, expon);
}

int main()
{
	int Number, Expon, Result;
	cout << "Enter the Number:\n";
	cin >> Number;
	cout << "Enter the Expon:\n";
	cin >> Expon;
	Result = Power(Number, Expon);
	cout << "The result = " << Result;

	return 0;
}