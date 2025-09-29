#include<iostream>

using namespace std;

int main()
{
	// Problem #43

	const unsigned int SecondsPerDay = 24 * 60 * 60, SecondsPerHours = 60 * 60, SecondsPerMinutes = 60;
	unsigned int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, totalSeconds, Remainder;
	cout << "Please, Enter the Total Second: ";
	cin >> totalSeconds;
	NumberOfDays = round(totalSeconds / SecondsPerDay);
	Remainder = totalSeconds % SecondsPerDay;
	NumberOfHours = round(Remainder / SecondsPerHours);
	Remainder = totalSeconds % SecondsPerHours;
	NumberOfMinutes = round(Remainder / SecondsPerMinutes);
	Remainder = totalSeconds % SecondsPerMinutes;
	NumberOfSeconds = Remainder;
	cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds;

	return 0;
}