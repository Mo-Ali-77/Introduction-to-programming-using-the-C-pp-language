#include<iostream>
#include<string>
using namespace std;


int main()
{
	// Homework: Lesson 49
	// Shape #01: From AA....ZZ
    for (int i = 65; i <= 90; i++)
    {
	     cout << "Charactor " << char(i) << ":\n";
	     for (int j = 65; j <=90; j++)
	     {
	  	   cout << char(i) << char(j) << "\n";
	     }
	     cout << "------------------------\n";
    }
    cout << endl;

    // Shape #02: Inverted triangle
    for (int i = 1; i <= 10; i++)
    {
	  for (int j = 10; j >= i; j--)
	  {
		  cout << "*";
	  }
	  cout << endl;
    }
    cout << endl;

    // Shape #03: Inverted triangle from 1 to 10
    for (int i = 10; i >= 1; i--)
    {
	  for (int j = 1; j <= i; j++)
	  {
		  cout << j << " ";
	  }
	  cout << endl;
    }
    cout << endl;

    // Shape #04: triangle from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
	 for (int j = 1; j <= i; j++)
	 {
		 cout << j << " ";
	 }
	 cout << endl;
    }
    cout << endl;

    // Shape #05: triangle from A to F
    for (int i = 65; i <= 70; i++)
    {
    	 for (int j = 65; j <= i; j++)
    	 {
    		 cout << char(j) << " ";
    	 }
    	 cout << endl;
    }

    cout << endl;
    // Shape #06: triangle from 1 to 10 but second line start from 2 to 10,
    // third line start from 3 to 10 ....... last line 10 only
    for (int i = 1; i <= 10; i++)
    {
    	 for (int j = i; j <= 10; j++)
    	 {
    		 cout << j << " ";
    	 }
    	 cout << "\n";
    }

	return 0;
}