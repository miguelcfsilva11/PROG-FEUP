// Program that calculates the money that you can withdraw based on the anual interest given, the deposit made and how many years have passed ever since

#include <iostream>
#include <algorithm>	// std::sort
#include <vector>		// use of vectors
using namespace std;
int main()
{
	double deposited, years, anualInterest;
	cout << "Deposit (in dollars): ";
	cin >> deposited;
	cout << "How many years have passed ever since: ";
	cin >> years;
	cout << "What is the bank's anual interest (%): ";
	cin >> anualInterest;
	for (int i = 0; i < years; i++)
		deposited = deposited + (deposited * anualInterest / 100);
	cout << "You may withdraw " << deposited << " dollars" << endl;
	return 0;
}
