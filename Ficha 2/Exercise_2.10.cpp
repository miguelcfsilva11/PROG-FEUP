// Program that breaks down numbers into prime factors

#include <iostream>
#include <cmath>
#include <algorithm>	// std::sort
#include <vector>		// use of vectors
using namespace std;
int main()
{
	int num;
	cout << "Pick a number: ";
	cin >> num;
	cout << "The prime factors that result in this number are: ";
	for (int i = 2; i <= num; i++) {
		while (num % i == 0) {
			cout << i;
			num = num / i;
			if (num != 1)
				cout << " x ";
			else
				break;
		}
	}
	return 0;
}
