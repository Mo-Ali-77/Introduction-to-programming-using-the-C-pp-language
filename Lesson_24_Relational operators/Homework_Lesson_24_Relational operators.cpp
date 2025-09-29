#include<iostream>

using namespace std;


int main()
{
	// Homework: Lesson_24_Relational operators

	unsigned int FirstNum, SecondNum;
	cout << "Please, enter the first number: ";
	cin >> FirstNum;
	cout << "Please, enter the first number: ";
	cin >> SecondNum;
	cout << FirstNum << " = " << SecondNum << " is " << (FirstNum == SecondNum) << endl;
	cout << FirstNum << " != " << SecondNum << " is " << (FirstNum != SecondNum) << endl;
	cout << FirstNum << " <= " << SecondNum << " is " << (FirstNum <= SecondNum) << endl;
	cout << FirstNum << " >= " << SecondNum << " is " << (FirstNum >= SecondNum) << endl;
	cout << FirstNum << " < " << SecondNum << " is " << (FirstNum < SecondNum) << endl;
	cout << FirstNum << " > " << SecondNum << " is " << (FirstNum > SecondNum) << endl;

	return 0;
}