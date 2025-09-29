#include<iostream>

using namespace std;

int main()
{
	// Problem #47:

	unsigned int LoanAmount, MonthlyInstallment, TotalMonths;
	cout << "Please, Enter the Loan Amount: ";
	cin >> LoanAmount;
	cout << "Please, Enter the Monthly Payment: ";
	cin >> MonthlyInstallment;
	TotalMonths = LoanAmount / MonthlyInstallment;
	cout << TotalMonths << " Months";

	return 0;
}