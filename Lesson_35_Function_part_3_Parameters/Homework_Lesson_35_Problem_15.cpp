#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #15

float RectangleArae(float Rib1, float Rib2)
{
	return Rib1 * Rib2;
}

int main()
{
	float Rib1, Rib2, Result;
	cout << "Enter Rib1:\n";
	cin >> Rib1;
	cout << "Enter Rib2:\n";
	cin >> Rib2;
	Result = RectangleArae(Rib1, Rib2);
	cout << "The Rectangle Areae = " << Result;

	return 0;
}