#include<iostream>

using namespace std;

int main()
{
	// Problem #19

	const float PI = 3.14;
	double Diameter, CircleArea;
	cout << "Please, Enter the Diameter of circle: ";
	cin >> Diameter;
	CircleArea = (PI * pow(Diameter, 2)) / 4;
	cout << "The Circle area = " << ceil(CircleArea);


	return 0;
}