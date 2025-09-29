#include<iostream>
#include<string>
using namespace std;

// other Example: Country
enum enCountryChoice
{
	Yemen = 1,
	Oman = 2,
	USE = 3,
	Buhran = 4,
	Qatar = 5,
	Iraq = 6,
	Kwait = 7,
	SuadiArabia = 8
};

// other Example: Color
enum enScreenColor
{
	Red = 1,
	Blue = 2,
	Green = 3,
	Yellow = 4
};


int main()
{
	// example:

	int Day = 4;

	switch (Day)
	{
	case 1:
		cout << "Sun\n\n";
		break;
	case 2:
		cout << "Mon\n\n";
		break;
	case 3:
		cout << "Tus\n\n";
	case 4:
		cout << "Wen\n\n";
		break;
	case 5:
		cout << "Thur\n\n";
	case 6:
		cout << "Fri\n\n";
	case 7:
		cout << "sat\n\n";
		break;
	default:
		cout << "No a week day\n\n";
	}


	// other example: Country
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
	switch (Country)
	{
	case enCountryChoice::Buhran:
		cout << "Your country is Buhran\n\n";
		break;
	case enCountryChoice::Iraq:
		cout << "Your country is Iraq\n\n";
		break;
	case enCountryChoice::Kwait:
		cout << "Your country is Kwait\n\n";
		break;
	case enCountryChoice::Oman:
		cout << "Your country is Oman\n\n";
		break;
	case enCountryChoice::Qatar:
		cout << "Your country is Qatar\n\n";
		break;
	case enCountryChoice::SuadiArabia:
		cout << "Your country is SuadiArabia\n\n";
		break;
	case enCountryChoice::USE:
		cout << "Your country is USE\n\n";
		break;
	case enCountryChoice::Yemen:
		cout << "Your country is Yemen\n\n";
		break;
	default:
		cout << "Your country is other\n\n";
	}

	// other example: Color
	cout << "**************************\n\n";
	cout << "Please Chose the number of your colcr?\n";
	cout << "( 1 ) Red\n";
	cout << "( 2 ) Blue\n";
	cout << "( 3 ) Green\n";
	cout << "( 4 ) Yellow\n";
	cout << "( other number ) white\n";
	cout << "**************************\n\n";
	cout << "Ypur choice? ";

	int temp;
	cin >> temp;
	enScreenColor Color;
	Color = (enScreenColor)temp;
	switch (Color)
	{
	case enScreenColor::Blue:
		system("color 1F");
		break;
	case enScreenColor::Green:
		system("color 2F");
		break;
	case enScreenColor::Red:
		system("color 4F");
		break;
	case enScreenColor::Yellow:
		system("color 6F");
		break;
	default:
		system("color 7F");
		break;
	}

	return 0;
}