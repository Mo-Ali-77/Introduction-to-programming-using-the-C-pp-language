#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 50
// Problem: #32
int ReadNumber(int& Number)
{
	cout << "Please enter number: ";
	cin >> Number;
	return Number;
}

int ReadExponent(int& Exponent)
{
	cout << "Please enter Exponent: ";
	cin >> Exponent;
	return Exponent;
}

int Power_Of_N(int Exponent, int Number)
{
	int multipul_self = 1;
	int i = 1;
	while (i <= Exponent)
	{
		multipul_self *= Number;
		i++;
	}
	return multipul_self;
}

int main()
{
	int Number, Exponent = 0;
	cout << Number << " of Exponent " << Exponent << " = " << Power_Of_N(ReadExponent(Exponent), ReadNumber(Number));

	return 0;
}