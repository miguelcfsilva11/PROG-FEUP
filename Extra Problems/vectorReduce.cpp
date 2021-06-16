// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

void vectorReduce(vector<unsigned int>& v, vector<unsigned int>&d)
{
    int counter = 0;
    for (int i = 0; i < d.size(); i++)
    {
        if (find(v.begin(), v.end(), d[i]) != v.end())
        {
            d.erase(d.begin() + i);
            counter++;

        }
    }
}

vector<unsigned int> genRandom(unsigned int n, unsigned int m)
{
    vector<unsigned int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(rand() % (m + 1));
    }
    return v;
}


int main()
{
    vector<unsigned int> v = genRandom(5, 5);
    vector<unsigned int> d = genRandom(4, 4);
    vectorReduce(v, d);
    
    return 0;
}