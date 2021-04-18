// Program that implements binary search algorithm

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &v, int value){

    int first = 0;
    int last = v.size() - 1;
    int middle;
    
    while (first <= last){
        middle = (first + last)/2;
        if (v[middle] == value)
            return middle;
        else if (value < v[middle])
            last = middle - 1;
        else
            first = middle + 1;

    }
    return -1;

}

int main()
{
    vector<int> v;
    int value;
    cout << "Fill your array with numbers (separated by spaces): ";
     do
     {
        cin >> value;
        v.push_back(value);

     } while (cin.peek() != '\n');

    cout << "Choose the value that we must search for: ";
    cin >> value;

    int search = binarySearch(v, value);
    if (search == -1)
        cout << "We did not find the value!" << endl;
    else
        cout << "The value is at the index number " << search << "." << endl;

    return 0;

}
