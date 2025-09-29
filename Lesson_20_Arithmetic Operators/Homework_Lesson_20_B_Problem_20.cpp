#include<iostream>

using namespace std;


int main()
{
	// Problem #20:

	const float PI = 3.14;
	unsigned int ribs;
	float Area;
	cout << "Please, Enter the rabs: ";
	cin >> ribs;
	Area = (PI * ribs * ribs) / 4;
	cout << "The Area of Circle = " << Area;

	return 0;
}