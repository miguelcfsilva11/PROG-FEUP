// Program that reads integers into an array, finds a given value out of all elements and computes the number of occurences of that same value

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int findMultValuesInArray(const int a[], size_t nElem, int value, size_t index[], size_t pos1 = 0, size_t pos2 = 10000)

{
    int j =  0;
    
    for(size_t i = 0; i < nElem; i++)
    {
        if (a[i] == value){
            index[j] = i;
            j++;
        }
    }

    return j;
}
int findValueInArray(const int a[], size_t nElem, int value, size_t pos1 = 0, size_t pos2 = 10000)
{
    if (pos2 == 10000)
        pos2 = sizeof(a);

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
    int a[10000], value, result;
    char comma, answer;
    size_t size_array, pos1, pos2, index[10000];

    cout << "What would be the size of your array? ";
    cin >> size_array;
    readArray(a, size_array);

    cout << "Which value would you want to search: ";
    cin >> value;
    cout << "Do you want to establish some limits? (Y/N): ";
    cin >> answer;

    if (answer == 'Y' | answer == 'y'){

        cout << "Index limits of search (separated by commas): ";
        cin >> pos1 >> comma >> pos2;
        result = findValueInArray(a, size_array, value, pos1, pos2);

    }
    else
        result = findValueInArray(a, size_array, value);

    if (result == -1)
        cout << "Value not found!" << endl;

    else
    {
        int size = findMultValuesInArray(a, size_array, value, index, pos1, pos2);
        cout << "Value found at index " << result << "." << endl;
        cout << "There are " << size << " occurrences of this values." << endl;
        cout << "Those values can be found at the following indeces: ";

        for( int i = 0; i < size; i++)
            cout << index[i]  << " ";

        cout << "." << endl;
    }

    return 0;

}
