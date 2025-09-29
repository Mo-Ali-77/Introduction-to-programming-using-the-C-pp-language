#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #42

unsigned int DurationInSecond(unsigned int Days, unsigned int Hours, unsigned int Minutes, unsigned int Seconds)
{
	unsigned int TotalSeconds = (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60) + Seconds;
	return TotalSeconds;
}

int main()
{
	unsigned int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, TotalSeconds;
	cout << "Please, Enter the number of days: ";
	cin >> NumberOfDays;
	cout << "Please, Enter the number of hours: ";
	cin >> NumberOfHours;
	cout << "Please, Enter the number of minutes: ";
	cin >> NumberOfMinutes;
	cout << "Please, Enter the number of seconds: ";
	cin >> NumberOfSeconds;
	TotalSeconds = DurationInSecond(NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds);
	//cout << "Total seconds = " << round(TotalSeconds);
	cout << "Total seconds = " << TotalSeconds;

	return 0;
}