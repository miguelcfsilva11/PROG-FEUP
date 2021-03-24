// Program that verifies whether the input is an integer

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

bool readInt(int& x) {
	cout << "Insert number: ";
	cin >> x;

	if (cin.fail() || cin.peek() != '\n') {
		cin.clear();
		cin.ignore(10000, '\n');
		return false;
	}
	else {
		cin.clear();
		cin.ignore(10000, '\n');
		return true;
	}
}

int main() {

	int n;
	if (readInt(n))
		cout << "It's valid!" << endl;
	else
		cout << "Not valid!" << endl;

	return 0;
}
