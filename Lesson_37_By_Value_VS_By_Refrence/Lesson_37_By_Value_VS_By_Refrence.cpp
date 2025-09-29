#include<iostream>
#include<string>
using namespace std;

void MyFunction(int Num1) // By value
{
	Num1 = 7000;
	cout << "Number inside function became = " << Num1 << endl;

}

void MyFunction2(int &Num1) // By refrence
{
	Num1 = 7000;
	cout << "Number inside function became = " << Num1 << endl;

}

int main()
 {
	int Num1;
	Num1 = 1000;
	MyFunction(Num1);
	cout << "Number after calling the function became = " << Num1 << endl;
	MyFunction2(Num1);
	cout << "Number after calling the function became = " << Num1 << endl;

	int Num2 = 555;
	cout << "Print Variable value:\n";
	cout << Num2 << endl;
	cout << "Print Variable address:\n";
	cout << &Num2; // called refrence


	return 0;
}