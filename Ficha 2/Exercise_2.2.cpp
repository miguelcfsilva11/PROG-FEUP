// A) - Program that computes the largest and smallest number out of three

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

// B) - Program that computes the numbers in descending order

#include <iostream>
#include <algorithm>    // std::sort
#include <vector> 
using namespace std;
int main()
{
	int number1, number2, number3, i;
	cout << "This program takes three numbers and computes them by descending order" << endl;
	cout << "First number: ";
	cin >> number1;
	cout << "Second number: ";
	cin >> number2;
	cout << "Third number: ";
	cin >> number3;
	int myNumbers[] = { number1, number2, number3 };
	vector <int> myvector(myNumbers, myNumbers + 3);
	sort(myvector.begin(), myvector.begin() + 3, greater<int>());
	cout << "By descending order, we have: ";
	for (i = 0; i < myvector.size(); i++){
		cout << myvector[i] << " ";
	}
	return 0;
}
