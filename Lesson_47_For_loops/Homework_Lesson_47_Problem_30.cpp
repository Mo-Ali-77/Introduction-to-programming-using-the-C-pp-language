#include<iostream>

using namespace std;


// Problem: #30
unsigned int ReadNumber(unsigned int& Number)
{
	cout << "Please enter the positive number: ";
	cin >> Number;
	return Number;
}

unsigned int Factorial_Of_N(unsigned int Number)
{
	unsigned int Factorial = 1;
	for (unsigned int i = 1; i <= Number; i++)
	{
		Factorial *= i;
	}
	return Factorial;
}

int main()
{
	unsigned int Number;
	cout << "Factorial of " << Number << " = " << Factorial_Of_N(ReadNumber(Number)) << endl;

	return 0;
}