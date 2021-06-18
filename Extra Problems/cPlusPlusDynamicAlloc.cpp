// Exercise to train C++ dynamic allocation

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int numRows, numCols;
    cin >> numRows >> numCols;

    int** board = new int* [numRows];

    for (int i = 0; i < numRows; i++)
    {
        board[i] = new int [numCols];

    }
    // Rest of the program

    for(int i = 0; i < numRows; i++)    
    {
        delete [] board[i];
    }

    delete [] board;

    return 0;
}