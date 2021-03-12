// Program that prints out a table with the sin, cos, and tan of all angles separated by a given distance in a given interval

#include <iostream>
#include <cmath>
#include <algorithm>	// std::sort
#include <vector>		// use of vectors
using namespace std;
int main()
{
	int minLimit, maxLimit, distance;
	cout << "Give us the interval of the angles you want to evaluate!" << endl;
	cout << "Inferior Limit: ";
	cin >> minLimit;
	cout << "Superior Limit: ";
	cin >> maxLimit;
	cout << "Distance between angles: ";
	cin >> distance;
	int i = minLimit;
	cout << "ang    sin    cos    tan   " << endl;

	while (i < maxLimit) {
		cout << i << " "<< sin(i) << " " << cos(i) << " " << tan(i) << endl;
		i = i + distance;
	}

	return 0;
}
