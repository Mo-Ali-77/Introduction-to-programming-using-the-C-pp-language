#include<iostream>
#include<string>
using namespace std;

int main()
{
	int x[5] = { 22, 18,2 ,55 ,520 };

	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << x[2] << endl;
	cout << x[3] << endl;
	cout << x[4] << endl;
	cout << x[0] + x[4] << endl;

	int x[5];
	x[0] = 10;
	x[1] = 20;
	cout << x[0] + x[1] << endl;

	return 0;
}

