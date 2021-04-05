// Program that reads integers into an array

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

void readArray(int a[], size_t nElem)
{
    for(size_t i = 0; i < nElem; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

int main()

{
    int a[10000];
    size_t size_array;
    cout << "What would be the size of your array? ";
    cin >> size_array;
    readArray(a, size_array);
    return 0;

}
