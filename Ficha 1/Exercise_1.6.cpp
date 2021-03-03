// Program that calculates triangle areas using Heron's formula

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, s;
	double x1, y1;
	double x2, y2;
	double x3, y3;
	char comma;
	
	cout << "1st Point Coordinates (separated by a comma): ";
	cin >> x1 >> comma >> y1;
	cout << "2st Point Coordinates (separated by a comma): ";
	cin >> x2 >> comma >> y2;
	cout << "3st Point Coordinates (separated by a comma): ";
	cin >> x3 >> comma >> y3;
	a = sqrt((pow(x2 - x1, 2.0) + (pow(y2 - y1, 2.0))));
	b = sqrt((pow(x3 - x1, 2.0) + (pow(y3 - y1, 2.0))));
	c = sqrt((pow(x2 - x3, 2.0) + (pow(y2 - y3, 2.0))));
	s = (a + b + c) / 2;
	cout << "The area of the given triangle is: " << sqrt(s * (s - a) * (s - b) * (s - c));
	return 0;
}
