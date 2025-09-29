#include<iostream>
#include<string>
using namespace std;


struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

int main()
{
	strInfo Person[2];
	Person[0].FirstName = "Mohammed";
	Person[0].LastName = "Al-Amoudi";
	Person[0].Age = 22;
	Person[0].Phone = "8546294";

	Person[1].FirstName = "Alaa";
	Person[1].LastName = "Al-Amoudi";
	Person[1].Age = 32;
	Person[1].Phone = "15964582";

	cout << Person[1].FirstName << endl;

	return 0;
}