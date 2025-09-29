#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 50
// Problem: #26
int ReadNumber(int& Number)
{
	cout << "Please enter Number: ";
	cin >> Number;
	return Number;
}

void Print_1_to_N(int Number)
{
	cout << "From 1 to " << Number << ":" << endl;
	int i = 1;
	while (i <= Number)
	{
		cout << i << endl;
		i++;
	}
}

int main()
{
	int Number;
	Print_1_to_N(ReadNumber(Number));
	
	return 0;
}