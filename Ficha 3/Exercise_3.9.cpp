// Program that verifies whether a given year is a leap year

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

bool isLeap(int& year)
{
	cout << "Pick a year: ";
	cin >> year;
	if (year % 400 == 0)
		return true;
	else if(year % 4 == 0 && year % 100 != 0)
		return true;
	else
		return false;
}

int main() {

	int year;
	if (isLeap(year))
	{
		cout << "It is a leap year!" << endl;
	}
	else
	{
		cout << "It is not a leap year!" << endl;
	}
}
