#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 50
// Problem: #27
int ReadNumber(int& Number)
{
	cout << "Please enter Number: ";
	cin >> Number;
	return Number;
}

void Print_N_to_1(int Number)
{
	cout << "From " << Number << " to 1" << ":" << endl;
	while (Number >= 1)
	{
		cout << Number << endl;
		Number--;
	}
}

int main()
{
		int Number;
		Print_N_to_1(ReadNumber(Number));

	return 0;
}