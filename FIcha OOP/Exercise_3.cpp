// Program that works with the main aspects of OOP

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;


class Date
{

public:

    Date();
    Date(unsigned int year, unsigned int month,unsigned int day);
    Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
    void setYear(unsigned int year);
    void setMonth(unsigned int month);
    void setDay(unsigned int day);
    void setDate(unsigned int year, unsigned int month, unsigned int day);
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;
    string getDate() const; // returns the date in format "yyyy/mm/dd"
    void show() const; // shows the date on the screen in format "yyyy/mm/dd"

private:

    unsigned int year;
    unsigned int month;
    unsigned int day;

};

Date::Date(){
    this->year = 2002;
    this->month = 11;
    this->day = 22;

}

Date::Date(unsigned int year, unsigned int month,unsigned int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

void Date::setDate(unsigned int year, unsigned int month,unsigned int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

void Date::setYear(unsigned int year){
    this->year = year;
}

unsigned int Date::getYear() const {
    return this->year;
}

class Person
{


public:

    Person(string gender, string name, Date birthday);
    void showYear();


private:

    string gender;
    string name;
    Date birthday;


};

Person::Person(string gender, string name, Date birthday){
    this->gender = gender;
    this->name = name;
    this->birthday = birthday;
}

void Person::showYear(){
    cout << this->birthday.getYear() << endl;
}

int main()
{
    Date birthday(2002,9,29);
    Person Peter("Male", "Miguel", birthday);
    Peter.showYear();
}