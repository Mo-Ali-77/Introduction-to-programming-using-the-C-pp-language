#include<iostream>

using namespace std;


// Problem: #28
int ReadNumber(int& Number)
{
	cout << "Please enter number: " << endl;
	cin >> Number;
	return Number;
}

int Sum_Odd_Number(int Number)
{
	int sum = 0;
	for (int i = 1; i <= Number; i += 2)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int Number;
	cout << "Sum odd number = " << Sum_Odd_Number(ReadNumber(Number)) << endl;

	return 0;
}