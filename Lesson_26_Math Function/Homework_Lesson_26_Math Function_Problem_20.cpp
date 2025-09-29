#include<iostream>

using namespace std;

int main()
{
	// Problem #20

	const float PI = 3.14;
	double ribs;
	double AreaOFCircle;
	cout << "Please, Enter the rabs: ";
	cin >> ribs;
	AreaOFCircle = (PI * pow(ribs, 2)) / 4;
	cout << "The Area of Circle = " << ceil(AreaOFCircle);


	return 0;
}