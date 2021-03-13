// Program that checks if the user knows how to multiply 2 given numbers. If he takes more than 10 seconds, that answer will be graded as "Insufficient!"

#include <iostream>
#include <cmath>
#include <iomanip>
#include <chrono>
using namespace std;
using namespace chrono;


int main()
{
	steady_clock sc;
	auto start = sc.now();
	int answer;
	int num1 = rand() % 8 + 2;
	int num2 = rand() % 8 + 2;
	int result = num1 * num2; 
	cout << "What's the result of " << num1 << " x " << num2 << "? ";
	cin >> answer;
	auto end = sc.now();
	auto time_span = static_cast<duration<double>>(end - start);
	if (answer != result) {
		cout << "Very Bad!" << endl;
		return 0;
	}
	else if (time_span.count() < 5) {
		cout << "Good!" << endl;
		return 0;
	}
	else if (5 <= time_span.count() && time_span.count() < 10) {
		cout << "Satisfactory!" << endl;
		return 0;
	}
	else if (time_span.count() > 10) {
		cout << "Insufficient!" << endl;
		return 0;
	}
}
