#include<iostream>

using namespace std;


int main()
{
	// Problem #9:

	int num1, num2, num3, sum;
	cout << "please, Enter the first number: ";
	cin >> num1;
	cout << "please, Enter the second number: ";
	cin >> num2;
	cout << "please, Enter the third number: ";
	cin >> num3;
	sum = num1 + num2 + num3;
	cout << "The summation of " << num1 << " + " << num2 << " + " << num3 << " = " << sum;

	return 0;
}