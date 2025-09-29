#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #18
float CircleArea(float Radius)
{
	const float PI = 3.14;
	return PI * pow(Radius, 2);
}


int main()
{
	float Radius, Result;
	cout << "Enter the Radius of area:\n";
	cin >> Radius;
	Result = CircleArea(Radius);
	cout << "The Circle area = " << Result;

	return 0;
}