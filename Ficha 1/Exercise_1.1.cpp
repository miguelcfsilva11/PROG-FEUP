// Program that prints out the ASCII value of a char

#include <iostream>
using namespace std;

int main()
{
	char c;
	cout << "Insert a character: ";
	cin >> c;
	cout << "ASCII Value of " << c << " is " << int(c);
	return 0;
}
