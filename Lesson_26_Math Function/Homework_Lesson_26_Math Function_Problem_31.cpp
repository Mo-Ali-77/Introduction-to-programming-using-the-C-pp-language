#include<iostream>

using namespace std;

int main()
{
	// Problem #31

	double number, squr, cabe, squr4;
	cout << "Please, Enter the number: ";
	cin >> number;
	squr = pow(number, 2);
	cabe = pow(number, 3);
	squr4 = pow(number, 4);
	cout << "The square of " << number << " = " << round(squr) << endl;
	cout << "The cabe of " << number << " = " << round(cabe) << endl;
	cout << "The square four of " << number << " = " << round(squr4) << endl;

	return 0;
}