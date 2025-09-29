#include<iostream>
#include<string>
using namespace std;

// Problem: #36

struct stMonth
{
	unsigned short MonthNumber;
};

void ReadMonthNumber(stMonth& Number)
{
	cout << "Enter Month Numbrt:\n";
	cin >> Number.MonthNumber;
}

void PrintMonth(stMonth Number)
{
	if (Number.MonthNumber > 12)
	{
		cout << "Wrong Month Number.";
	}
	else if (Number.MonthNumber == 1)
	{
		cout << "It is Jonuary.";
	}
	else if (Number.MonthNumber == 2)
	{
		cout << "It is February.";
	}
	else if (Number.MonthNumber == 3)
	{
		cout << "It is March.";
	}
	else if (Number.MonthNumber == 4)
	{
		cout << "It is Abril.";
	}
	else if (Number.MonthNumber == 5)
	{
		cout << "It is May.";
	}
	else if (Number.MonthNumber == 6)
	{
		cout << "It is June.";
	}
	else if (Number.MonthNumber == 7)
	{
		cout << "It is July.";
	}
	else if (Number.MonthNumber == 8)
	{
		cout << "It is August.";
	}
	else if (Number.MonthNumber == 9)
	{
		cout << "It is September.";
	}
	else if (Number.MonthNumber == 10)
	{
		cout << "It is October.";
	}
	else if (Number.MonthNumber == 11)
	{
		cout << "It is November.";
	}
	else if (Number.MonthNumber == 12)
	{
		cout << "It is December.";
	}
}

int main()
{
	stMonth MonthNumber;
	ReadMonthNumber(MonthNumber);
	PrintMonth(MonthNumber);

	return 0;
}