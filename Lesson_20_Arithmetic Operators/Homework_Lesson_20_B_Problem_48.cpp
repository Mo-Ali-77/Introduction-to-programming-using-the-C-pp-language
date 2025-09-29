#include<iostream>

using namespace std;


int main()
{
	// Problem #48:

	unsigned int LoanAmount, HowManyMonths, MonthlyInstallment;
	cout << "Please, Enter the Loan Amount: ";
	cin >> LoanAmount;
	cout << "How many months you need to settle the loan? ";
	cin >> HowManyMonths;
	MonthlyInstallment = LoanAmount / HowManyMonths;
	cout << MonthlyInstallment << " $";

	return 0;
}