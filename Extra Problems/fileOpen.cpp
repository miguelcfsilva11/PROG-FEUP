// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

bool fileOpen(const string& filename)
{
    ifstream in(filename);
    if (in.fail())
    {
        return false;
    }

    return true;
}

int main()
{
    string filename = "game.txt";
    if (!fileOpen(filename))
        cout << "We couldn't open the file!" << endl;
    return 0;
}