// Program that checks if there's overflow in the sum of two integers

#include <iostream>
#include <algorithm>	// std::sort
#include <vector>		// use of vectors
using namespace std;
int main()
{
	int num1, num2;
	cout << "Insert first number: ";
	cin >> num1;
	cout << "Insert second number: ";
	cin >> num2;
	if (num1 > 0 && num2 > 0 && num1 + num2 < 0)
		cout << "Overflow!" << endl;
	if (num1 < 0 && num2 < 0 && num1 + num2 > 0)
		cout << "Underflow!" << endl;
	else
		cout << "Clean!" << endl;
	return 0;

}
