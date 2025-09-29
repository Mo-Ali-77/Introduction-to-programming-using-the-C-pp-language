#include<iostream>
#include<string>
using namespace std;

int main()
{

	//  IF...Else conditional:
	int x;

	cout << "Please enter your number? \n";
	cin >> x;

	if (x > 5)
	{
		cout << "No, x is grater than 5" << endl;
	}
	else
	{
		cout << "No, x is less than 5" << endl;
	}
	cout << "The code after if body always executed." << endl << endl;

	return 0;
}