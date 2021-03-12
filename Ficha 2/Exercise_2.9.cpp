// Program that checks if an unsigned int is a palindrome or not

#include <iostream>
#include <cmath>
#include <algorithm>	// std::sort
#include <vector>		// use of vectors
using namespace std;
int main()
{
	unsigned int pal;
	bool isPal = true;
	cout << "This program evaluates whether an integer is a palindrome or not" << endl;
	cout << "Choose an integer: ";
	cin >> pal;
	int aux = pal;
	int counter = 1;
	do {
		aux = aux / 10;
		counter++;
	} while (aux > 10);

	for (int i = 0; i < counter / 2; i++) {
		int divisor = pow(10, counter - (i*2+1));
		if (pal % 10 != pal / divisor) {
			isPal = false;
			break;
		}
		int exponent = pow(10, counter - ((i+1)*2));
		cout << exponent << endl;
		pal = pal / 10;
		pal = pal % exponent;

	}
	if (isPal)
		cout << "It is a palindrome!" << endl;
	else
		cout << "It is not a palindrome!" << endl;

	return 0;
}
