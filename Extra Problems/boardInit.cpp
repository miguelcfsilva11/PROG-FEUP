// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


int main()
{
    vector <vector<char>> board;
    int numRows = 5, numCols = 5;
    char emptySymbol = '.';

    for(int i= 0; i < numRows; i++ )
    {
        vector<char> row = {};
        for(int j = 0; j < numCols; j++)
        {
            row.push_back(emptySymbol);

        }
        board.push_back(row);
    }

    for(int i= 0; i < numRows; i++ )
    {
        for(int j = 0; j < numCols; j++)
        {
            cout << board[i][j];

        }
        cout << endl;
    }

    return 0;
}