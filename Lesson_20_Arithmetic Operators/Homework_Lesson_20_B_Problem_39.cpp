#include<iostream>

using namespace std;

int main()
{
	// Problem #39:

	float TotalBill, CashPaid, Remainder;
	cout << "Please, Enter the Total Bill: ";
	cin >> TotalBill;
	cout << "Please, Enter the Cash Paid: ";
	cin >> CashPaid;
	Remainder = CashPaid - TotalBill;
	cout << Remainder;

	return 0;
}