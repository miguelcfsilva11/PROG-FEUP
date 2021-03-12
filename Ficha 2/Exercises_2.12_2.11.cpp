// Program that calculates the result of euler's mathematical series based on the given x value, the number of terms and the precision of the result

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int factorial(int n);

int main()
{
	int x, n, precision;
	cout << "What's the x value for the euler series: ";
	cin >> x;
	cout << "How many terms do you want: ";
	cin >> n;
	cout << "How many decimals places do you want in the result: ";
	cin >> precision;
	double result = 1;
	for (int i = 0; i < n; i++) {
		result = result + pow(x, i + 1) / factorial(i + 1);
			
	}
	cout << "The result is: " << fixed << setprecision(precision) << result << endl;
	return 0;
}

int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}
