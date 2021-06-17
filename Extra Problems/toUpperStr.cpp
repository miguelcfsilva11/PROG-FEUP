// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


void toUpperStr( string& str )
{
    for(size_t i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
}


void transformLine( string& str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }

    string strCopy = str;
    toUpperStr(str);

    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == strCopy[i])
        {
            if (str[i] != ' ')
                str[i] = ' ';
        }
    }

}


int main()
{
    string greeting = "Hey, my name is Miguel!";
    transformLine(greeting);
    cout << greeting << endl;
    return 0;
}