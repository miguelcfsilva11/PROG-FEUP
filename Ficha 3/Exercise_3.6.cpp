// Program that calculates the time elapsed between two pressed keys

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

time_t timeElapsed() {

	return time(NULL);
}

int main() {
	double start, end;
	char pass;

	cout << "Press any key to start the clock: ";
	cin >> pass;
	start = timeElapsed();
	cout << "The clock has started" << endl;
	cout << "Press any key to stop the clock: ";
	cin >> pass;
	end = timeElapsed();
	cout << "The clock has stopped" << endl;
	cout << "Total amount of time: " << (end - start) << endl;

	return 0;
}
