// Program that calculates the factorial of a given number

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

unsigned long long factorial_rec(unsigned int number)
{
	if (number == 0)
		return 1;
	else
		return number * factorial_rec(number - 1);
}

int main()
{
	unsigned int number;
	cout << "Pick a number: ";
	cin >> number;
	cout << "The factorial of this number is: " << factorial_rec(number) << endl;
  return 0;
}
