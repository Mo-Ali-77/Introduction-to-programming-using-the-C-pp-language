#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 41

struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

void ReadInfo(strInfo &Person)
{
	cout << "Enter First name:\n";
	cin >> Person.FirstName;
	cout << "Enter Last name:\n";
	cin >> Person.LastName;
	cout << "Enter Age:\n";
	cin >> Person.Age;
	cout << "Enter Phone number:\n";
	cin >> Person.Phone;
	cout << endl;
}

void PrintInfo(strInfo Person)
{
	cout << "********************\n";
	cout << "First name: " << Person.FirstName << "\n";
	cout << "Last name: " << Person.LastName << "\n";
	cout << "Age: " << Person.Age << "\n";
	cout << "Phone: " << Person.Phone << "\n";
	cout << "********************" << endl << endl;
}

void ReadPersonsInfo(strInfo Person[2])
{
	unsigned Counter = 1;
	cout << "Person " << Counter << ":\n";
	Counter++;
	ReadInfo(Person[0]);
	cout << "Person " << Counter << ":\n";
	ReadInfo(Person[1]);

}

void PrintPersonsInfo(strInfo Person[2])
{
	unsigned Counter = 1;
	cout << "Person " << Counter << ":\n";
	Counter++;
	PrintInfo(Person[0]);
	cout << "Person " << Counter << ":\n";
	PrintInfo(Person[1]);

}

int main()
{
	// Homework: Lesson 41

	strInfo Person[2];
	ReadPersonsInfo(Person);
	PrintPersonsInfo(Person);

	return 0;
}