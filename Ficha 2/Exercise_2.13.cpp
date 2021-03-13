// B) - Program that computes the largest, the smallest, the sum and the mean out of all the numbers of a sequence

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	double x, sum = 0, counter = 0;
	int max = INT_MIN;
	int min = INT_MAX;
	do {
		cout << "Insert a number: ";
		cin >> x;
		if (x != 0) {
			sum = sum + x;
			counter++;
			if (x > max)
				max = x;
			if (x < min)
				min = x;
		}
	} while (x != 0);

	cout << "Mean: " << sum / counter << endl;
	cout << "Sum :" << sum << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

	return 0;


}
