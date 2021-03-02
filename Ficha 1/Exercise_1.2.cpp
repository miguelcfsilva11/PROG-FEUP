#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	float mean;
	cout << "Please, input 3 integer numbers!" << endl;
	cout << "A ? ";
	cin >> A;
	cout << "B ? ";
	cin >> B;
	cout << "C ? ";
	cin >> C;
	mean = (A + B + C)/3;
	cout << "The mean is: " << mean << endl;
	cout << "A - mean equals: " << A - mean << endl;
	cout << "B - mean equals: " << B - mean << endl;
	cout << "C - mean equals: " << C - mean << endl;


}
