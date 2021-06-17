// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// See toUpperStr.cpp to fully understand
// the problem's context and main objectives

int main()
{   
    ifstream inputFile("C:\\docs\\text.txt");
    vector<string> total;
    string line;

    while (getline(inputFile,line)) // Using the stream to store lines on "line" variable
    {
        vector<string> v;
        decomposeLine(line, &v);
        total.insert(total.end(), v.begin(), v.end()); // At the end of our pointer, insert the words we got
    }

    inputFile.close();
    sort(total.begin(), total.end());
    ofstream outFile("C:\\docs\\words.txt"); // Output stream

    for (string s : total)
    {
        outFile << s << endl; // Write to output
    }
    outFile.close();
}