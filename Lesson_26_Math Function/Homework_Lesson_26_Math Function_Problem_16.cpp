#include<iostream>

using namespace std;


int main()
{
	// Homework: Lesson_26_Math Function
	// Problem #16

	double Area, Diagonal, RctangleArea;
	cout << "Please, Enter the area of Rectangle: ";
	cin >> Area;
	cout << "Please, Enter the diagonal of Rectangle: ";
	cin >> Diagonal;
	RctangleArea = Area * sqrt(pow(Diagonal, 2) - pow(Area, 2));
	cout << "The result of Rectangle area = " << RctangleArea;

	return 0;
}