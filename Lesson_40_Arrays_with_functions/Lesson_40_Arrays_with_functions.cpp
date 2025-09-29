#include<iostream>
#include<string>
using namespace std;

void ReadArrayData(int Arr[3]) // Note: In arrays, we do not use the & sign because it implicitly returns the modified values of the min function.
 {
	cout << "Enter number1:\n";
	cin >> Arr[0];
	cout << "Enter number2:\n";
	cin >> Arr[1];
	cout << "Enter number3:\n";
	cin >> Arr[2];
}

void PrintArrayData(int Arr[3])
{
	cout << "***************************\n";
	cout << "number1 = " << Arr[0] << endl;
	cout << "number2 = " << Arr[1] << endl;
	cout << "number3 = " << Arr[2] << endl;

}

// Homweork: Lesson 40
//void ReadData(float Grade[3])
/*{
	cout << "Enter Grade1:\n";
	cin >> Grade[0];

	cout << "Enter Grade2:\n";
	cin >> Grade[1];

	cout << "Enter Grade3:\n";
	cin >> Grade[2];
}*/

//float CalculateAvrgOfGrades(float Grade[3])
/* {
	return (Grade[0] + Grade[1] + Grade[2]) / 3;
}*/


int main()
{
	int Arr[3];
	ReadArrayData(Arr); //  عند تمرير المتغير تمرره بدون ماتكتب []
	PrintArrayData(Arr);

	// Homework: Lesson 40

	/*float Grade[3];
	ReadData(Grade);
	cout << "The Average of grade is " << CalculateAvrgOfGrades(Grade) << endl;*/

	return 0;


}