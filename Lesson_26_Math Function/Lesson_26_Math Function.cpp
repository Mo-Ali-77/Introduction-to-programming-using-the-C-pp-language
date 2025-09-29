#include <iostream>

using namespace std;


int main()
{
	// Lesson_26_Math Function
    // Square Root

	double x = 64;
	cout << "Square root value of 64 : " << sqrt(x) << endl; // gives 8
	cout << "Square root value of 50 : " << sqrt(50) << endl; // gives 7.07107

	// Round Number

	cout << "Round value of 2.4: " << round(2.4) << endl;// gives 2
	cout << "Round value of 2.4: " << round(2.5) << endl;// gives 3
	cout << "Round value of 2.4: " << round(2.7) << endl;// gives 3

	cout << "Square root value of 50: " << sqrt(50) << endl;// gives 7.07107
	cout << "Round root value of sqrt(50): " << round(sqrt(50)) << endl;// gives 7

	// We can use mathematical equations.

	cout << round(2.2) + round(2.6) << endl;// gives 5
	cout << round(2.2) / 2 << endl;// gives 1
	cout << round(2.2) - 2 << endl;// gives 0
	cout << round(2.2) * 3 << endl;// gives 6

	// Power Function

	int x = 2;
	int y = 4;

	cout << "Power value: x^y = (2^4): " << pow(x, y) << endl;// gives 16
	cout << "Power value: x^y = (4^3): " << pow(4, 3) << endl;// gives 16

	// Ceil & Floor functions

	cout << "Ceilling value of 2.9: " << ceil(2.9) << endl;// gives 3
	cout << "Floor value of 2.9: " << floor(2.9) << endl;// gives 2

	cout << "Ceilling value of -2.9: " << ceil(-2.9) << endl;// gives -2 
	cout << "Floor value of -2.9: " << ceil(-2.9) << endl;// gives -3

	// Absolute Function

	cout << "Absolute value of -10: " << abs(-10) << endl;
	cout << "Absolute value of 10: " << abs(10) << endl;

	return 0;
}