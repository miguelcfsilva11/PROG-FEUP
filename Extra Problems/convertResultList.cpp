// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


vector<string> convertResultList(const vector<unsigned int> &number, const vector<string> &name, const vector<float> &grade)
{
    string formattedString = "";
    vector<string> formattedStrings;
    for (size_t i = 0; i < number.size(); i++)
    {
        int nameSize = name[i].size();
        int numWhiteSpaceName = 40 - nameSize;
        for (int j = 0; j < numWhiteSpaceName; j++)
            formattedString += " ";
        formattedString += name[i] + " | " + to_string(grade[i]).substr(0,4);
        formattedStrings.push_back(formattedString);
    }

    return formattedStrings;

}

int main()
{

    vector<unsigned int> number = {202007972};
    vector<string> name = {"Miguel Silva"};
    vector<float> grade = {16.5};
    vector <string> formattedStrings = convertResultList(number, name, grade);

    for(size_t i = 0; i < formattedStrings.size(); i++)
    {
        cout << formattedStrings[i] << endl;
    }
    return 0;

}