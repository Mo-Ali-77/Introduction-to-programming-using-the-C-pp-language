#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #20

float CircleArea(float Rib)
{
	const float PI = 3.14;
	return PI * (pow(Rib, 2) / pow(2, 2));
}

int main()
{
	float Rib, Result;
	cout << " enter the Rib:\n";
	cin >> Rib;
	Result = CircleArea(Rib);
	cout << "The Circle area = " << Result;

	return 0;
}