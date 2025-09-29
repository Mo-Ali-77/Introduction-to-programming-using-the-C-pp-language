#include<iostream>
#include<string>
using namespace std;


int main()
{
	// Explaying:
	for (int i = 1; i <= 5; i++)
	{
		// Condition to continue
		if (i == 3)
		{
			continue;
		}

		cout << i << endl;
	}

	return 0;
}