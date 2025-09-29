#include<iostream>
#include<string>
using namespace std;

// Problem: #45

enum enMonth { Jonuary = 1, February = 2, March = 3, Abril = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

struct stMonthNum { int MonthNum; };

void ReadMonthNum(stMonthNum& Num)
{
	cout << "-------------------- Month year ------------------\n\n";
	cout << "Enter Month Number: ";
	cin >> Num.MonthNum;
}

void PrintMonth(stMonthNum NumberMonth)
{
	switch (NumberMonth.MonthNum)
	{
	case enMonth::Jonuary:
		cout << "Jonuary.\n";
		break;
	case enMonth::February:
		cout << "February.\n";
		break;
	case enMonth::March:
		cout << "March.\n";
		break;
	case enMonth::Abril:
		cout << "Abril.\n";
		break;
	case enMonth::May:
		cout << "May.\n";
		break;
	case enMonth::June:
		cout << "June.\n";
		break;
	case enMonth::July:
		cout << "July.\n";
		break;
	case enMonth::August:
		cout << "August.\n";
		break;
	case enMonth::September:
		cout << "September.\n";
		break;
	case enMonth::October:
		cout << "October.\n";
		break;
	case enMonth::November:
		cout << "November.\n";
		break;
	case enMonth::December:
		cout << "December.\n";
		break;
	default:
		cout << "Wrong Month Number.\n";
	}
}



int main()
{
	stMonthNum MonthNumber;
	ReadMonthNum(MonthNumber);
	PrintMonth(MonthNumber);

	return 0;
}