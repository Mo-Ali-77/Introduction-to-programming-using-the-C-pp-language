#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #23

float CircleArea(float Rib1, float Rib2, float Rib3)
{
	const float PI = 3.14;
	float P = (Rib1 + Rib2 + Rib3) / 2;
	return PI * pow((Rib1 * Rib2 * Rib3) / (4 * sqrt(P * (P - Rib1) * (P - Rib2) * (P - Rib3))), 2);
}

int main()
{
	float Rib1, Rib2, Rib3, Area;
	cout << "Enter the Rib1:\n";
	cin >> Rib1;
	cout << "Enter the Rib2:\n";
	cin >> Rib2;
	cout << "Enter the Rib3:\n";
	cin >> Rib3;
	Area = CircleArea(Rib1, Rib2, Rib3);
	cout << "The Circle Area = " << Area;

	return 0;
}