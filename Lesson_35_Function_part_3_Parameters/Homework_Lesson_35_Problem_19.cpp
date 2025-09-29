#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #19

float CircleArea(float Diagonal)
{
	const float PI = 3.14;
	return (PI * pow(Diagonal, 2)) / 4;
}


int main()
{
	float Diagonal, Result;
	cout << "Enter the Diagonal of Circle:\n";
	cin >> Diagonal;
	Result = CircleArea(Diagonal);
	cout << "The Circle area = " << Result;

	return 0;
}