#include<iostream>
#include<string>
using namespace std;

int main()
{
	// Example:
	/*for (int i = 1; i <= 10; i++)
	{
		// condition to break
		if (i == 3)
		{
			break;
		}

		cout << i << endl;
	}*/

	// Homework: Lesson 52 [My solution]
	/*int Arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
	cout << "The Array = {";
	for (int j = 0; j <=Arr[j]; j++)
	{
		cout << Arr[j] << ", ";
	}
	cout << " }\n";
	for (int i = 0; i <= Arr[i] ; i++)
	{

		if (Arr[i] == 20)
		{

			cout << "It is in position Number " << i << endl;
			break;
		}
	}*/
	// Homework: Lesson 52 [Solution By Abuhadhoud]

	// هذا الكود بدون البراك الاداء حقه بيكون بطيء
	/*int arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
	int SearchFor = 20;
	for (int i = 0; i <= 10; i++)
	{
		cout << "We are at iteration " << i + 1 << endl;
		if (SearchFor == arr[i])
		{
			cout << endl << SearchFor << " found at position " << i << endl << endl;
		}
	}*/

	// هذا الكود يحتوي على البراك فالاداء بيكون سريع
	/*int arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
	int SearchFor = 20;
	for (int i = 0; i <= 10; i++)
	{
		cout << "We are at iteration " << i + 1 << endl;
		if (SearchFor == arr[i])
		{
			cout << endl << SearchFor << " found at position " << i << endl << endl;
			break;
		}
	}*/


	return 0;
}