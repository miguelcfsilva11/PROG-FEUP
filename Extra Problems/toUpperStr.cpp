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


string transformLine( string& str)
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

    return str;

}


void decomposeLine( string& line, vector<string>& words)
{
    string transLine = transformLine(line);
    stringstream ss(transLine);
    string name;

    while (ss >> name)
    {
        words.push_back(name);
    }

    for(size_t i = 0; i < words.size(); i++)
    {
        cout << words[i] << endl;
    }
}

int main()
{
    string greeting = "Hey, my name is Miguel!";
    vector<string> words;
    decomposeLine(greeting, words);
    return 0;
}