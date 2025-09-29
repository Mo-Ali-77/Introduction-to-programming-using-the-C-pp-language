#include<iostream>
#include<string>
using namespace std;

// Problem: #36

struct stCalaulator
{
	double Number1;
	double Number2;
	string OperationType;
};

void ReadOpration(stCalaulator &Operation)
{
	cout << "Enter Number1:\n";
	cin >> Operation.Number1;
	cout << "Enter Operation: ( + , - , * , / )\n";
	cin >> Operation.OperationType;
	cout << "Enter Number2:\n";
	cin >> Operation.Number2;
}

void SumOperator(stCalaulator Operator)
{
	cout << "Result = " << Operator.Number1 + Operator.Number2 << endl;
}

void SubtractionOperator(stCalaulator Operator)
{
	cout << "Result = " << Operator.Number1 - Operator.Number2 << endl;
}

void MultiplicationOperator(stCalaulator Operator)
{
	cout << "Result = " << Operator.Number1 * Operator.Number2 << endl;
}

void DivisionOperator(stCalaulator Operator)
{
	cout << "Result = " << Operator.Number1 / Operator.Number2 << endl;
}


void PrintOperationResult(stCalaulator Operation)
{

	if (Operation.OperationType == "+")
	{
		SumOperator(Operation);

	}
	else if (Operation.OperationType == "-")
	{
		SubtractionOperator(Operation);
	}
	else if (Operation.OperationType == "*")
	{
		MultiplicationOperator(Operation);
	}
	else if (Operation.OperationType == "/")
	{
		DivisionOperator(Operation);
	}
	else
	{
		cout << "wrong: " << Operation.OperationType << "\nPlease Enter one of these Operators: ( + , - , * , / )";
	}


}

int main()
{
	stCalaulator Sum;
	ReadOpration(Sum);
	PrintOperationResult(Sum);

	return 0;
}