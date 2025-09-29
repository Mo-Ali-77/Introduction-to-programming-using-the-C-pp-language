
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name, country;
	int number;

	cout << "Please enter Employee number?\n";
	cin >> number;
	cout << "Please enter name?" << endl;
	cin.ignore(1, '\n'); //  لتجنب الخطأ في دالة القيت لاين وهو التخطي
	getline(cin, name);
	cout << "Please enter country?\n";
	cin >> country;
	cout << "number: " << number << ", name: " << name << "country: " << country;


	return 0;

}