#include<iostream>
#include<string>
using namespace std;

// Problem: #36

struct stDay
{
	unsigned short Day;
};

void ReadNumberDay(stDay& NumDay)
{
	cout << "Enter Day Number:\n";
	cin >> NumDay.Day;
}

void PrintDay(stDay Day)
{
	if (Day.Day > 7)
	{
		cout << "Wrong Day Number. ";
	}
	else if (Day.Day == 1)
	{
		cout << "It is Sunday.";
	}
	else if (Day.Day == 2)
	{
		cout << "It is Monday.";
	}
	else if (Day.Day == 3)
	{
		cout << "It is Tuesday.";
	}
	else if (Day.Day == 4)
	{
		cout << "It is Wendnesday.";
	}
	else if (Day.Day == 5)
	{
		cout << "It is Thursday.";
	}
	else if (Day.Day == 6)
	{
		cout << "It is Friday.";
	}
	else if (Day.Day == 7)
	{
		cout << "It is Saturday.";
	}
}

int main()
{
	stDay NumberDay;
	ReadNumberDay(NumberDay);
	PrintDay(NumberDay);

	return 0;
}