// Program that checks if the input is solely an integer and returns the sum of all inputs

#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 1; i <= 3; i++)
	{
		int value;
		cout << "Value number " << i << " : ";
		cin >> value;
		while (cin.fail() || cin.peek() != '\n')
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, reenter value number " << i << " : ";
			cin >> value;
		}
		sum = sum + value;
	}
	cout << "The sum is equal to: " << sum << endl;
	return 0;

}
