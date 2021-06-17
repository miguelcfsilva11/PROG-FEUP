// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void showApproved(ostream &out, const vector<int> &integers) {
    for (int i = 0; i < integers.size(); i++)
    {
        out.rdbuf(cout.rdbuf());
        if (integers[i] >= 10)
        {
            out << "Candidate number " << i + 1 << " has passed" << endl;
        }
    }
}



int main()
{
    vector<int> integers = {10, 12, 8, 14};
    ostream out(NULL);
    showApproved(out, integers);
    return 0;
}