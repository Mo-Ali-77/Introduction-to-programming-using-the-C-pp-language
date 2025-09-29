#include<iostream>

using namespace std;


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

int Power_Of_N(int Number, int Exponent)
{
	int multipul_self = 1;
	for (int i = 1; i <= Exponent; i++)
	{
		multipul_self *= Number;
	}
	return multipul_self;
}

int main()
{
	int Number, Exponent;
	cout << "The number of power " << Exponent << " = " << Power_Of_N(ReadExponent(Exponent), ReadNumber(Number));

	return 0;
}