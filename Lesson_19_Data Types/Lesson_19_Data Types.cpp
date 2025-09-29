#include <iostream>

using namespace std;

int main()
{
	// Note By default everythings is signed
	int v1;
	signed int v2;

	// بيتضاعف الرقم بيكون الرقم موجب فقط
	unsigned int v3;

	// the same variable
	short int v4;
	short v5;

	// the same variable
	unsigned short int v6;
	unsigned short v7;

	// the same variable
	signed long int v8;
	long int v9;
	long v10;

	unsigned long v11;

	long long int v12;
	unsigned long long int v13;

	long double v14;

	// the same variable
	signed char v15;
	char v16;

	unsigned char v17;


	// problems or mistakes of Datatypes

	double distance = 56E12;   // 56E12 is equal to 56*10^12  Or 5.6e+13 
	cout << distance << endl;

	short d = 3434233; // Error! out of range This error is called overflow. problem
	cout << d << endl; // Some compilers give errors but still run the program normally, but the result will be wrong, so beware of these errors.


	unsigned int a = -10; // Error! can only store positive number
	cout << a << endl;    // Here, the same thing happens: the comparator does not give an error, but runs the code and compensates with random numbers. 


// Program to display the sizes of datatype

	cout << "The size of bool data type is " << sizeof(bool) << " Byte\n";
	cout << "The size of char data type is " << sizeof(char) << " Byte\n";
	cout << "The size of short data type is " << sizeof(short int) << " Bytes\n";
	cout << "The size of int data type is " << sizeof(int) << " Bytes\n";

	cout << "The size of int long data type is " << sizeof(long) << " Bytes\n";
	cout << "The size of int long long data type is " << sizeof(long long) << " Bytes\n";


	cout << "The size of flaot data type is " << sizeof(float) << " Bytes\n";
	cout << "The size of double data type is " << sizeof(double) << " Bytes\n";


	// Program to display the range of datatype

	cout << "********************************************\n";
	cout << "char Range: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
	cout << "unsigned char Range: (" << 0 << ", " << UCHAR_MAX << ")\n\n";

	cout << "short int Range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
	cout << "unsigned short int Range: (" << 0 << ", " << USHRT_MAX << ")\n\n";

	cout << "int Range: (" << INT_MIN << ", " << INT_MAX << ")\n";
	cout << "unsigned int Range: (" << 0 << ", " << UINT_MAX << ")\n";
	cout << "long int Range: (" << LONG_MIN << ", " << LONG_MAX << ")\n";
	cout << "unsigned long int Range: (" << 0 << ", " << ULONG_MAX << ")\n\n";

	cout << "long long int Range: (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
	cout << "unsigned long long int Range: (" << 0 << ", " << ULLONG_MAX << ")\n\n";

	cout << "flaot Range:v(" << FLT_MIN << ", " << FLT_MIN << ")\n";
	cout << "flaot(negative) Range:v(" << -FLT_MIN << ", " << -FLT_MIN << ")\n\n";

	cout << "double Range: (" << DBL_MIN << ", " << DBL_MAX << ")\n";
	cout << "double(negative) Range: (" << -DBL_MIN << ", " << -DBL_MAX << ")\n";
	cout << "long double Range: (" << LDBL_MIN << ", " << LDBL_MAX << ")\n";
	cout << "********************************************\n";

	return 0;
}