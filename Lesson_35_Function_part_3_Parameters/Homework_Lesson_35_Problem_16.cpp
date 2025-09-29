#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #16
float RectangleArea(float Rib, float Diagonal)
{
	return Rib * sqrt(pow(Diagonal, 2) - pow(Rib, 2));
}


int main()
{
	float Rib, Diagonal, Result;
	cout << "Enter the Rib of Rectangle:\n";
	cin >> Rib;
	cout << "Enter the Diagonal of rectangle:\n";
	cin >> Diagonal;
	Result = RectangleArea(Rib, Diagonal);
	cout << "The Area of Rectangle =  " << Result;

	return 0;
}