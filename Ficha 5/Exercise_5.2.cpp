// Program that applies the bubblesort algorithm on a C++ string

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void bubbleSortString(vector<string>& v, char order)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        for(size_t j = 1; j < v.size(); j++)
        {
            if (v[j] < v[i])
            {
                string temp = v[j];
                v[j] = v[i];
                v[i] = temp;

            }
        }
    }
}

int main()
{
    vector<string> v = {"Miguel", "Ana", "Luís", "Pedro"}; 
    bubbleSortString(v, 'a');
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}