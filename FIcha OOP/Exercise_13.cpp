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
    const set<int> getMainSet();
    const set<int> getStarSet();

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
    set<int>::const_iterator it;
    while (mainSet.size() < 5)
    {
        int x = rand() % (10);
        mainSet.insert(x);
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

const set<int> Bet::getMainSet()
{
    return mainSet;
}

const set<int> Bet::getStarSet()
{
    return starSet;
}


int main()
{
    Bet bet1, bet2;
    bet1.entryMainSet();
    bet2.entryMainSet();

    set <int> mainSet1 = bet1.getMainSet();
    set <int> mainSet2 = bet2.getMainSet();

    set<int> intersect;
    vector<int> total;

    set_intersection(mainSet1.begin(), mainSet1.end(), mainSet2.begin(), mainSet2.end(), back_inserter(total));;

    for(int x : total)
    {
        cout << x << endl;
    }

    return 0;
}