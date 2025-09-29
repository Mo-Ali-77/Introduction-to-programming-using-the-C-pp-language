#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson_27_Structuer

struct address
{
	string Street1;
	string E_mail;
};
struct car
{
	string CarName;
	string Model;
	int Year;
};
struct jop
{
	string JopName;
	string LocationJop;

};
struct person
{
	string FullName;
	address Address;
	int Age;
	car YourCar;
	bool Married;
	int PhoneNumber;
	jop Jop;
};

int main()
{
	// Homework: Lesson_27_Structuer
	person Person1;
	cout << "Please, enter the full name: ";
	cin >> Person1.FullName;
	cout << "Please, enter your age: ";
	cin >> Person1.Age;
	cout << "Please, enter the address: ";
	cin >> Person1.Address.Street1;
	cout << "Please, enter the E-mail address: ";
	cin >> Person1.Address.E_mail;
	cout << "Please, enter the car name: ";
	cin >> Person1.YourCar.CarName;
	cout << "Please, enter the car Model: ";
	cin >> Person1.YourCar.Model;
	cout << "Please, enter the car Year: ";
	cin >> Person1.YourCar.Year;
	cout << "Are you married? ";
	cin >> Person1.Married;
	cout << "Please, enter the phone number ";
	cin >> Person1.PhoneNumber;
	cout << "Please, enter your jop: ";
	cin >> Person1.Jop.JopName;
	cout << "Please, enter the location of your jop: ";
	cin >> Person1.Jop.LocationJop;

	cout << "Full name: " << Person1.FullName << "\n";
	cout << "Your age: " << Person1.Age << "\n";
	cout << "Address: " << Person1.Address.Street1 << "\n";
	cout << "E-mail address: " << Person1.Address.E_mail << "\n";
	cout << "Car name: " << Person1.YourCar.CarName << "\n";
	cout << "Model: " << Person1.YourCar.Model << "\n";
	cout << "Year: " << Person1.YourCar.Year << "\n";
	cout << "Married: " << Person1.Married << "\n";
	cout << "Phone number: " << Person1.PhoneNumber << "\n";
	cout << "Jop: " << Person1.Jop.JopName << "\n";
	cout << "Location jop: " << Person1.Jop.LocationJop << endl;

	return 0;
}