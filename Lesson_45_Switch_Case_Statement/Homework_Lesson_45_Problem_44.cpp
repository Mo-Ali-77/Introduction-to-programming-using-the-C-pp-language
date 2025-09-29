#include<iostream>
#include<string>
using namespace std;

// Problem: #44
enum enWeek { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

struct stDayNum { int DayNum; };

void ReadDayNum(stDayNum &Num)
{
	cout << "-------------------- Day Week ------------------\n\n";
	cout << "Enter Day Number: ";
	cin >> Num.DayNum;
}

void PrintDay(stDayNum Day)
{
	switch (Day.DayNum)
	{
	case enWeek::Friday:
		cout << "Friday.\n";
		break;
	case enWeek::Monday:
		cout << "Monday.\n";
		break;
	case enWeek::Saturday:
		cout << "Saturday.\n";
		break;
	case enWeek::Sunday:
		cout << "Sunday.\n";
		break;
	case enWeek::Thursday:
		cout << "Thursday.\n";
		break;
	case enWeek::Tuesday:
		cout << "Tuesday.\n";
		break;
	case enWeek::Wednesday:
		cout << "Wednesday.\n";
		break;
	default:
		cout << "Wrong Day Number.\n";
	}
}



int main()
{
	// Problem: #44
	stDayNum DayNumber;
	ReadDayNum(DayNumber);
	PrintDay(DayNumber);
	


	return 0;
}