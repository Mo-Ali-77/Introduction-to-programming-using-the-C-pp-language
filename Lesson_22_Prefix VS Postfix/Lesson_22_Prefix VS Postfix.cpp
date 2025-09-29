#include<iostream>

using namespace std;


int main()
{
	// Lesson_22_Prefix VS Postfix A++ VS ++A and A-- VS --A

	int A = 10;
	int B = A++; // B will take the old value of A, then A will increase by 1

	cout << "B = " << B << endl;
	cout << "A = " << A << endl;

	B = ++A; // A will increase by 1, then B aill take the new value
	cout << "B = " << B << endl;
	cout << "A = " << A << endl;


	return 0;
}