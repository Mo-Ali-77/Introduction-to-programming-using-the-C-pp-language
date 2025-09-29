#include<iostream>
#include<string>
using namespace std;

// Homework: Leesson 32

void ExplayCardInfo()
{
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
}

void ExplayStars()
{
	cout << "************************" << endl << endl
		<< "************************"
		<< endl << endl << "************************" << std::endl
		<< endl << "************************" << endl << endl;
}

void MotivationalPhrases()
{
	cout << "I love Programming!" << endl << endl << "I promise to be the best developer ever!"
		<< endl << endl << "I know it will take some ttime to practic, but I will achieve my goal."
		<< endl << endl << "Best Regards," << endl << "Mohammed Al Amoudi." << endl << endl;
}

void H()
{
	cout << "*   *" << endl << "*   *" << endl << "*****" << endl << "*   *" << endl << "*   *";
}

int main()
{
	//Homework: Lesson 32
	ExplayCardInfo();
	cout << endl;
	ExplayStars();
	cout << endl;
	ExplayStars();
	cout << endl;
	H();
	cout << endl;

	return 0;
}