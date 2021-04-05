// Program that reads integers into an array

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2)
{
    for(size_t i = pos1; i < pos2; i++)
    {
        if (a[i] == value)
            return i;
    }

    return -1;
}

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
    int a[10000], value;
    char comma;
    size_t size_array, pos1, pos2;
    cout << "What would be the size of your array? ";
    cin >> size_array;
    readArray(a, size_array);
    cout << "Which value would you want to search: ";
    cin >> value;
    cout << "Index limits of search (separated by commas): ";
    cin >> pos1 >> comma >> pos2;
    int result = findValueInArray(a, size_array, value, pos1, pos2);
    if (result == -1)
    {
        cout << "Value not found!" << endl;
    }
    else
    {
        cout << "Value found at index " << result << "." << endl;
    }


    return 0;

}
