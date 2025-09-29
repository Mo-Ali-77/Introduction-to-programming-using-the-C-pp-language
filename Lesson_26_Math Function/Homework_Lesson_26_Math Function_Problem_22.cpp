#include<iostream>

using namespace std;

int main()
{
	// Problem #22

	const float PI = 3.14;
	float LegTringle, Base, Area;
	cout << "Please, Enter the LegTringle: ";
	cin >> LegTringle;
	cout << "Please, Enter the Base of tringle: ";
	cin >> Base;
	Area = (PI * (pow(Base, 2) / 4)) * ((2 * LegTringle - Base) / (2 * LegTringle + Base));
	cout << "The Area of Circle by tringle = " << floor(Area);


	return 0;
}