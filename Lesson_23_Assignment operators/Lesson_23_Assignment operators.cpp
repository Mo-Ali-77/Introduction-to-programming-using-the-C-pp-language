#include<iostream>

using namespace std;


int main()
{
	// Lesson_23_Assignment operators

	int A = 10, B = 20;
	A += B; // A = a + B
	cout << "A = " << A << endl;
	A -= B; // A = a - B
	cout << "A = " << A << endl;
	A *= B; // A = a * B
	cout << "A = " << A << endl;
	A /= B; // A = a / B
	cout << "A = " << A << endl;
	A %= B; // A = a % B
	cout << "A = " << A << endl;

	return 0;
}