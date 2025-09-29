#include<iostream>
#include<string>
using namespace std;

//Homework: Lesson 45

// Problem: #36 [Sol 2]

enum enOperator { Summation = 1, Subtraction = 2, Multiplication = 3, Division = 4 };

struct stCalculate
{
	double Num1, Num2;
	int	Temp;
};

void ReadOperation(stCalculate& Operation)
{
	cout << "----------------------- CALCULATE ----------------------\n\n";
	cout << "Enter Number1:\n";
	cin >> Operation.Num1;
	cout << "Enter Number2:\n";
	cin >> Operation.Num2;
	cout << "*****************************\n";
	cout << "(1) Summation\n";
	cout << "(2) Subtraction\n";
	cout << "(3) Multiplication\n";
	cout << "(4) Division\n";
	cout << "*****************************\n\n";
	cout << "Choice Number to execute operation: ";
	cin >> Operation.Temp;
}

void SumOperator(stCalculate Operator)
{
	cout << "Result = " << Operator.Num1 + Operator.Num2 << endl;
}

void SubtractionOperator(stCalculate Operator)
{
	cout << "Result = " << Operator.Num1 - Operator.Num2 << endl;
}

void MultiplicationOperator(stCalculate Operator)
{
	cout << "Result = " << Operator.Num1 * Operator.Num2 << endl;
}

void DivisionOperator(stCalculate Operator)
{
	cout << "Result = " << Operator.Num1 / Operator.Num2 << endl;
}

void PrintOpreationResult(stCalculate Operations)
{
	switch (Operations.Temp)
	{
	case enOperator::Division:
		DivisionOperator(Operations);
		break;
	case enOperator::Multiplication:
		MultiplicationOperator(Operations);
		break;
	case enOperator::Subtraction:
		SubtractionOperator(Operations);
		break;
	case enOperator::Summation:
		SumOperator(Operations);
		break;
	default:
		cout << "Wrong Number choiced.\n";
	}

}

int main()
{
	// Homework:
	// Problem: #36 [ Sol 2 ]
	stCalculate Calculate;
	ReadOperation(Calculate);
	PrintOpreationResult(Calculate);
	


	return 0;
}