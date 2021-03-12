// Program that calculates the cost of transporting a certain merchandise (based on its weight)

#include <iostream>
#include <algorithm>	// std::sort
#include <vector>		// use of vectors
using namespace std;
int main()
{
	int weight, difference;
	cout << "What's the weight of the merchandise? ";
	cin >> weight;
	if (weight <= 500) {
		cout << "The price of transporting is 5 euros!";
	}
	else if (500 < weight <= 1000) {
		difference = (weight - 500) / 100;
		cout << "The price of transporting is " << difference * 1.5 + 5 << " euros!" << endl;
	}
	else if (weight > 1000) {
		difference = (weight - 1000) / 250;
		cout << "The price of transporting is " << difference * 5 + 12.5 << " euros!" << endl;
	}

	return 0;
}
