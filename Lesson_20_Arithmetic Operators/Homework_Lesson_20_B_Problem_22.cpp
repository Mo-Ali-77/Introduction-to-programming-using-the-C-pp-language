#include<iostream>

using namespace std;

int main()
{
	// Problem #22:

	const float PI = 3.14;
	float LegTringle, Base, Area;
	cout << "Please, Enter the LegTringle: ";
	cin >> LegTringle;
	cout << "Please, Enter the Base of tringle: ";
	cin >> Base;
	Area = (PI * (Base * Base / 4)) * ((2 * LegTringle - Base) / (2 * LegTringle + Base));
	cout << "The Area of Circle by tringle = " << Area;


	return 0;
}