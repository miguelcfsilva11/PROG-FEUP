// Program that checks whether a number is prime

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>
using namespace std;

bool is_prime(int num) {

	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}


int main()
{
	int num;
	bool answer;
	cout << "Pick a number: ";
	cin >> num;
	answer = is_prime(num);
	if (answer)
		cout << "It is not prime!" << endl;
	else
		cout << "It is prime!" << endl;

	return 0;
}
