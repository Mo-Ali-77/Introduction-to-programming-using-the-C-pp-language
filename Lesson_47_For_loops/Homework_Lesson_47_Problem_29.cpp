#include<iostream>

using namespace std;


// Problem: #29
int ReadNumber(int& Number)
{
	cout << "Please enter Number: " << endl;
	cin >> Number;
	return Number;
}

int Sum_Even_Number(int Number)
{
	int sum = 0;
	for (int i = 0; i <= Number; i += 2)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int Number;
	cout << "Sum Even number = " << Sum_Even_Number(ReadNumber(Number)) << endl;

	return 0;
}