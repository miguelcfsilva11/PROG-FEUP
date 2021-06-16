// Use STL Containers

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <string>

using namespace std;

class Bet
{
public:
    Bet();
    void fillMainNumbers();
    void fillStarNumbers();
    void entryMainSet();
    void entryStarSet();

private:
    vector<int> mainNumbers;
    vector<int> starNumbers;
    set<int> starSet;
    set<int> mainSet;

};

Bet::Bet()
{
    
}

void Bet::entryMainSet()
{
    int i = 0;
    while (i < 5)
    {
        mainSet.insert(rand() % (10));
        i++;
    }
    set<int>::const_iterator it;
    for (it = mainSet.begin(); it != mainSet.end(); it++)
    {
        cout << *it << endl;
    }
}


void Bet::fillMainNumbers()
{
    for (int i = 0; i < 50; i++)
    {
        mainNumbers.push_back(i);
    }

    random_shuffle(mainNumbers.begin(), mainNumbers.end());
    for (int i = 0; i < 50; i++)
    {
        if (i < 5)
        {
            continue;
        }
        else
            mainNumbers.erase(mainNumbers.begin() + 5);
    }

    for (int i = 0; i < mainNumbers.size(); i++)
    {
        cout << mainNumbers[i] << endl;
    }

}

void Bet::fillStarNumbers()
{
    for (int i = 0; i < 10; i++)
    {
        starNumbers.push_back(i);
    }

    random_shuffle(starNumbers.begin(), starNumbers.end());
    for (int i = 0; i < 10; i++)
    {
        if (i < 2)
        {
            continue;
        }
        else
            starNumbers.erase(starNumbers.begin() + 5);
    }

    for (int i = 0; i < starNumbers.size(); i++)
    {
        cout << starNumbers[i] << endl;
    }

}


int main()
{
    Bet bet;
    bet.entryMainSet();
    return 0;
}