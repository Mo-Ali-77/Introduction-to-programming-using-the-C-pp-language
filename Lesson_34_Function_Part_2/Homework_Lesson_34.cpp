#include<iostream>
#include<string>

using namespace std;

// Homework: Lesson 34

void mySomeProcedure()
{
	int num1, num2;
	cout << "Please enter number1?\n";
	cin >> num1;
	cout << "Please enter number2?\n";
	cin >> num2;
	cout << "**********************************\n";
	cout << num1 + num2 << endl;
}

int mySomeFunction()
{
	int num1, num2, result;
	cout << "Please enter number1?\n";
	cin >> num1;
	cout << "Please enter number2?\n";
	cin >> num2;
	result = num1 + num2;
	cout << "************************\n";
	return result;

}

int main()
{
	mySomeProcedure();
	cout << mySomeFunction();

	return 0;
}