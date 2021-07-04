#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string code;
    int grade;
};

bool compareStudents(Student student1, Student student2)
{
    return (student1.grade > student2.grade);
}

int main()
{
    vector <Student> students;
    string examName, aux;
    cin >> examName;
    fstream f(examName);
    if(f.fail())
    {
        cout << "There is no such file!" << endl;
        return 0;
    }

    stringstream ss;

    while(getline(f, aux))
    {
        Student student;
        ss << aux;
        ss >> student.code;
        ss >> student.grade;
        students.push_back(student);

    }

    sort(students.begin(), students.end(), compareStudents);

    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].grade << " - " << students[i].code << endl;
    }

    return 0;


}