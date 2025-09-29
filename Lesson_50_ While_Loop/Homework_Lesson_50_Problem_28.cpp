#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 50
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
	int i = 1;
	while (i <= Number)
	{
		sum += i;
		i += 2;
	}
	return sum;
}

int main()
{
	int Number;
	cout << "Sum odd number = " << Sum_Odd_Number(ReadNumber(Number)) << endl;

	return 0;
}