#include<iostream>
#include<conio.h>

using namespace std;

int addition(int a,int b)
{
	int r;
	
	r = a + b;
	return r;
}

int subtraction(int a, int b)
{
	int s;
	
	s = a - b;
	return s;
}

int multiplication(int a, int b)
{
	int t;
	
	t = a * b;
	return t;
}

int division(int a, int b)
{
	int u;
	
	u = a / b;
	
	return u;
}

int remain(int a, int b)
{
	int v;
	
	v = a % b;
	return v;
}

int main()
{
	int plus, minus, multiply, divide, remainder, a, b;
	int choice;
	char cont;
	bool userquit = false;
	
	do
	{
		cout << "----------------------OPERATIONS MENU----------------------\n";
		cout << "\t\t[1] Addition\n";
		cout << "\t\t[2] Subraction\n";
		cout << "\t\t[3] Multiplication\n";
		cout << "\t\t[4] Division\n";
		cout << "\t\t[5] Modulus\n";
		cout << "-----------------------------------------------------------\n";
		
		cout << "Enter your choice: ";
		cin >> choice;
	
		switch(choice)
		{
			case 1:
			cout << "Enter two integers: ";
			cin >> a >> b;
			plus = addition(a,b);
			cout << "-----------------------------------------------------------";
			cout << "\n\t\tThe result is " << plus;
			cout << "\n-----------------------------------------------------------\n";
			break;
		
			case 2:
			cout << "Enter two integers: ";
			cin >> a >> b;
			minus = subtraction(a,b);
			cout << "-----------------------------------------------------------";
			cout << "\n\t\tThe result is " << minus;
			cout << "\n-----------------------------------------------------------\n";
			break;
		
			case 3:
			cout << "Enter two integers: ";
			cin >> a >> b;
			multiply = multiplication(a,b);
			cout << "-----------------------------------------------------------";
			cout << "\n\t\tThe result is " << multiply;
			cout << "\n-----------------------------------------------------------\n";
			break;
		
			case 4:
			cout << "Enter two integers: ";
			cin >> a >> b;
			if(b == 0)
			{
				userquit = true;
				cout << "-----------------------------------------------------------";
				cout << "\n\t\tDivision by 0 is not allowed.\n";
				cout << "-----------------------------------------------------------";
				break;
			}
			else
			{
				userquit = false;
			}
			divide = division(a,b);
			cout << "-----------------------------------------------------------";
			cout << "\n\t\tThe result is " << divide;
			cout << "\n-----------------------------------------------------------\n";
			break;
		
			case 5:
			cout << "Enter two integers: ";
			cin >> a >> b;
			remainder = remain(a,b);
			cout << "-----------------------------------------------------------";
			cout << "\n\t\tThe result is " << remainder;
			cout << "\n-----------------------------------------------------------\n";
			break;
			
		}	
	
		cout << "\nContinue? Enter 'Y': ";
		cin >> cont;
		cout << "\n-----------------------------------------------------------\n";
	
		switch(cont)
		{
			case 'Y':
			case 'y':
				{
				userquit = false;
				break;
				}
			default:
				{
				userquit = true;
				cout << "\nTerminating the program!";
				}
		}
	}while(!userquit);
	
	getch();
	return 0;
}
