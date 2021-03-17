// Program that simulates a calculator and stores values into memory allowing the user to manipulate them using the given commands

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{	

	double op1, op2, result, memory;
	string type, choice;
	cout << "This program executes simple algebraic operations" << endl;
	cout << "Possible operations (other than addition and subtraciton):\n* - for multiplying\n/ - for dividing\n" << endl;
	while (true) {
		cout << "First operand: ";
		cin >> op1;
		cout << "Second operand: ";
		cin >> op2;
		cout << "Type of operation: ";
		cin >> type;
		if (type == "*") {
			cout << op1 * op2 << endl;
			result = op1 * op2;
		}
		else if (type == "-") {
			cout << op1 - op2 << endl;
			result = op1 - op2;
		}
		else if (type == "+") {
			cout << op1 + op2 << endl;
			result = op1 + op2;
		}
		else if (type == "/") {
			cout << op1 / op2 << endl;
			result = op1 / op2;
		}
		cout << "What do you want to do with this result?\nPress M to save it, MC to to clear the memory\n";
		cout << "C to clear the contents of the display\nM+ or M- to add or subtract its content to the memory\n";
		cout << "And finaly, MR to show the content saved in memory.\n\nPick one of these options (write STOP to leave): ";
		cin >> choice;
		if (choice == "M")
			memory = result;
		else if (choice == "MR")
			cout << memory << endl;
		else if (choice == "C")
			cout << string(50, '\n');
		else if (choice == "M-")
			memory -= result;
		else if (choice == "M+")
			memory += result;
		else if (choice == "MC")
			memory = 0;
		else if (choice == "STOP")
			break;
	}
	return 0;
}
