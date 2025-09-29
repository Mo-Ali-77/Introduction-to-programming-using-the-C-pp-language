#include <iostream>
#include<string>
using namespace std;

enum enCountryChoice
{ Yemen = 1,
	Oman = 2,
	USE = 3,
	Buhran = 4,
	Qatar = 5,
	Iraq = 6,
	Kwait = 7,
	SuadiArabia = 8
};

int main()
{
	cout << "*****************************\n";
	cout << "Please the number of your choice?\n";
	cout << "( 1 ) Yemen\n";
	cout << "( 2 ) Oman\n";
	cout << "( 3 ) USE\n";
	cout << "( 4 ) Buhran\n";
	cout << "( 5 ) Qatar\n";
	cout << "( 6 ) Iraq\n";
	cout << "( 7 ) Kwait\n";
	cout << "( 8 ) Suadi Arabia\n";
	cout << "( any number ) Other";
	cout << "*****************************\n\n";
	cout << "Your choice? ";

	int Temp;
	cin >> Temp;
	enCountryChoice Country;
	Country = (enCountryChoice)Temp;

	if (Country == enCountryChoice::Buhran)
	{
		cout << "Your country is Buhran\n";
	}
	else if (Country == enCountryChoice::Iraq)
	{
		cout << "Your country is Iraq\n";
	}
	else if (Country == enCountryChoice::Kwait)
	{
		cout << "Your country is Kwait\n";
	}
	else if (Country == enCountryChoice::Oman)
	{
		cout << "Your country is Oman\n";
	}
	else if (Country == enCountryChoice::Qatar)
	{
		cout << "Your country is Qatar\n";
	}
	else if (Country == enCountryChoice::SuadiArabia)
	{
		cout << "Your country is SuadiArabia\n";
	}
	else if (Country == enCountryChoice::USE)
	{
		cout << "Your country is USE\n";
	}
	else if (Country == enCountryChoice::Yemen)
	{
		cout << "Your country is Yemen\n";
	}
	else
	{
		cout << "Your country is other\n";
	}

	return 0;
}