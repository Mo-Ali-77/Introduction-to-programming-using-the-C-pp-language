#include <iostream>
#include<string>
using namespace std;

// A practical, real-world example of using Enums

enum enScreenColor
{
	Red = 1,
	Blue = 2,
	Green = 3,
	Yellow = 4
}; 

int main()
{
	cout << "**************************\n\n";
	cout << "Please Chose the number of your colcr?\n";
	cout << "( 1 ) Red\n";
	cout << "( 2 ) Blue\n";
	cout << "( 3 ) Green\n";
	cout << "( 4 ) Yellow\n";
	cout << "**************************\n\n";
	cout << "Ypur choice? ";

	int temp;
	cin >> temp;
	enScreenColor Color;
	Color = (enScreenColor)temp;
	if (Color == enScreenColor::Red)
	{
		system("color 4F");
	}
	else if (Color == enScreenColor::Green)
	{
		system("color 2F");
	}
	else if (Color == enScreenColor::Blue)
	{
		system("color 1F");
	}
	else if (Color == enScreenColor::Yellow)
	{
		system("color 6F");
	}
	else
	{
		system("color 7F");
	}

	return 0;
}