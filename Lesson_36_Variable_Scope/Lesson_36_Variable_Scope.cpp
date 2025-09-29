#include<iostream>
#include<string>
using namespace std;

int x = 300; // Global Variable

void MyFunction()
{
	int x = 500; // local Variable
	cout << "The value of x inside function is: " << x << endl;
}

int main()
{
	int x = 10; // local Variable
	cout << "The local value of x inside Main is: " << x << endl;
	MyFunction();

	cout << "The global value of x is: " << ::x << endl; // use :: when calling any gloabl variable

	return 0;
}
