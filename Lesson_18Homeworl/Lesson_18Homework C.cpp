#include<iostream>

using namespace std;

int main()
{
	//Homework:lesson_18_C
	int UserAge;

	cout << "Enter your age:\n";
	cin >> UserAge;

	int YourAgeAfter5Years = UserAge + 5;
	cout << "After 5 years you will be " << YourAgeAfter5Years << endl;
	cout << "After 5 years you will be " << 5 + UserAge << endl;// Another Solution

	return 0;
}