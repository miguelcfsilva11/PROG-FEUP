// Program that computes the square root of a given number based on Heron's Formula

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double square_root(double n, double delta, double nMaxiter)

{
	double rq = 1;
	double rqn;
	double dif;

	for (int i = 0; i < nMaxiter; i++) {
		rqn = (rq + n / rq) / 2;
		dif = n - pow(rqn, 2);
		if (dif > delta) {
			break;
		}
		rq = rqn;
	}
	return rqn;
}

int main()
{
	int counter = 0;
	double n, delta, nMaxiter;

	cout << "Pick a number: ";
	cin >> n;
	cout << "Possible difference from the absolute square root: ";
	cin >> delta;
	cout << "For how many iterations: ";
	cin >> nMaxiter;

	cout << "The square root of " << n << " is: " << square_root(n, delta, nMaxiter) << endl;
	return 0;


}
