#include<iostream>

using namespace std;


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
	for (int i = Number; i >= 1; i--)
		cout << i << endl;
}

int main()
{
	int Number;
	Print_N_to_1(ReadNumber(Number));

	return 0;
}