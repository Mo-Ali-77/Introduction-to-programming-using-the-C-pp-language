#include<iostream>

using namespace std;


// Problem: #46
void Print_Letters_From_A_to_Z()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	Print_Letters_From_A_to_Z();

	return 0;
}