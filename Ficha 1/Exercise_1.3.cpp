#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float roh, radius;
	cout << "Let's calculate the mass of this sphere!\nFor that, please give us some input!\n" << endl;
	cout << "Material Density (in Kg/m^3)? ";
	cin >> roh;
	cout << "Radius Length (in m)?";
	cin >> radius;
	cout << "Its mass is equal to: " << (4 / 3.0) * roh * acos(0) * 2 * pow(radius,3.0) << endl;

}
