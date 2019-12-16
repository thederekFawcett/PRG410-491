// PRG410-491.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

double a = 0, b = 0, x = 0;
char operand;
double discriminant;

int main()
{
	cout << "Enter the first floating-point number: ";
	cin >> a;
	cout << "Enter the second floating-point number: ";
	cin >> b;
	cout << "Enter the operation to be performed ( + , - , * , / ): ";
	cin >> operand;
	cout << endl;

	switch (operand)
	{
	case '+':
		x = a + b;
		break;
	case '-':
		x = a - b;
		break;
	case '*':
		x = a * b;
		break;
	case '/':
		if (b != 0)
		{
			x = a / b;
		}
		else
		{
			cout << "Error! Denominator cannot be 0" << endl;
		}
		break;
	default:
		cout << "Invalid operand entered" << endl;
	}

	cout << showpoint << fixed << setprecision(2) << a;
	cout << " " << operand << " " << b << " = " << x << endl;

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
