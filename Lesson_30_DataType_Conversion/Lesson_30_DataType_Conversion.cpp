#include<iostream>
#include<string>
using namespace std;


int main()
{
	// Conversion from number datatype to another number datatype
	int Num1;
	double Num2 = 18.99;
	//Num1 = Num2; // Implecit Conversion from double to int

	Num1 = (int)Num2; // Explict conversion
	Num1 = int(Num2); // Explict conversion
	cout << Num1 << endl << endl;


	// Conversion from string to Number datatype
	string str = "123.456";

	// convert string to Integer
	int num_int = stoi(str);

	// convert string to float
	float num_float = stof(str);

	// convert string to double
	double num_double = stod(str);

	cout << "num_int = " << num_int << endl;
	cout << "num_float = " << num_float << endl;
	cout << "num_double = " << num_double << endl;


	// Conversion from int to string 
	int Num1 = 123;
	double Num2 = 18.99;

	string str1, str2;
	str1 = to_string(Num1);
	str2 = to_string(Num2);


	cout << str1 << endl;
	cout << str2 << endl;




	return 0;
}