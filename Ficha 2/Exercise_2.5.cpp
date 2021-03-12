// Program that indicates whether the two values that solve a quadratic equation are the same, different, or complex

#include <iostream>
#include <algorithm>	// std::sort
#include <vector>		// use of vectors
using namespace std;
int main()
{
	int a, b, c, discretive;
	cout << "Please, tell me the coeficients of the quadratic formula you're trying to solve!" << endl;
	cout << "A (x^2): ";
	cin >> a;
	cout << "B (x): ";
	cin >> b;
	cout << "C (constant): ";
	cin >> c;
	discretive = pow(b, 2) - 4 * a * c;
	if (discretive == 0)
		cout << "This quadratic equation has 2 equal solutions!" << endl;
	else if(discretive > 0)
		cout << "This quadratic equation has 2 different solutions!" << endl;
	else if(discretive < 0)
		cout << "This quadratic equation has 2 complex solutions!" << endl;
	return 0;
}
