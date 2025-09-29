#include<iostream>
#include<string>
using namespace std;



// Problem: #49
struct strPIN
{
	unsigned short PIN;
};

void ReadPIN(strPIN &PIN)
{
	cout << "Enter your PIN:\n";
	cin >> PIN.PIN;
}

void PrintBalance(strPIN PIN)
{
	if (PIN.PIN == 1234)
	{
		cout << "Your Balance is: 7500\n";
	}
	else
	{
		cout << "Wrong PIN\n";
	}
}

void Set_ReadPIN(strPIN PINs[2])
{
	unsigned Counter = 1;
	cout << "PIN " << Counter << ":\n";
	Counter++;
	ReadPIN(PINs[0]);
	cout << "PIN " << Counter << ":\n";
	ReadPIN(PINs[1]);
}

void Set_PrinBalance(strPIN PINs[2])
{
	unsigned Counter = 1;
	cout << "PIN " << Counter << ":\n";
	Counter++;
	PrintBalance(PINs[0]);
	cout << "PIN " << Counter << ":\n";
	PrintBalance(PINs[1]);
}

int main() 
{
	

	// Problem #49:
	// Balance display for one person.
	strPIN PIN;
	ReadPIN(PIN);
	PrintBalance(PIN);
	cout << "\n\n";

	// Balance display for two person.
	strPIN PINs[2];
	Set_ReadPIN(PINs);
	Set_PrinBalance(PINs);


	return 0;
}