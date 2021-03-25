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

// B) - Program that reduces a fraction by calculating the greatest common divisor between both numbers

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int gdc(int n1, int n2) // recursive version
{
	if (n1 % n2 == 0)
		return n2;
	else
		return gdc(n2, n1 % n2);
}

void reduceFraction(int& numerator, int& denominator)
{
	int common_divisor;
	char op;
	cout << "Insert a fraction (separated by '/'): ";
	cin >> numerator >> op >> denominator;
	if (cin.fail() || cin.peek() != '\n' || op != '/')
		cout << "Wrong operation!" << endl;
	else
	{
		common_divisor = gdc(numerator, denominator);
		cout << "Its reduced form is: " << numerator / common_divisor << "/" << denominator / common_divisor << endl;
	}

}

int main() {

	int n, d;
	reduceFraction(n, d);
	return 0;
}
