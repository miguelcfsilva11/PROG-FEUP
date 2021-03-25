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

// C) - Program that returns the day of the week of a certain date

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

int monthDays(int month, int year)
{
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

int dayWeek(int day, int month, int year)
{
	int m = month, s, a, c;
	s = year / 100;
	a = year % 100;

	switch (m)
	{
		case 1:
			if (isLeap(year))
				c = 6;
			else
				c = 0;
			break;

		case 2:
			if (isLeap(year))
				c = 2;
			else
				c = 3;
			break;
		case 3: case 11: c = 3; break;
		case 4: case 7: c = 6; break;
		case 5: c = 1; break;
		case 6: c = 4; break;
		case 8: c = 2; break;
		case 9: case 12: c = 5; break;
		case 10: c = 0; break;

	}

	return int(int(5 * a / 4) + c + day - 2 * (s % 4) + 7) % 7;
}

int main() {

	int day, month, year;
	int day_week;
	char separator;
	cout << "Pick a date (separated by '/'): ";
	cin >> day >> separator >> month >> separator >> year;
	day_week = dayWeek(day, month, year);

	switch (day_week)
	{
		case 0: cout << "It is Sunday that day!" << endl; break;
		case 1: cout << "It is Monday that day!" << endl; break;
		case 2: cout << "It is Tuesday that day!" << endl; break;
		case 3: cout << "It is Wednesday that day!" << endl; break;
		case 4: cout << "It is Thursday that day!" << endl; break;
		case 5: cout << "It is Friday that day!" << endl; break;
		case 6: cout << "It is Saturday that day!" << endl; break;
	}

	return 0;
}
