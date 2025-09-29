#include<iostream>
#include<string>
using namespace std;

// Homework: Lesson 50
// Problem: #46
void Print_Letters_From_A_to_Z()
{
	int i = 65;
	while (i <= 90)
	{
		cout << char(i) << endl;
		i++;
	}
}

int main()
{
	Print_Letters_From_A_to_Z();

	return 0;
}