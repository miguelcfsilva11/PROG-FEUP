// Program that implements bubble sort algorithm

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int bubbleSort(vector<int> &v){
    for (int j = 0; j < v.size(); j++)
        for (int i = 1; i < v.size(); i++){
            if (v[i] < v[i-1]){

                int previous = v[i-1];
                int next = v[i];

                v[i] = previous;
                v[i-1] = next;
            }
        }   
    
    return 0;
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

    cout << "Sorted: ";
    bubbleSort(v);
    
    for(int i = 0; i < v.size() ; i++){

        if (i == v.size() - 1)
        cout << v[i] << endl;

        else{
            cout << v[i] << ", ";
        }
    }

    return 0;

}
