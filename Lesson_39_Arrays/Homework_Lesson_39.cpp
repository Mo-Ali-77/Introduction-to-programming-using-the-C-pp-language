#include<iostream>
#include<string>
using namespace std;

int main()
{
	// Homework:Lesson 39
	float Grade[3], Avrg;
	cout << "Enter the Grade1:\n";
	cin >> Grade[0];
	cout << "Enter the Grade2:\n";
	cin >> Grade[1];
	cout << "Enter the Grade3:\n";
	cin >> Grade[2];
	Avrg = (Grade[0] + Grade[1] + Grade[2]) / 3;
	cout << "*************************************\n";
	cout << "The average of grade is: " << Avrg << endl;

	return 0;
}

