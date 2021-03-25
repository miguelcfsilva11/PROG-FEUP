// A) - Program that verifies whether a given year is a leap year

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
	
	return 0;
}

// B) - Program that checks the numbers days a month has in a given year

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

bool isLeap(int year)
{
	if (year % 400 == 0)
		return true;
	else if(year % 4 == 0 && year % 100 != 0)
		return true;
	else
		return false;
}

int monthDays(int& month, int& year)
{
	char separator;
	cout << "Pick a month and a year (separated by '/'): ";
	cin >> month >> separator >> year;
	switch (month){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
		case 2:
			if (isLeap(year))
				return 29;
			else
				return 28;
	case 4: case 6: case 9: case 11: return 30;
	}

}


int main() {

	int days, month, year;
	days = monthDays(month, year);
	cout << "That month has " << days << " days!" << endl;
	return 0;
}
