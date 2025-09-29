#include<iostream>
#include<string>
using namespace std;

// Homweork: Lesson 40

void ReadData(float Grade[3])
{
	cout << "Enter Grade1:\n";
	cin >> Grade[0];

	cout << "Enter Grade2:\n";
	cin >> Grade[1];

	cout << "Enter Grade3:\n";
	cin >> Grade[2];
}

float CalculateAvrgOfGrades(float Grade[3])
 {
	return (Grade[0] + Grade[1] + Grade[2]) / 3;
}


int main()
{
	float Grade[3];
	ReadData(Grade);
	cout << "The Average of grade is " << CalculateAvrgOfGrades(Grade) << endl;

	return 0;


}