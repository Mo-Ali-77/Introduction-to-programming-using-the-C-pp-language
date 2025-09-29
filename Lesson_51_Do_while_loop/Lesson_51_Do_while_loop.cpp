#include<iostream>
#include<string>
using namespace std;

// This example using Do....While better than using While.
int ReadIntNumberInRange(int From, int To)
{
	int Number;
	do
	{
		cout << "Please enter the number between " << From << " and " << To << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}


int main()
{
	cout << "The Number You Entered is " << ReadIntNumberInRange(1, 10) << endl;

	return 0;
}