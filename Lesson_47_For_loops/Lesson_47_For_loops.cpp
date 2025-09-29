#include<iostream>
#include<string>
using namespace std;

int main()
{

	for (int i = 1; i <= 5; i++)
	{
		cout << "Mohammed Al-Amoudi " << i <<  endl;
	}
	cout << endl;

	for (int i = 1; i <= 100; i++)
	{
		cout << "Sob7an Allah " << i << endl;
	}

	// Print Number 1 to 5
	for (int i = 5; i >= 1; i--)
		cout << i << endl;
	cout << endl;

	// Print Number 1 to 10
	for (int i = 1; i <= 10; i++)
		cout << i << endl;
	cout << endl;

	// Print Number 10 to 1
	for (int i = 10; i >= 1; i--)
		cout << i << endl;
	cout << endl;

	// Print odd Number only
	for (int i = 1; i <= 10; i = i + 2)
		cout << i << endl;
	cout << endl;

	// Print even Number only
	for (int i = 0; i <= 10; i = i + 2)
		cout << i << endl;
	cout << endl;

	return 0;
}