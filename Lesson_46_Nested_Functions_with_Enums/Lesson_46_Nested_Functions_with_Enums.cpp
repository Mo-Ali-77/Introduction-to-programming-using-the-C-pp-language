#include<iostream>
#include<string>
using namespace std;

// Example:
enum enWeekDay { sun = 1, Mon = 2, Tue = 3, Wed = 4, thu = 5, Fri = 6, Sat = 7 };

void ShowWeekDayMenue()
{
	cout << "********************************************\n";
	cout << "		Week Days		\n";
	cout << "********************************************\n";
	cout << "1: Sunday.\n";
	cout << "2: Monday.\n";
	cout << "3: Tuesday.\n";
	cout << "4: Wednesday.\n";
	cout << "5: Thursday.\n";
	cout << "6: Friday.\n";
	cout << "7: Saturday.\n";
	cout << "********************************************\n";
	cout << "Please enter the number of day?" << endl;
}

enWeekDay ReadWeekDay()
{
	int Temp;
	cin >> Temp;
	return (enWeekDay) Temp;
}

string GetWeekDayName(enWeekDay WeekDay)
{
	switch (WeekDay)
	{
	case enWeekDay::sun:
		return "Sunday.\n";
		break;
	case enWeekDay::Mon:
		return "Monday.\n";
		break;
	case enWeekDay::Tue:
		return "Tuesday.\n";
		break;
	case enWeekDay::Wed:
		return "Wednesday.\n";
		break;
	case enWeekDay::thu:
		return "Thursday.\n";
		break;
	case enWeekDay::Fri:
		return "Friday.\n";
		break;
	case enWeekDay::Sat:
		return "Saturday.\n";
		break;
	defaul:
		return "Wrong Day Number.";
	}

}



int main()
{
	ShowWeekDayMenue();
	cout << "Today is " << GetWeekDayName(ReadWeekDay());

	return 0;
}