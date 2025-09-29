#include<iostream>
#include<string>
using namespace std;

// Example 3:
int ReadIntNumberInRange(int From, int To)
{
	int Number;
	cout << "Please enter number between " << From << " To " << To << endl;
	cin >> Number;
	while (Number < From || Number > To)
	{
		cout << "Wrong number, Plz enter Please enter number between " << From << " To " << To << endl;
		cin >> Number;
	}
	return Number;
}



int main()
{
	// Example for Explay:
	
	// Example 1:
	int i = 1;
	while (i <= 5)
	{
		cout << i << endl;
		i++;
	}
	cout << endl;

	// Example 2:
	int Number;
	cout << "Please enter postive number:\n";
	cin >> Number;
	while (Number < 0)
	{
		cout << "Wrong number, Please Enter postive number:\n";
		cin >> Number;
	}
	cout << "The number your entered: " << Number;
	cout << endl;

	// Example 3:
	cout << "The number you entered is " << ReadIntNumberInRange(18, 45) << endl;
	cout << endl;

	return 0;
}