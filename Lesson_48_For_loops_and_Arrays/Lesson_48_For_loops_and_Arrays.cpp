#include<iostream>
#include<string>
using namespace std;

// Example: أسئل المستخدم كم مرة تريد ان تدخل رقم  من اللمت التالي 1 الى 100 واعرض القيم المدخله واحسب مجموعهم و الافرج تبعهم
void ReadArrayData(int Arr1[100], int& Length)
{
	cout << "How many number do you want to enter?\n";
	cin >> Length;
	for (int i = 0; i <= Length - 1; i++) // لماذا تنقص الطول 1 لان الاندكس يبدأ من الصفر
	{
		cout << "Enter number " << i + 1 << endl;
		cin >> Arr1[i];
	}
}

void PrintArrayData(int arr[100], int Length)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Number [" << i + 1 << "]: " << arr[i] << endl;
	}

}

int CalculateArraySum(int Arr[100], int Length)
{
	int sum = 0;
	for (int i = 0; i <= Length - 1; i++)
	{
		sum += Arr[i];
	}
	return sum;
}

float CalculateArrayAvrg(int Arr[100], int Length)
{
	return (float)CalculateArraySum(Arr, Length) / Length;
}


int main()
{
	// Without Optimization code:
	cout << "Without Optimization code:\n";
	int Arr1[100], Length;
	ReadArrayData(Arr1, Length);
	PrintArrayData(Arr1, Length);
	cout << "\n*****************************\n";
	cout << "Sum = " << CalculateArraySum(Arr1, Length) << endl;
	cout << "Average = " << CalculateArrayAvrg(Arr1, Length) << endl << endl << endl;

	// Optimization code:
	cout << "Optimization code:\n";
	int Arr2[100], Length, Sum;
	ReadArrayData(Arr2, Length);
	PrintArrayData(Arr2, Length);
	Sum = CalculateArraySum(Arr2, Length);
	cout << "\n*****************************\n";
	cout << "Sum = " << Sum << endl;
	cout << "Average = " << Sum / Length << endl;

	return 0;
}