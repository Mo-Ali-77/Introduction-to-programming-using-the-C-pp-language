#include<iostream>
#include<string>
using namespace std;

// Problem: #24
struct strAge
{
	unsigned short Age;
};

void ReadAgeFromUser(strAge &Age)
{
	cout << "Plaease enter your age:\n";
	cin >> Age.Age;
}

void PrintAgeResult(strAge Age)
{
	if (Age.Age >= 18 && Age.Age <= 45)
	{
		cout << "Your Age: Valid.\n";
	}
	else
	{
		cout << "Your Age: Invalid.\n";
	}
}

void ReadAges(strAge Ages[2])
{
	unsigned Counter = 1;
	cout << "Person " << Counter << ":\n";
	Counter++;
	ReadAgeFromUser(Ages[0]);
	cout << "Person " << Counter << ":\n";
	ReadAgeFromUser(Ages[1]);
}

void PrintAges(strAge Ages[2])
{
	unsigned Counter = 1;
	cout << "Person " << Counter << ":\n";
	Counter++;
	PrintAgeResult(Ages[0]);
	cout << "Person " << Counter << ":\n";
	PrintAgeResult(Ages[1]);
}

int main() 
{
	// Problem #24:
	// Result of one person
	strAge Age;
	ReadAgeFromUser(Age);
	PrintAgeResult(Age);

	cout << "\n\n";

	// Result of two person
	strAge Ages[2];
	ReadAges(Ages);
	PrintAges(Ages);

	return 0;
}