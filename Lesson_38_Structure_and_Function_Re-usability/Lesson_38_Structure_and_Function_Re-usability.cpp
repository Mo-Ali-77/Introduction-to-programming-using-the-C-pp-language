#include<iostream>
#include<string>
using namespace std;

struct strInfo
 {
	string FirstName;
	string LastName;
	int Age;
	string PhoneNumber;
};
void ReadInfo(strInfo &Info) //  We use the & symbol to modify the value, and the modification is reflected in the variable in the min function.
 {
	cout << "Enter first name:\n";
	cin >> Info.FirstName;
	cout << "Enter last name:\n";
	cin >> Info.LastName;
	cout << "Enter your age:\n";
	cin >> Info.Age;
	cout << "Enter phone number:\n";
	cin >> Info.PhoneNumber;
}

void PrintInfo(strInfo Info)
{
	cout << "****************************************\n";
	cout << "First Name: " << Info.FirstName << endl;
	cout << "Last Name: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone: " << Info.PhoneNumber << endl;
	cout << "****************************************\n";

}

int main()
{
	strInfo InfoPerson1; // In this variable, the reference value from the ReadInfo function will be modified.
	cout << InfoPerson1.FirstName;

	ReadInfo(InfoPerson1);
	PrintInfo(InfoPerson1);

	return 0;
}