// A) - Program that indicates whether a number is prime or not

#include <iostream>
#include <algorithm>	// std::sort
#include <vector>		// use of vectors
using namespace std;
int main()
{
	int num;
	bool isPrime;
	isPrime = true;
	cout << "Choose a number, lets check if it is prime or not: ";
	cin >> num;
	for (int i = 2; i < sqrt(num); i++)
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	if (not isPrime)
		cout << "It is not prime!" << endl;
	else
		cout << "It is prime!" << endl;
	return 0;


}
