#include <iostream>

using namespace std;


int main()
{
	// Homework: lesson_17_A.

	string Name = "Mohammed Al-Amoudi.";
	int Age = 21;
	string City = "Mukalla.";
	string Country = "Yemen";
	float MonthlySalary = 5000;
	char Gender = 'M';
	bool isMarried = true;

	cout << "******************************************\n\n";
	cout << "Name: " << Name << endl;
	cout << "Age : " << Age << endl;
	cout << "City : " << City << endl;
	cout << "Country : " << Country << endl;
	cout << "Monthly Salary : " << MonthlySalary << endl;
	cout << "Yearly Salary : " << MonthlySalary * 12 << endl;
	cout << "Gender : " << Gender << endl;
	cout << "Married : " << isMarried << endl;
	cout << "******************************************\n";

	// Homework: lesson_17_B.

	int num1 = 20, num2 = 30, num3 = 10;
	cout << num1 << "+\n";
	cout << num2 << "+\n";
	cout << num3 << endl;
	cout << "-----------------\n";
	cout << "Total = " << num1 + num2 + num3 << endl;

	// Homework: lesson_17_C.
	int Age = 25;
	int After_5_YearsOld = 25 + Age; // If you want to use the variable more than once in the same program.
	cout << "After 5 years you will be " << 5 + Age << " years old.\n";
	cout << "After 5 years you will be " << After_5_YearsOld << " years old.\n";

	return 0;
}

