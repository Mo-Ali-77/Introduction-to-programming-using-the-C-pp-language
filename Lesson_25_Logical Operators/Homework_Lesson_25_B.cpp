#include<iostream>

using namespace std;

int main()
{
	bool Result;
	Result = (5 > 6 && 7 == 7) || (1 || 0);
	cout << Result;
	Result = !(5 > 6 && 7 == 7) || (1 || 0);
	cout << Result;
	Result = !(5 > 6 && 7 == 7) || !(1 || 0);
	cout << Result;
	Result = !(5 > 6 || 7 == 7) && !(1 || 0);
	cout << Result;
	Result = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3));
	cout << Result;
	Result = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3));
	cout << Result;


	return 0;
}