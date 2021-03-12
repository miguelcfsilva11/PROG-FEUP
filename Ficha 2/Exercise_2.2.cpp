// Program that computes the largest and smallest number out of three

#include <iostream>
using namespace std;
int main()
{
	int number;
	double thresholdMin;
	double thresholdMax;
	thresholdMin = 1000000000000;
	thresholdMax = -1000000000000;
	cout << "This program takes three numbers and computes the both the largest and smallest of the three" << endl;
	for (int count = 1; count <= 3; count++){
		cout << "Insert number: ";
		cin >> number;
		if (number < thresholdMin)
			thresholdMin = number;
		if (number > thresholdMax)
			thresholdMax = number;
		cout << thresholdMin << endl;
		cout << thresholdMax << endl;
		}
	cout << "The largest number is: " << thresholdMax << " and the smallest is: " << thresholdMin << endl;
	return 0;
}
