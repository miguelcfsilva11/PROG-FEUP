#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, d, e, f;
	char comma;
	cout << "Take a look at the following system of linear equations\n";
	cout << "\na*x + b*y = c\nd*x + e*y = f\n";
	cout << "\nInsert your preferable coeficients to solve the system, separated by commas: ";
	cin >> a >> comma >> b >> comma >> c >> comma >> d >> comma >> e >> comma >> f;
	if (a * e - b * d == 0) {
		cout << "This equation can't be solved with the given variables...";
		return 0;
	}
	if (a == 0 && b == 0 && c == 0) {
		cout << "This equation can't be solved with the given variables...";
		return 0;
	}
	if (d == 0 && e == 0 && f == 0) {
		cout << "This equation can't be solved with the given variables...";
		return 0;
	}
	cout << "X is equal to: " << (c * e - b * f) / (a * e - b * d) << endl;
	cout << "Y is equal to: " << (a * f - c * d) / (a * e - b * d) << endl;
	return 0;
}
