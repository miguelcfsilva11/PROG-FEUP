// Program that integrates functions

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

double integrateTR(double f(double), double a, double b, int n)
{
	double area = 0;
	double h = (b - a) / n;
	for (int i = 1; i <= n; i++)
	{
		area += h / 2 * (f(a + (i - 1) * h) + f(a + (i * h)));
	}
	return area;
}

double g(double x)
{
	return sqrt(4 - pow(x, 2));
}

double f(double x)
{
	return pow(x, 2);
}

int main()
{
	double a = 0, b = 10;
	double c = -2, d = 2;
	int n;
	cout << "How many partitions shall it have: ";
	cin >> n;
	cout << "The integral of x^2, [0, 10] is: " << integrateTR(f, a, b, n) << endl;
	cout << "The integral of sqrt(4 - pow(x, 2)), [-2, 2] is: " << integrateTR(g, c, d, n) << endl;

	return 0;
}
