// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

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
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}