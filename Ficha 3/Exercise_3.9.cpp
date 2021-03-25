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

// D) - Program that returns the calendar for a given month

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
	int day_week, month_length;
	char separator;
	cout << "Pick a month and a year (separated by '/'): ";
	cin >> month >> separator >> year;

	while (cin.fail() || cin.peek() != '\n' || month < 1 || month > 12)
	{
		cout << "Insert a valid date! ";
		cin >> month >> separator >> year;
	}

	day_week = dayWeek(1, month, year);
	month_length = monthDays(month, year);

	cout << string(50, '\n');

	switch (month) {
		case 1: cout << setw(10) << "Jan / " << year << endl; break;
		case 2: cout << setw(10) << "Feb / " << year << endl; break;
		case 3: cout << setw(10) << "Mar / " << year << endl; break;
		case 4: cout << setw(10) << "Apr / " << year << endl; break;
		case 5: cout << setw(10) << "May / " << year << endl; break;
		case 6: cout << setw(10) << "Jun / " << year << endl; break;
		case 7: cout << setw(10) << "Jul / " << year << endl; break;
		case 8: cout << setw(10) << "Aug / " << year << endl; break;
		case 9: cout << setw(10) << "Sep / " << year << endl; break;
		case 10: cout << setw(10) << "Oct / " << year << endl; break;
		case 11: cout << setw(10) << "Nov / " << year << endl; break;
		case 12: cout << setw(10) << "Dec / " << year << endl; break;
	}
	cout << "\n" << setw(5) << "Sun" << setw(5) << "Mon" << setw(5) << "Tue" << setw(5) << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat" << endl;
	cout << setw(5 * (7 - day_week));

	for (int j = 1; j <= month_length; j++) {
		cout << j << setw(5);
		if ((j + (6- day_week)) % 7 == 0)
			cout << "\n" << setw(5);
	}

	cout << string(5, '\n');

	return 0;
}

// E) - Program that returns the calendar for a certain year

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
	int day_week, month_length;
	cout << "Pick a a year: ";
	cin >> year;

	while (cin.fail() || cin.peek() != '\n')
	{
		cout << "Insert a valid year: ";
		cin >>  year;
	}
	cout << string(50, '\n');

	for (int m = 1; m <= 12; m++)
	{
		month = m;
		day_week = dayWeek(1, month, year);
		month_length = monthDays(month, year);


		switch (month) {
		case 1: cout << setw(10) << "Jan / " << year << endl; break;
		case 2: cout << setw(10) << "Feb / " << year << endl; break;
		case 3: cout << setw(10) << "Mar / " << year << endl; break;
		case 4: cout << setw(10) << "Apr / " << year << endl; break;
		case 5: cout << setw(10) << "May / " << year << endl; break;
		case 6: cout << setw(10) << "Jun / " << year << endl; break;
		case 7: cout << setw(10) << "Jul / " << year << endl; break;
		case 8: cout << setw(10) << "Aug / " << year << endl; break;
		case 9: cout << setw(10) << "Sep / " << year << endl; break;
		case 10: cout << setw(10) << "Oct / " << year << endl; break;
		case 11: cout << setw(10) << "Nov / " << year << endl; break;
		case 12: cout << setw(10) << "Dec / " << year << endl; break;
		}
		cout << "\n" << setw(5) << "Sun" << setw(5) << "Mon" << setw(5) << "Tue" << setw(5) << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat" << endl;
		cout << setw(5 * (7 - day_week));

		for (int j = 1; j <= month_length; j++) {
			cout << j << setw(5);
			if ((j + (6 - day_week)) % 7 == 0)
				cout << "\n" << setw(5);
		}
		cout << string(3, '\n');
	}

	return 0;
}
