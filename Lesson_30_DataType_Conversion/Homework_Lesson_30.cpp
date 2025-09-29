#include<iostream>
#include<string>

using namespace std;


int main()
{
	// Homework: Lesson 30

	// convert string to double, float, integer
	string str1 = "43.22";
	double d1 = stod(str1);
	float f1 = stof(str1);
	int int1 = stoi(str1);
	cout << "Double = " << d1 << "\n";
	cout << "Float = " << f1 << "\n";
	cout << "Integer = " << int1 << endl;
	

	// convert integer and double to string 
	int N1 = 20;
	double d1 = 33.5;
	string str;
	str = to_string(N1);
	str = to_string(d1);
	cout << "String: " << N1 << endl;
	cout << "Double: " << d1 << endl;
	

	// convert Float to string and integer
	float f1 = 55.23;
	string st1;
	int int1;
	st1 = to_string(f1);
	int1 = int(f1);
	int1 = (int)f1;
	int1 = f1;
	cout << int1 << endl << st1;
	


	return 0;
}