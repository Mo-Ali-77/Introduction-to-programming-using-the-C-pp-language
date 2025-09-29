#include<iostream>

using namespace std;

int main()
{
	// Problem #40:

	float BillValue, TotalBill;
	cout << "Please, Enter the Bill Value: ";
	cin >> BillValue;
	TotalBill = BillValue * 1.1;// 1.1 = رسوم الخدمة Service fees.
	TotalBill = TotalBill * 1.16;// 1.16 = ضريبة المبيعات Sales tax
	cout << "The Total Bill = " << TotalBill;


	return 0;
}