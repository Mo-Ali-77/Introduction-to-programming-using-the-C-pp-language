#include<iostream>

using namespace std;

int main()
{
	// Problem #31:

	unsigned int number, squr, cabe, squr4;
	cout << "Please, Enter the number: ";
	cin >> number;
	squr = number * number;
	cabe = number * number * number;
	squr4 = number * number * number * number;
	cout << "The square of " << number << " = " << squr << endl;
	cout << "The cabe of " << number << " = " << cabe << endl;
	cout << "The square four of " << number << " = " << squr4 << endl;

	return 0;
}