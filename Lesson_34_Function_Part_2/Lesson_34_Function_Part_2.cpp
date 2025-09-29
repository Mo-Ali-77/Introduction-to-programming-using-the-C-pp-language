#include<iostream>
#include<string>
using namespace std;


void myFunction() // هذه الدالة تسمى Procedure لانها لا ترجع اي قيمة
{
	cout << "This is my first procedure, it got executed :-)" << endl;

}

string myFunction2() // هذه الدالة تسمى Function لانها ترجع قيمة
{
	return "This is my first returning value function, this the value.";
}

int myFunction3()
{
	int x = 10;
	int y = 20;

	return x * y;
}

float myFunction4()
{
	float x = 10.5;
	float y = 20.3;
    
	return x * y;
}


int main()
{
	myFunction();
	cout << myFunction2() << endl;

	int result;
	result = myFunction3() + 50; // We can perform mathematical calculations with any function, treating it as if it were a variable. 
	cout << result;
	float result; 
	result = floor(myFunction4()); // A function can be called within a function.
	result = ceil(myFunction4()); // A function can be called within a function.
	cout << result; 

	return 0;
}