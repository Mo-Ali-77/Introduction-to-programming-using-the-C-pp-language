#include<iostream>

using namespace std;

int main()
{
	// Problem #21:

	const float PI = 3.14;
	float Circumference, Area;
	cout << "Please, Enter the Circumference: ";
	cin >> Circumference; // Circumference محيط الدائرة
	Area = (Circumference * Circumference) / (4 * PI); // 12.56 = (4 * PI)
	cout << "The Area of Circumference = " << Area;

	return 0;
}