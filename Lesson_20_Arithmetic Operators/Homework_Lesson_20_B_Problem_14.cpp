#include<iostream>

using namespace std;


int main()
{
	// Problem #14:

	unsigned short num1, num2, temp;
	cout << "Please, Enter the first number: ";
	cin >> num1;
	cout << "Please, Enter the second number: ";
	cin >> num2;
	cout << "The number before swaping: " << num1 << ", " << num2 << endl;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "The number after swaping: " << num1 << ", " << num2;


	return 0;
}