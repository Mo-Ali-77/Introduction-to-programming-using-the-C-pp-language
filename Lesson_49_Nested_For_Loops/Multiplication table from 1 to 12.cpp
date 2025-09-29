#include<iostream>
#include<string>
using namespace std;


int main()
{
	 
	for (int i = 1; i <= 12; i++)
	{
		cout << "i = " << i << endl;
		for (int j = 1; j <= 12; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << "------------------------------" << endl;
	}

	return 0;
}