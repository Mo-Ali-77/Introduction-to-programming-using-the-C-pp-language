#include<iostream>
#include<string>
using namespace std;

// Problem: #44
enum enWeekDay { sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };

void showWeekDayMenue()
{
	cout << "---------------- WEKK DAY----------------\n\n";
	cout << "*****************************************\n";
	cout << "1: Sunday.\n";
	cout << "2: Monday.\n";
	cout << "3: Tuesday.\n";
	cout << "4: Wednesday.\n";
	cout << "5: Thursday.\n";
	cout << "6: Friday.\n";
	cout << "7: Saturday.\n";
	cout << "*****************************************\n\n";
}

unsigned short ReadDay()
{
	unsigned short Choice;
	cout << "Choice Day Number From Menue: ";
	cin >> Choice;
	return Choice;
}

string GetWeekDay(unsigned short DayNumber)
{
	switch (DayNumber)
	{
	case enWeekDay::sun:
		return "Sunday.";
		break;
	case enWeekDay::Mon:
		return "Monday.";
		break;
	case enWeekDay::Tue:
		return "Tuesday.";
		break;
	case enWeekDay::Wed:
		return "Wednesday.";
		break;
	case enWeekDay::Thu:
		return "Thursday.";
		break;
	default:
		return "Wrong Choice Number.";
		break;
	}

}

int main()
{
	showWeekDayMenue();
	cout << "Today is " << GetWeekDay(ReadDay());

	return 0;
}