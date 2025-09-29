#include<iostream>

using namespace std;

int main()
{
	// Problem #42

	float NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, TotalSeconds;
	cout << "Please, Enter the number of days: ";
	cin >> NumberOfDays;
	cout << "Please, Enter the number of hours: ";
	cin >> NumberOfHours;
	cout << "Please, Enter the number of minutes: ";
	cin >> NumberOfMinutes;
	cout << "Please, Enter the number of seconds: ";
	cin >> NumberOfSeconds;
	TotalSeconds = (NumberOfDays * 24 * 60 * 60) + (NumberOfHours * 60 * 60) + (NumberOfMinutes * 60) + NumberOfSeconds;
	cout << "Total seconds = " << round(TotalSeconds);

	return 0;
}