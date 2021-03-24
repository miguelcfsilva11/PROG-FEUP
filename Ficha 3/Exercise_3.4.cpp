// Program that rounds numbers up to a given number of decimal places

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double round(double x, unsigned int n) {
	return floor(x * pow(10, n) + 0.5) / pow(10, n);
}

int main()
{
	double x;
	unsigned n;
	cout << "What number shall we round? ";
	cin >> x;
	cout << "To how many decimal places? ";
	cin >> n;
	cout << "The result is: " << round(x, n) << endl;
	return 0;

}
