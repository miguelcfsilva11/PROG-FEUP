// Program that computes the square root of a given number based on Heron's Formula

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	int counter = 0;
	double n, delta, nMaxiter;
	double rq = 1;
	double rqn;
	double dif;
	cout << "Pick a number: ";
	cin >> n;
	cout << "Possible difference from the absolute square root: ";
	cin >> delta;
	cout << "For how many iterations: ";
	cin >> nMaxiter;
	
	for (int i = 0; i < nMaxiter; i++){
		rqn = (rq + n / rq) / 2;
		dif = n - pow(rqn, 2);
		if (dif > delta) {
			break;
		}
		rq = rqn;
	}
	cout << "The square root of " << n << " is: " << rqn << endl;
	return 0;


}
