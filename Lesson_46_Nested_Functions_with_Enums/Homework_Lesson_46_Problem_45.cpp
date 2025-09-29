#include<iostream>
#include<string>
using namespace std;

// Problem: #45
enum enMonth { Jonuary = 1, February = 2, March = 3, Abril = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };
void showMonthMenue()
{
	cout << "-------------------- Month year ------------------\n\n";
	cout << "**************************************************\n";
	cout << "1: Jonuary.\n";
	cout << "2: February.\n";
	cout << "3: March.\n";
	cout << "4: Abril.\n";
	cout << "5: May.\n";
	cout << "6: June.\n";
	cout << "7: July.\n";
	cout << "8: August.\n";
	cout << "9: September.\n";
	cout << "10: October.\n";
	cout << "11: November.\n";
	cout << "12: December.\n";
	cout << "**************************************************\n\n";
	cout << "Choice Month Number From Menue: ";
}

unsigned short ReadMonthNumber()
{
	unsigned short MonthNumber;
	cin >> MonthNumber;
	return MonthNumber;
}

string GetMonth(unsigned short MonthNumber)
{
	switch (MonthNumber)
	{
	case enMonth::Jonuary:
		return "Jonuary ";
		break;
	case enMonth::February:
		return "February ";
		break;
	case enMonth::March:
		return "March ";
		break;
	case enMonth::Abril:
		return "Abril ";
		break;
	case enMonth::May:
		return "May ";
		break;
	case enMonth::June:
		return "June ";
		break;
	case enMonth::July:
		return "July ";
		break;
	case enMonth::August:
		return "August ";
		break;
	case enMonth::September:
		return "September ";
		break;
	case enMonth::October:
		return "October ";
	case enMonth::November:
		return "November ";
		break;
	case enMonth::December:
		return "December ";
		break;
	default:
		return "Wrong choiced Month day.";
	}
}

int main()
{
	showMonthMenue();
	cout << GetMonth(ReadMonthNumber()) << endl;

	return 0;
}