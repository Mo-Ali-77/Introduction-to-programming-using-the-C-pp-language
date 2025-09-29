#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 50
// Problem: #28
int ReadNumber(int& Number)
{
	cout << "Please enter Number: " << endl;
	cin >> Number;
	return Number;
}

int Sum_Even_Number(int Number)
{
	int sum = 0;
	int i = 0;
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
	cout << "Sum Even number = " << Sum_Even_Number(ReadNumber(Number)) << endl;

	return 0;
}