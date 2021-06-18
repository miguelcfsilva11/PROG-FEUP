// Exercise to mess around with Structs

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    Person Joe;
    Joe.name = "Joe";
    Joe.age = 19;
    cout << Joe.age << endl;

    return 0;
}