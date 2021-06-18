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

bool Student::setGrade(int courseId, int grade)
{
    bool isEnrolled = false;

    for (size_t i = 0; i < courses.size(); i++)
    {
        if (courseId == courses[i].getId())
        {
            isEnrolled = true;
            break;
        }
    }

    if (!isEnrolled) return false;
    if(find(grades.begin(), grades.end(), courseId) != grades.end())
    {
        return false;
    }
    else
    {
        grades[courseId] = grade;
        return true;
    }
}