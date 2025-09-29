#include<iostream>
#include<string>
using namespace std;

struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string PhoneNumber;
};
void ReadInfo(strInfo& Info) // نستخدم الاشارة & لكي نوصل لموقع المتغير ونقدر نعدل وان كان في المتغير في المين
{
	cout << "Enter first name:\n";
	cin >> Info.FirstName;
	cout << "Enter last name:\n";
	cin >> Info.LastName;
	cout << "Enter your age:\n";
	cin >> Info.Age;
	cout << "Enter phone number:\n";
	cin >> Info.PhoneNumber;
}

void PrintInfo(strInfo Info)
{
	cout << "****************************************\n";
	cout << "First Name: " << Info.FirstName << endl;
	cout << "Last Name: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone: " << Info.PhoneNumber << endl;
	cout << "****************************************\n";

}

// Homework: Lesson 38
//struct strSalary
/* {
	unsigned MonthlySalary;
	unsigned YearlySalary = MonthlySalary * 12;
};*/
//struct strInfoPerson
/* {
	string FullName;
	unsigned short Age;
	string City;
	string Country;
	char Gender;
	bool Married;
	strSalary Salary;
};*/

//void ReadInfo(strInfoPerson &Info)
/* {
	cout << "Enter full name:\n";
	cin.ignore(1, '\n');
	getline(cin, Info.FullName);
	cout << "Enter Age:\n";
	cin >> Info.Age;
	cout << "Enter City:\n";
	cin >> Info.City;
	cout << "Enter Country:\n";
	cin >> Info.Country;
	cout << "Enter Gender enter M\\F:\n";
	cin >> Info.Gender;
	cout << "Are you married enter 1\\0:\n";
	cin >> Info.Married;
	cout << "Entter Monthly Salary:\n";
	cin >> Info.Salary.MonthlySalary;
}*/

//void PrintInfo(strInfoPerson Info)
/* {
	cout << "**********************************\n";
	cout << "Full name: " << Info.FullName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "City: " << Info.City << endl;
	cout << "Country: " << Info.Country << endl;
	cout << "Country: " << Info.Country << endl;
	cout << "Gender: " << Info.Gender << endl;
	cout << "Married: " << Info.Married << endl;
	cout << "Monthly Salary: " << Info.Salary.MonthlySalary << endl;
	cout << "Yearly Salary: " << Info.Salary.YearlySalary << endl << endl;
	cout << "*******************************************************" << endl;
}*/

int main()
{
	strInfo InfoPerson1; // نستخدم الاشارة & لكي نوصل لموقع المتغير ونقدر نعدل وان كان في المتغير في المين
	cout << InfoPerson1.FirstName;

	ReadInfo(InfoPerson1);
	PrintInfo(InfoPerson1);

	//Homework: Lesson 38
	/*strInfoPerson Person;;
	ReadInfo(Person);
	PrintInfo(Person);*/




	return 0;
}