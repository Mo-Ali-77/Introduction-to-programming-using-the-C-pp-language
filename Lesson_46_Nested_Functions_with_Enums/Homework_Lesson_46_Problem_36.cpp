#include<iostream>
#include<string>
using namespace std;

// Problem: #36
enum enOperator { Summation = 1, Subtraction = 2, Multiplication = 3, Division = 4 };

struct stCalculate
{
	double Num1, Num2;
	int	Operator;
};

void ShowCalculateMenue()
{
	cout << "----------------------- CALCULATE ----------------------\n\n";
	cout << "*****************************\n";
	cout << "(1) Summation\n";
	cout << "(2) Subtraction\n";
	cout << "(3) Multiplication\n";
	cout << "(4) Division\n";
	cout << "*****************************\n\n";
}

void ReadOperation(stCalculate& Operation)
{

	cout << "Enter Number1:\n";
	cin >> Operation.Num1;
	cout << "Enter Number2:\n";
	cin >> Operation.Num2;
	cout << "Choice Number to execute operation: ";
	cin >> Operation.Operator;
}

double SumOperator(stCalculate Operator)
{
	return Operator.Num1 + Operator.Num2;
}

double SubtractionOperator(stCalculate Operator)
{
	return Operator.Num1 - Operator.Num2;
}

double MultiplicationOperator(stCalculate Operator)
{
	return Operator.Num1 * Operator.Num2;
}

double DivisionOperator(stCalculate Operator)
{
	return Operator.Num1 / Operator.Num2;
}

double PrintOpreationResult(stCalculate Operations)
{
	switch (Operations.Operator)
	{
	case enOperator::Division:
		return DivisionOperator(Operations);
		break;
	case enOperator::Multiplication:
		return MultiplicationOperator(Operations);
		break;
	case enOperator::Subtraction:
		return SubtractionOperator(Operations);
		break;
	case enOperator::Summation:
		return SumOperator(Operations);
		break;
	default:
		return stod("Wrong Number choiced.\n");
	}

}



int main()
{
	ShowCalculateMenue();
	stCalculate MyCalculate;
	ReadOperation(MyCalculate);
	cout << "Result = " << PrintOpreationResult(MyCalculate);

	return 0;
}