#include<iostream>
#include<string>
using namespace std;

// explay lesson 28 enums

enum Color { Red, Green, Yellow, Blue };
enum Direction { North, south, east, west };
enum Week { Sat, Sun, Mon, Tue, Wen, Thu, Fri };
enum Gendor { Male, Female };
enum Status { Single, Married };

int main()
{
	Color Mycolor;
	Direction MyDirection;
	Week Today;
	Gendor MyGender;
	Status MyStatus;

	Mycolor = Color::Blue;
	MyDirection = Direction::east;
	Today = Week::Fri;
	MyGender = Gendor::Female;
	MyStatus = Status::Single;

	cout << "My color: " << Mycolor << "\n";
	cout << "My direction: " << MyDirection << "\n";
	cout << "My gender: " << MyGender << "\n";
	cout << "My Today: " << Today << "\n";
	cout << "My ststus: " << MyStatus << "\n";
}