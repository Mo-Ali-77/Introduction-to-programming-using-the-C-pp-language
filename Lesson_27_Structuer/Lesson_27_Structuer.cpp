#include<iostream>
#include<string>
using namespace std;

// Explay lesson_27_Structuer

struct address
{
	string Street1;
	string POBOX;
};

struct owner
{
	string FullName;
	string Phone;
	address Address; // Can you add structure inside another structure (nested structure)
};
struct Car
{
	string Brand;
	string Model;
	owner Owner; // Can you add structure inside another structure (nested structure)
	int Year;
};

int main()
{
	// Explay lesson_27_Structuer

	Car MyCar1, MyCar2;

	MyCar1.Brand = "BMW";
	MyCar1.Model = "X5";
	MyCar1.Year = 2000;
	MyCar1.Owner.FullName = "Mohammed Al-Amoudi.";
	MyCar1.Owner.Phone = "785499132";
	MyCar1.Owner.Address.Street1 = "Al Hibur street.";
	MyCar1.Owner.Address.POBOX = "Al-sharj.";

	MyCar2.Brand = "Ford";
	MyCar2.Model = "Mustang";
	MyCar2.Year = 2022;

	cout << "Brand: " << MyCar1.Brand << "\n" << "Model: " << MyCar1.Model << "\n" << "Year: " << MyCar1.Year << "\n";
	cout << "Full Name: " << MyCar1.Owner.FullName << "\n" << "Phone number: " << MyCar1.Owner.Phone << "\n";
	cout << "Street: " << MyCar1.Owner.Address.Street1;
	cout << "POBX: " << MyCar1.Owner.Address.POBOX << "\n";
	cout << "Brand: " << MyCar2.Brand << "\n" << "Model: " << MyCar2.Model << "\n" << "Year: " << MyCar2.Year << endl;

	return 0;

}