#include<iostream>
#include<string>
using namespace std;


// Homework lesson 28 enum

enum Gender { Male = 1, Female = 0 };
enum Status { Single, Maried };


int main()
{
	string Name, City, Contry;
	unsigned short Age;
	unsigned int MonthlySalary, YearlySalary;
	Gender gender;
	Status status;
	cout << "Name: ";
	cin >> Name;
	cout << "City: ";
	cin >> City;
	cout << "contry: ";
	cin >> Contry;
	cout << "Age: ";
	cin >> Age;
	cout << "MonthlySalary: ";
	cin >> MonthlySalary;
	cout << "YearlySalary: ";
	cin >> YearlySalary;
	cout << "gender: ";

	return 0;

}