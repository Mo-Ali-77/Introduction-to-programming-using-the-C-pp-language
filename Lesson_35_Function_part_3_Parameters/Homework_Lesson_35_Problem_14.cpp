#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #1

void Swap()
{
	int num1, num2, temp;
	cout << "enter the first number :\n";
	cin >> num1;
	cout << "enter the first number :\n";
	cin >> num2;
	cout << "Before swapping: " << num1 << ", " << num2 << "\n";
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "After swapping: " << num1 << ", " << num2 << endl;
}
void Swap(int &Num1, int &Num2)
{
	int Temp;
	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
	cout << "After swap inside function:\nNum1 = " << Num1 << ", Num2 = " << Num2 << endl;
}

int main()
{
	Swap();
	int Number1, Number2;
	cout << "Enter Number1:\n";
	cin >> Number1;
	cout << "Enter Number2:\n";
	cin >> Number2;
	cout << "Before swapping:\n";
	cout << "Num1 = " << Number1 << ", Num2 = " << Number2 << endl;
	Swap(Number1, Number2);
	cout << "After swapping:\n";
	cout << "Num1 = " << Number1 << ", Num2 = " << Number2 << endl;

	return 0;
}