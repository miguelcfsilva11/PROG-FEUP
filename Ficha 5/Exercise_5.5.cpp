// Program that normalizes a Portuguese name

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

void normalizeName(const string &name)
{
    vector<string> cals;
    vector<string> forbid = {"DE", "DO", "DA", "DOS", "DAS", "E"};
    string cal;
    istringstream iss(name);

    while(!iss.eof())
    {
        iss >> cal;
        if (find(forbid.begin(), forbid.end(), cal) == forbid.end())
            cals.push_back(cal);   
    }

    for (size_t i = 0; i < cals.size(); i++)
    {
        cout << cals[i] << endl;
    }

}


int main()
{
    string name;
    getline(cin, name);
    normalizeName(name);
}