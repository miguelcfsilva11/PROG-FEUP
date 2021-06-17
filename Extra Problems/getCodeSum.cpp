// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void getCodeSum(const string &codeGrades, int numGrades, string &code, double &sum)
{
    int row = 0;
    string name, separator;
    string line;
    double grade;
    ifstream reader(codeGrades);

    while(getline(reader, line))
    {
        istringstream iss(line);
        if (row == 0)
        {
            iss >> numGrades;
            row++;
            continue;

        }

        iss >> name;
        if (name == code)
        {
            int j = 0;
            while (j < numGrades)
            {
                if (j == 0){
                    iss >> separator;
                    j++;
                    continue;
                }

                iss >> grade;
                sum += grade;
                j++;

            }
            
            break;
        }
    
    }


}



int main()
{
    double sum = 0;
    string filename = "grades.txt";
    string code = "up20141007";
    getCodeSum(filename, 10, code, sum);
    cout << sum << endl;
    return 0;
}