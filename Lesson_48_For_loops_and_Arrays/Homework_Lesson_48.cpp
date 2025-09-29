#include<iostream>
#include<string>
using namespace std;

struct stInfo
{
	string FirstName, LastName, PhoneNum;
	unsigned short Age;
};

void ReadIPersonInfo(stInfo& Person)
{
	cout << "Please enter First Name:\n";
	cin >> Person.FirstName;
	cout << "Pleas enter Last Name:\n";
	cin >> Person.LastName;
	cout << "Please enter Age:\n";
	cin >> Person.Age;
	cout << "Please enter Phone number:\n";
	cin >> Person.PhoneNum;
}

void PrintPersonInfo(stInfo Person)
{
	cout << "First Name: " << Person.FirstName << endl;
	cout << "Last Name: " << Person.LastName << endl;
	cout << "Age: " << Person.Age << endl;
	cout << "Phone Number: " << Person.PhoneNum << endl;
}

void ReadPersons(stInfo Persons[100], unsigned short& Length)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Person " << i + 1 << " Info" << endl;
		ReadIPersonInfo(Persons[i]);
	}
}

void PrintPersons(stInfo Persons[100], unsigned short Length)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "\nPerson " << i + 1 << " Info" << endl;
		cout << "**********************\n";
		PrintPersonInfo(Persons[i]);
		cout << "**********************\n";
	}
}


int main()
{
	stInfo Person1[100];
	unsigned short Length;
	cout << "How many Persons do you want to enter:\n";
	cin >> Length;
	ReadPersons(Person1, Length);
	PrintPersons(Person1, Length);

	return 0;
}