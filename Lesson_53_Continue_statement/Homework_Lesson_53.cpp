#include<iostream>

using namespace std;

int main()
{
	int ReadNumber = 0, Sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Please enter number " << i << ": \n";
		cin >> ReadNumber;
		if (ReadNumber >= 50)
		{
			continue;
		}
		Sum += ReadNumber;
	}
	cout << "Sum = " << Sum << endl;

	return 0;
}