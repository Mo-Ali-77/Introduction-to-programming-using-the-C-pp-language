#include<iostream>

using namespace std;

int main()
{
	// Problem #32

	double Number, Exponent;
	cout << "Please, Enter the Number: ";
	cin >> Number;
	cout << "Please, Enter the Exponent: ";
	cin >> Exponent;
	cout << "The result of " << Number << " exponent " << Exponent << " = " << round(pow(Number, Exponent));

	return 0;
}