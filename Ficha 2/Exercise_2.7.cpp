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

// B) - Program that prints all prime numbers up until 1000

#include <iostream>
#include <algorithm>	// std::sort
#include <vector>		// use of vectors
using namespace std;
int main()
{
	int num;
	bool isPrime;
	isPrime = true;
	for (int i = 2; i < 1000; i++)
		for (int k = 2; k < 1000; k++)
			if (k > sqrt(i)) {
				cout << i << " ";
				break;
			}
			else if (i % k == 0)
				break;
	return 0;

}
// C) is the same algorithm but only up until 100

