#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #22

float CircleArea(float LegTringle, float Base)
{
	const float PI = 3.14;
	return PI * (pow(Base, 2) / 4) * ((2 * LegTringle - Base) / (2 * LegTringle + Base));
}

int main()
{
	float LegTringle, Base, Area;
	cout << "Enter the LeLeg Tringle:\n";
	cin >> LegTringle;
	cout << "Enter the Base of Tringle:\n";
	cin >> Base;
	Area = CircleArea(LegTringle, Base);
	cout << "The circle area = " << Area;

	return 0;
}