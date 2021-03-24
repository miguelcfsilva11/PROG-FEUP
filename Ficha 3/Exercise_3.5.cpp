// Program that computes the greatest common divisor out of 2 numbers

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int gdc(int n1, int n2)
{
	if (n1 % n2 == 0)
		return n2;
	else
		return gdc(n2, n1 % n2);
}

int main()
{
	int n1, n2;
	char comma;
	cout << "Lets calculate the greatest common divisor of 2 given numbers." << endl;
	cout << "Pick both numbers, separated by commas: ";
	cin >> n1 >> comma >> n2;
	cout << "The greatest common divisor is: " << gdc(n1, n2) << endl;
	return 0;


}
