#include<iostream>

using namespace std;

int main()
{
	// Problem #43:

	unsigned int SecondsPerDay = 24 * 60 * 60, SecondsPerHours = 60 * 60, SecondsPerMinutes = 60, utotalSeconds, remainder;
	unsigned int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
	cout << "Please, Enter the Total Second: ";
	cin >> utotalSeconds;
	NumberOfDays = floor(utotalSeconds / SecondsPerDay);
	remainder = utotalSeconds % SecondsPerDay;
	NumberOfHours = floor(remainder / SecondsPerHours);
	remainder = remainder % SecondsPerHours;
	NumberOfMinutes = floor(remainder / SecondsPerMinutes);
	remainder = remainder % SecondsPerMinutes;
	NumberOfSeconds = remainder;
	cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds;

	return 0;
}