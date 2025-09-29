#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #43

unsigned int NumberOfDays(unsigned int TotalSeconds)
{
	const unsigned int SecondsPerDay = 24 * 60 * 60;
	return round(TotalSeconds / SecondsPerDay);
}
unsigned int NumberOfHours(unsigned int Remainder)
{
	const unsigned int SecondsPerHours = 60 * 60;
	return round(Remainder / SecondsPerHours);
}
unsigned int NumberOfMinutes(unsigned int Remainder)
{
	const unsigned int SecondsPerMinutes = 60;
	return round(Remainder / SecondsPerMinutes);
}

int main()
{
	const unsigned int SecondsPerDay = 24 * 60 * 60, SecondsPerHours = 60 * 60, SecondsPerMinutes = 60;
	unsigned int NumberOfDay, NumberOfHour, NumberOfMinute, NumberOfSecond, TotalSeconds, Remainder;
	cout << "Please, Enter the Total Second: ";
	cin >> TotalSeconds;
	NumberOfDay = NumberOfDays(TotalSeconds);
	Remainder = TotalSeconds % SecondsPerDay;
	NumberOfHour = NumberOfHours(Remainder);
	Remainder = Remainder % SecondsPerHours;
	NumberOfMinute = NumberOfMinutes(Remainder);
	Remainder = Remainder % SecondsPerMinutes;
	NumberOfSecond = Remainder;
	cout << NumberOfDay << ":" << NumberOfHour << ":" << NumberOfMinute << ":" << NumberOfSecond;

	return 0;
}