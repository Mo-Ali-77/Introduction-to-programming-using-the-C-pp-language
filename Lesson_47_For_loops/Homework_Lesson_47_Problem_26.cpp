#include<iostream>
#include<string>
using namespace std;


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
	for (int i = 1; i <= Number; i++)
		cout << i << endl;
}

int main()
{
	int Number;
	Print_1_to_N(ReadNumber(Number));
	
	return 0;
}