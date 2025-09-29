#include<iostream>

using namespace std;

int main()
{
	//Homework:lesson_18_A
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	char Gender;
	bool isMarried;

	cout << "Please enter your name:\n";
	cin >> Name;

	cout << "Please enter your age:\n";
	cin >> Age;

	cout << "Please enter your city:\n";
	cin >> City;

	cout << "Please enter your country:\n";
	cin >> Country;

	cout << "Please enter the monthly salary:\n";
	cin >> MonthlySalary;

	cout << "Please enter your gender M/F:\n";
	cin >> Gender;

	cout << "Are you married 1/0 ?\n";
	cin >> isMarried;

	cout << "******************************************\n";
	cout << "Name: " << Name << endl;
	cout << "Age : " << Age << endl;
	cout << "City : " << City << endl;
	cout << "Country : " << Country << endl;
	cout << "Monthly Salary : " << MonthlySalary << endl;
	cout << "Yearly Salary : " << MonthlySalary * 12 << endl;
	cout << "Gender : " << Gender << endl;
	cout << "Married : " << isMarried << endl;
	cout << "******************************************\n";

	return 0;
}