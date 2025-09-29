#include<iostream>

using namespace std;


int main()
{
	// Homework: Lesson_25_A

	bool Result;
	Result = 12 >= 12;
	cout << Result << endl;
	Result = 12 > 7;
	cout << Result << endl;
	Result = 8 < 6;
	cout << Result << endl;
	Result = 8 == 8;
	cout << Result << endl;
	Result = 12 <= 12;
	cout << Result << endl;
	Result = 7 == 5;
	cout << Result << endl;
	Result = !(12 >= 12);
	cout << Result << endl;
	Result = !(12 < 7);
	cout << Result << endl;
	Result = !(8 < 6);
	cout << Result << endl;
	Result = !(8 == 8);
	cout << Result << endl;
	Result = !(12 <= 12);
	cout << Result << endl;
	Result = !(7 == 5);
	cout << Result << endl;
	Result = (1 && 1);
	cout << Result << endl;
	Result = (true && 0);
	cout << Result << endl;
	Result = (0 || 1);
	cout << Result << endl;
	Result = (0 || 0);
	cout << Result << endl;
	Result = !(0);
	cout << Result << endl;
	Result = !(1 || 0);
	cout << Result << endl;
	Result = (7 == 7) && (7 > 5);
	cout << Result << endl;
	Result = (7 == 7) && (7 < 5);
	cout << Result << endl;
	Result = (7 == 7) || (7 < 5);
	cout << Result << endl;
	Result = (7 < 7) || (7 > 5);
	cout << Result << endl;
	Result = !(7 == 7) && (7 < 5);
	cout << Result << endl;
	Result = (7 == 7) && (7 > 5);
	cout << Result << endl;

	return 0;;
}