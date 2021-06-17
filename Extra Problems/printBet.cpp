// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;



void printBet(const vector<int> &aposta)
{
    for (int i = 1; i < 46; i++)
    {
        if (i%9 == 0)
        {
            cout << setw(5);
            if (find(aposta.begin(), aposta.end()-2, i) != aposta.end()-2)
                cout << i;
            else
                cout << " ";
            cout << "\n";
        }
        else
        {
            cout << setw(5);
            if (find(aposta.begin(), aposta.end()-2, i) != aposta.end()-2)
                cout << i;
            else
                cout << " ";
        }
    }
    cout << "\n";
    for (int i = 1; i < 10; i++)
    {
        cout << setw(5);
        if (find(aposta.end()-2, aposta.end(), i) != aposta.end())
            cout << i;
        else
            cout << " ";
    }
    cout << "\n";

}

int main()
{
    vector<int> aposta = {1, 7, 21, 36, 37, 2, 5};
    printBet(aposta);
    return 0;
}