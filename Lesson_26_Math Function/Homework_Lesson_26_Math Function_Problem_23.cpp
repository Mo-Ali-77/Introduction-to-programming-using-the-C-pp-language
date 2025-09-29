#include<iostream>

using namespace std;

int main()
{
	// Problem #23

	const float PI = 3.14;
	double Rib1, Rib2, Rib3, CircleArea, P, Temp;
	cout << "Please, Enter the Rib 1: ";
	cin >> Rib1;
	cout << "Please, Enter the Rib 2: ";
	cin >> Rib2;
	cout << "Please, Enter the Rib 3: ";
	cin >> Rib3;
	P = (Rib1 + Rib2 + Rib3) / 2;
	Temp = (Rib1 * Rib2 * Rib3) / (4 * sqrt(P * (P - Rib1) * (P - Rib2) * (P - Rib3)));
	CircleArea = PI * pow(Temp, 2);
	cout << "The result of Circle area = " << round(CircleArea);


	return 0;
}