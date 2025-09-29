#include<iostream>
#include<string>
using namespace std;

int main() 
{

	//  IF conditional:
	int x = 10;

	if (x > 5)
	{
		cout << "The code of if body has executed." << endl;
	}

	cout << "The code after if body always executed." << endl << endl;

	// you can use logic operators like AND = && , OR = || , NOT = !
	if (x >= 5 && x <= 20)
	{
		cout << "The code of if body has executed." << endl;
	}

	cout << "The code after if body always executed." << endl << endl;

	return 0;
}