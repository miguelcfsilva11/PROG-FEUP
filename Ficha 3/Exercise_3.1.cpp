// Program that computes the area of a given triangle based on its coordinates (using Heron's formula)

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {

	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

}


double area(double x1, double y1, double x2, double y2, double x3, double y3) {

	double a = distance(x1, y1, x2, y2);
	double b = distance(x1, y1, x3, y3);
	double c = distance(x2, y2, x3, y3);
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));


}

int main()
{
	char comma;
	double x1, y1, x2, y2, x3, y3;
	cout << "This program computes the area of a given triangle.\nPlease tell us the coordinates of the its vertices (separated by commas).\n" << endl;
	cout << "Select the coordinates for the first vertex: ";
	cin >> x1 >> comma >> y1;
	cout << "Select the coordinates for the second vertex: ";
	cin >> x2 >> comma >> y2;
	cout << "Select the coordinates for the third vertex: ";
	cin >> x3 >> comma >> y3;
	double res = area(x1, y1, x2, y2, x3, y3);
	cout << "The area of this triangle is: " << res << endl;
	return 0;
}
