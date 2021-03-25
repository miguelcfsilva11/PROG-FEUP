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

// C) - Program that performs operations between fractions and returns the result in its reduced form

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
	common_divisor = gdc(numerator, denominator);
	cout << "Its reduced form is: " << numerator / common_divisor << "/" << denominator / common_divisor << endl;
}

void FractionOperations(int& numerator1, int& denominator1, int& numerator2, int& denominator2)
{
	char type, separator;
	int final_numerator, final_denominator;
	cout << "Insert type of operation between fractions: ";
	cin >> type;
	cout << "Insert first fraction (separated by '/'): ";
	cin >> numerator1 >> separator >> denominator1;
	while (cin.fail() || cin.peek() != '\n' || separator != '/')
	{
		cout << "Wrong Input! Insert it once again: ";
		cin >> numerator1 >> separator >> denominator1;
	}
	
	cout << "Insert second fraction (separated by '/'): ";
	cin >> numerator2 >> separator >> denominator2;
	while (cin.fail() || cin.peek() != '\n' || separator != '/')
	{
		cout << "Wrong Input! Insert it once again: ";
		cin >> numerator2 >> separator >> denominator2;
	}

	if (type == '*') {

		final_numerator = numerator1 * numerator2;
		final_denominator = denominator1 * denominator2;
		reduceFraction(final_numerator, final_denominator);
	}
	else if (type == '-') {

		final_numerator = (numerator1 * denominator2) - (numerator2 * denominator1);
		final_denominator = denominator1 * denominator2;
		reduceFraction(final_numerator, final_denominator);
	}
	else if (type == '+') {

		final_numerator = (numerator1 * denominator2) + (numerator2 * denominator1);
		final_denominator = denominator1 * denominator2;
		reduceFraction(final_numerator, final_denominator);
	}
	else if (type == '/') {

		final_numerator = numerator1 * denominator2;
		final_denominator = denominator1 * numerator2;
		reduceFraction(final_numerator, final_denominator);
	}
}

int main() {

	int n1, d1, n2, d2;
	FractionOperations(n1, d1, n2, d2);
	return 0;
}
