#include<iostream>

using namespace std;


int main()
{
    unsigned short myage = 21;
    cout << myage << endl;

    //unsigned short myage;
    myage = 21;
    cout << myage << endl;
    myage = 23;
    cout << myage << endl;
    cout << "My age is " << myage << " years old." << endl;


    //Other Data Types:
    int myNumber = 52;
    float myFloatNumber = 7.84;
    double myDoubleNumber = 21.89822;
    char myLetter = 'M';
    string myText = "Mohammed";
    bool myBoolean = false;


    cout << myNumber << endl;
    cout << myFloatNumber << endl;
    cout << myDoubleNumber << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;


    //Variable: declare many varibales:
    short x = 4;
    short y = 10;
    int sum = x + y;
    cout << sum << endl;
    cout << x + y << endl;

    char char1 = 'A', char2 = 'B', char3 = 'C';
    cout << char1 << char2 << char3 << " reveresed is " << char3 << char2 << char1 << endl;

    // Name Rules :
    int age = 10, AAge = 50;

    // Not allowed
    /*int my Age;
    int My-Age;
    int My_age;
    int _Age;*/

    /* string 5NAme;
     string NAme5;
     string @NAme;
     string NAme#;
     string Sales& Amount;

     int for;
     int string;*/


     // Constants:
    const int MinutesPerHour = 60;
    // MinutesPerHour = 10; // you don't 
    cout << MinutesPerHour << endl;

	return 0;
}