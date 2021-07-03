// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int readInt(string &msg, int inf, int sup, int& value)
{
    int val;
    cin >> val;

    if(cin.fail() || cin.peek() != '\n')
    {
        if(cin.eof())
        {
            return -1;
        }

        return 0;
    }

    if (val > sup || val < inf)
    {
        return 0;
    }

    value = val;
    
    return 1;

}


int main()
{
    string msg = "Grade";
    int inf = 0, sup = 20, value, output;
    for (int i = 1; i <= 5; i++)
    {
        output = readInt(msg, inf, sup, value);
        cout << "output = " << output << " - value = " << value << endl;
    }
    return 0;
}