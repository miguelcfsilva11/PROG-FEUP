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

    int** board = (int**)malloc(sizeof(int)* numRows);

    for(int i = 0; i < numRows; i++)
    {
        board[i] = (int*)malloc(sizeof(int)* numCols);
    }

    // Rest of the program

    for(int i = 0; i < numRows; i++)    
    {
        free(board[i]);
    }

    free(board);

    return 0;
}