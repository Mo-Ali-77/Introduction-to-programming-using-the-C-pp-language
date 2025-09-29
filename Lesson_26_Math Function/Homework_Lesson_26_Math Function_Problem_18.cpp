#include<iostream>

using namespace std;


int main()
{
	// Homework: Lesson_26_Math Function
	// Problem #18

	double Radius, CircleArea; // Radius = نصف القطر
	const float PI = 3.14;
	cout << "Plaese, Enter the Radius of area: ";
	cin >> Radius;
	CircleArea = PI * pow(Radius, 2);
	cout << "The Circle area = " << ceil(CircleArea);

	return 0;
}