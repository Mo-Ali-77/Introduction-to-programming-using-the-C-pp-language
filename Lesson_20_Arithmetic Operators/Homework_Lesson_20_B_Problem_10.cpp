#include<iostream>

using namespace std;


int main()
{
	// Problem #10:

	float avr, Mark1, Mark2, Mark3;
	cout << "Please, Enter the first mark: ";
	cin >> Mark1;
	cout << "Please, Enter the first mark: ";
	cin >> Mark2;
	cout << "Please, Enter the first mark: ";
	cin >> Mark3;
	avr = (Mark1 + Mark2 + Mark3) / 3;
	cout << "The average = " << avr;


	return 0;
}