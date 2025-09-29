#include<iostream>
#include<string>
using namespace std;

// Problem: #33

struct stGrade
{
	unsigned short Grade;
};

void ReadGradeFromUser(stGrade &Grade)
{
	cout << "Enter Grade:\n";
	cin >> Grade.Grade;
}

void PrintGrade(stGrade Grade)
{
	if (Grade.Grade >= 90 && Grade.Grade <= 100)
	{
		cout << "A\n";
	}
	else if (Grade.Grade >= 80 && Grade.Grade <= 89)
	{
		cout << "B\n";
	}
	else if (Grade.Grade >= 70 && Grade.Grade <= 79)
	{
		cout << "C\n";
	}
	else if (Grade.Grade >= 60 && Grade.Grade <= 69)
	{
		cout << "D\n";
	}
	else if (Grade.Grade >= 50 && Grade.Grade <= 59)
	{
		cout << "E\n";
	}
	else
	{
		cout << "F\n";
	}
}

int main()
{
	stGrade Grade;
	ReadGradeFromUser(Grade);
	PrintGrade(Grade);

	return 0;
}