#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #21

float CircleArea(float Circumference)
{
	const float PI = 3.14;
	return pow(Circumference, 2) / (4 * PI);
}

int main()
{
	float Circumference, Result;
	cout << "Enter the Circumference:\n";
	cin >> Circumference;
	Result = CircleArea(Circumference);
	cout << "The Circle area = " << Result;

	return 0;
}