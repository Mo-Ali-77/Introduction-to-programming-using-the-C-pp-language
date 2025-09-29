#include<iostream>
#include<string>
using namespace std;

//Homework: Lesson 42

// Problem: #4
struct strDriverInfo
{
	unsigned short age;
	string DriverLicense;
};

void ReadInfo(strDriverInfo &Driver)
{

	cout << "Please enter your age:\n";
	cin >> Driver.age;
	cout << "Do you have driver license? enter (Yes or No)\n";
	cin >> Driver.DriverLicense;
}

void ResultCondition(strDriverInfo Driver)
{

	if (Driver.age > 21 && Driver.DriverLicense == "Yes")
	{
		cout << "Hire.";
	}
	else
	{
		cout << "Reject.";
	}
}

void ReadDriversCondition(strDriverInfo Driver[2])
{
	unsigned Counter = 1;
	cout << "Driver 1:\n";
	Counter++;
	ReadInfo(Driver[0]);
	cout << "Driver " << Counter << ":\n";
	ReadInfo(Driver[1]);
}

void ResultDriversCondition(strDriverInfo Driver[2])
{
	unsigned Counter = 1;
	cout << "Driver 1:\n";
	Counter++;
	ResultCondition(Driver[0]);
	cout << "\nDriver" << Counter << ":\n";
	ResultCondition(Driver[1]);
}

int main() 
{
	 //Homework: Lesson 42
	 // Problem #4:
	 
	 // One Driver 
	strDriverInfo Driver;
	ReadInfo(Driver);
	ResultCondition(Driver);
	cout << "\n\n";

	// Two Driver Use Array
	strDriverInfo Drivers[2];
	ReadDriversCondition(Drivers);
	ResultDriversCondition(Drivers);

	return 0;
}