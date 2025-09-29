#include<iostream>

using namespace std;

int main()
{
	// Problem #35:

	unsigned int Pennies, Nickels, Dimes, Quarters, Dollars;
	float TotalPennies, TotalDollars;
	cout << "Please, Enter the Pennies: ";
	cin >> Pennies;
	cout << "Please, Enter the Nickels: ";
	cin >> Nickels;
	cout << "Please, Enter the Nickels: ";
	cin >> Dimes;
	cout << "Please, Enter the Nickels: ";
	cin >> Quarters;
	cout << "Please, Enter the Nickels: ";
	cin >> Dollars;
	TotalPennies = (Pennies * 1) + (Nickels * 5) + (Dimes * 10) + (Quarters * 25) + (Dollars * 100);
	TotalDollars = TotalPennies / 100;
	cout << "The total pennies = " << TotalPennies << endl << "The total Dollars = " << TotalDollars;

	return 0;
}