#include<iostream>
#include<string>
using namespace std;

int main()
{

	// Homework: Lesson 52 [My solution]
	int Arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
	cout << "The Array = {";
	for (int j = 0; j <= Arr[j]; j++)
	{
		cout << Arr[j] << ", ";
	}
	cout << " }\n";

	int SearchFor;
	cout << "\nEnter Number From Above Array to Search it? ";
	cin >> SearchFor;
	for (int i = 0; i <= Arr[i] ; i++)
	{

		if (Arr[i] == SearchFor)
		{
			cout << "It is in position Number " << i << endl;
			break;
		}
	}

	return 0;
}