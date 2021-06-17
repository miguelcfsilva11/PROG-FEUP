// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

bool fileOpen(const string& filename);

bool getBets(string filename, vector<vector<int> > &vec)
{
    int i = 0, j = 1;
    int number;
    string bet;
    vector<int> oneBet = {};
    ifstream in(filename);
    stringstream ss;

    if(!fileOpen(filename))
    {
        cout << "We could not open the file!" << endl;
        return false;
    }
    while (getline(in, bet))
    {
        stringstream ss(bet);
        while (ss >> number)
        {
            i++;
        }
        if (i < 7)
        {
            cout << "Bet number " << j << " is incomplete!" << endl;
        }
        else
        {
            stringstream ss(bet);
            for (int n = 0; n < i; n++)
            {
                ss >> number;
                oneBet.push_back(number);
            }
            vec.push_back(oneBet);
            oneBet = {};
        }

        j++;
        i = 0;
    }

    return true;

}

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
    vector<vector<int>> vec;
    string filename = "game.txt";
    if(getBets(filename, vec))
    {
        for (int i = 0; i < vec.size(); i++)
        {
            for (int j = 0; j < vec[i].size(); j++){
                cout << vec[i][j] << ", ";
            }
            cout << '\n';
        }
    }    return 0;
}