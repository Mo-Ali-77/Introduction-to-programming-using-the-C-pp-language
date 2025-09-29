#include<iostream>
#include<string>
using namespace std;

//Homework: Lesson 42

// Problem: #11
struct strMark
{
	float Mark1, Mark2, Mark3;
};

void ReadMarkFromUser(strMark &Mark)
{
	cout << "Enter Mark1:\n";
	cin >> Mark.Mark1;
	cout << "Enter Mark2:\n";
	cin >> Mark.Mark2;
	cout << "Enter Mark3:\n";
	cin >> Mark.Mark3;
}

float AvrgMarks(strMark Marks)
{
	return (Marks.Mark1 + Marks.Mark2 + Marks.Mark3) / 3;
}

void PrintResult(strMark Marks)
{
	if (AvrgMarks(Marks) >= 50)
	{
		cout << "The average = " << AvrgMarks(Marks) << "  Pass.\n";
	}
	else
	{
		cout << "The average = " << AvrgMarks(Marks) << "  Fail.\n";
	}

}

void Set_ReadMarkrs(strMark Markrs[2])
{
	ReadMarkFromUser(Markrs[0]);
	ReadMarkFromUser(Markrs[1]);
}

void Set_PrintMarksResult(strMark Marks[2])
{
	PrintResult(Marks[0]);
	PrintResult(Marks[1]);
}

int main()
{
	// Problem #11:
	
	// One Student Result
	strMark Mark;
	ReadMarkFromUser(Mark);
	PrintResult(Mark);
	cout << "\n\n";

	// Two Student Results
	strMark Marks[2];
	Set_ReadMarkrs(Marks);
	Set_PrintMarksResult(Marks);

	return 0;
}