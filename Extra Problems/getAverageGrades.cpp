// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// To fully understand grasp the problem's
// context please see 19/20 Programming UC Exam.
// Fourth Question.

int Student::getAverageGrade() const
{
    float sum = 0;
    for (auto c: grades)
    {
        sum += grades.second;
    }
    return (int) (sum / grades.size() + 0.5);
}