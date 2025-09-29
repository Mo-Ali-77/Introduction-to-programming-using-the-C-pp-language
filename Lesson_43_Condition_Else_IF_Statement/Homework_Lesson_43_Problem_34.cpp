#include<iostream>
#include<string>
using namespace std;

// Problem: #33

// Problem: #34
struct stTotalSales
{
	double TotalSales;
};

void ReadTotalSales(stTotalSales &TotalSales)
{
	cout << "Enter TotalSales:\n";
	cin >> TotalSales.TotalSales;
}

void PrintTotalCommission(stTotalSales TotalSales)
{
	if (TotalSales.TotalSales >= 1000000)
	{
		const double Percentage = 0.01;
		double TotalCommission = TotalSales.TotalSales * Percentage;
		cout << "TotalCommission = " << TotalCommission << endl;
	}
	else if (TotalSales.TotalSales >= 500000)
	{
		const double Percentage = 0.02;
		double TotalCommission = TotalSales.TotalSales * Percentage;
		cout << "TotalCommission = " << TotalCommission << endl;
	}
	else if (TotalSales.TotalSales >= 100000)
	{
		const double Percentage = 0.03;
		double TotalCommission = TotalSales.TotalSales * Percentage;
		cout << "TotalCommission = " << TotalCommission << endl;
	}
	else if (TotalSales.TotalSales >= 50000)
	{
		const double Percentage = 0.05;
		double TotalCommission = TotalSales.TotalSales * Percentage;
		cout << "TotalCommission = " << TotalCommission << endl;
	}
	else
	{
		const unsigned short Percentage = 0;
		double TotalCommission = TotalSales.TotalSales * Percentage;
		cout << "TotalCommission = " << TotalCommission << endl;
	}
}

int main()
{
	stTotalSales TotalSales;
	ReadTotalSales(TotalSales);
	PrintTotalCommission(TotalSales);

	return 0;
}