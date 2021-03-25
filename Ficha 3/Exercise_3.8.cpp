// A) - Program that reads a fraction

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

bool readFraction(int& numerator, int& denominator)
{
	char op;
	cout << "Insert a fraction (separated by '/'): ";
	cin >> numerator >> op >> denominator;
	if (cin.fail() || cin.peek() != '\n' || op != '/')
		return false;
	else
		return true;

}

int main() {

	int n, d;
	if (readFraction(n, d))
		cout << "It's valid!" << endl;
	else
		cout << "Wrong Input!" << endl;

	return 0;
}
