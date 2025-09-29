#include<iostream>
#include<string>
using namespace std;

//Homework: Lesson 42

int main()
{
	unsigned Mark;
	cout << "Enter the Mark:\n";
	cin >> Mark;

	if (Mark >= 50)
	{
		cout << "Pass.";
	}
	else
	{
		cout << "Fail.";
	}

	return 0;
}