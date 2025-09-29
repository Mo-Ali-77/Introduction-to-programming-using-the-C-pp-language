#include<iostream>
#include<string>
using namespace std;


int main()
{
	string Mystring = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The lenght of the Mystring is: " << Mystring.length() << endl;

	cout << Mystring[2] << endl;// Will print C

	string s1 = "10", s2 = "20";
	// string s1 = "AB", s2 = "CD";// هنا في عملية الدمج العملية صحيحة لكن في عملية الجمع بيضرب البرنامج
	string s3 = s1 + s2;
	cout << s3 << endl;// Will print 1020

	int sum = stoi(s1) + stoi(s2);
	cout << sum << endl;// Will print 30
	
	// Read string with space: solve the problem
	
	string FullName;
	cout << "Enter your name: ";
	getline(cin, FullName);
	cout << "Your name is: " << FullName;
	
		return 0;
}
