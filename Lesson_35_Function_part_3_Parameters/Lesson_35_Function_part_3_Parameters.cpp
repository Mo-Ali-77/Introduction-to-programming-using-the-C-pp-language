#include<iostream>
#include<string>
using namespace std;

int myFunction(int num1, int num2)
{
	return num1 + num2;
}


int main()
{
	int num1, num2;
	cout << "enter num1:\n";
	cin >> num1;
	cout << "enter num2:\n";
	cin >> num2;
	cout << myFunction(num1, num2) << endl;

  return 0;
}