#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 35
// Problem: #1

string YourName(string Name)
{
	return Name;
}

int main()
{
	string name;
	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Your name is: " << YourName(name) << endl;

	return 0;
}